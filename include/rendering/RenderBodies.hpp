#ifndef RENDERBODIES_HPP
#define RENDERBODIES_HPP

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <vector>
#include "../models/Body.hpp"

// Function to render celestial bodies
void renderBodies(GLFWwindow* window, const std::vector<Body>& renderedBodies);

#endif // RENDER_HPPBODIES
