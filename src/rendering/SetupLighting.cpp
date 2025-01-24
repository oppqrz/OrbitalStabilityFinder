#include "../include/rendering/SetupLighting.hpp"

void setupLighting() {
    glEnable(GL_LIGHTING);    // Enable lighting
    glEnable(GL_LIGHT0);      // Enable light 0

    // Call helper functions to set up properties
    setupLightProperties();
    setupMaterialProperties();
}

void setupLightProperties() {
    GLfloat light_position[] = { 0.0f, 0.0f, 0.0f, 1.0f };  // Light at the origin (close to the Sun)
    GLfloat light_ambient[] = { 0.5f, 0.5f, 0.5f, 1.0f };   // Ambient light color (soft light)
    GLfloat light_diffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f };   // White light (sunlight)

    glLightfv(GL_LIGHT0, GL_POSITION, light_position);  // Set light position
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);    // Set light ambient color
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);    // Set light diffuse color
}

void setupMaterialProperties() {
    GLfloat mat_diffuse[] = { 1.0f, 0.0f, 0.0f, 1.0f };   // Red color for spheres
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);      // Apply diffuse color to objects
}