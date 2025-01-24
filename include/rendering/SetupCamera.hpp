#ifndef CAMERA_HPP
#define CAMERA_HPP

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <GL/glu.h>

// Function to set up the camera
void setupCameraPerspective(double maxDistance);
void setupCameraOrtho(double range);

#endif