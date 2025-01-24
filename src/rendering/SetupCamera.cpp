#include "../include/rendering/SetupCamera.hpp"
#include <cmath>
#include <iostream>

// Set up the camera
void setupCameraPerspective(double maxDistance){
    glMatrixMode(GL_PROJECTION);    // Switch to the projection matrix
    glLoadIdentity();               // Load identity matrix to reset

    maxDistance= maxDistance/1E8;
    double cameraZPosition = 5500.0; //(camera at 5500 million km)
    double fov = 2.0 * atan(maxDistance / fabs(cameraZPosition)) * (180.0 / M_PI);  // Convert to degrees

    //for a dynamic fov
    gluPerspective(fov, 2560.0f / 1440.0f, 1.0f, 1E15f);

    glMatrixMode(GL_MODELVIEW);     // Switch to the modelview matrix
    glLoadIdentity();               // Load identity matrix for modelview

    // Set the camera position and orientation (eye, center, up)
    gluLookAt(0.0f, 0.0f, cameraZPosition,  // Eye position (camera at 5500 million km)
              0.0f, 0.0f, 0.0f,   // Look-at position (origin where Sun is)
              0.0f, 1.0f, 0.0f);  // Up vector (y-axis)
}

void setupCameraOrtho(double range){
    glMatrixMode(GL_PROJECTION);    // Switch to the projection matrix
    glLoadIdentity();               // Load identity matrix to reset

    // Set up an orthographic projection (left, right, bottom, top, near, far)
    double scale = 1E3; // Adjust the scale to fit the solar system
    glOrtho(-scale, scale, -scale, scale, -scale, scale);

    glMatrixMode(GL_MODELVIEW);     // Switch to the modelview matrix
    glLoadIdentity();               // Load identity matrix for modelview

    // Set the camera position and orientation (eye, center, up)
    gluLookAt(0.0f, 0.0f, 500.0f,  // Eye position (arbitrary Z for visibility)
              0.0f, 0.0f, 0.0f,   // Look-at position (origin where Sun is)
              0.0f, 1.0f, 0.0f);  // Up vector (y-axis)
}
