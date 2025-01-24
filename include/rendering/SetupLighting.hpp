#ifndef LIGHTING_HPP
#define LIGHTING_HPP

#include <GL/gl.h>  // For OpenGL types and functions

// Function to set up lighting
void setupLighting();

// Function to set up light properties (position, ambient, diffuse)
void setupLightProperties();

// Function to set up material properties
void setupMaterialProperties();

#endif