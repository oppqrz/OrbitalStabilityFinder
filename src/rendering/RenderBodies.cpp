#include "../include/rendering/RenderBodies.hpp"
#include <iostream>
#include <cmath>
#include <GL/glu.h> // Include GLU for gluSphere

void renderBodies(GLFWwindow* window, const std::vector<Body>& renderedBodies) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);   // Clear both the color and depth buffers

    static GLUquadric* quadric = nullptr;  // Create a static quadric for reuse
    if (!quadric) {
        quadric = gluNewQuadric();  // Initialize the quadric once
    }

    for (const auto& body : renderedBodies) {
        glPushMatrix();  // Save the current matrix state

        // Scale positions for astronomical distances
        // Distances are scaled down by a factor of scale distance to keep them easily visible by the camera
        double scale_distance = 1E8;
        glTranslatef(body.PosX / scale_distance, body.PosY / scale_distance, body.PosZ / scale_distance);

        // Calculate radius Relative to largest object
        float largestRadius = renderedBodies[0].Radius;
        float renderedRadius = (body.Radius / largestRadius) * 50.0f;  // Scale relative to largest
        renderedRadius = std::max(renderedRadius, 20.0f);  

        gluSphere(quadric,renderedRadius, 20, 20);  // Render the sphere with the calculated radius

        glPopMatrix();  // Restore the matrix state
    }

    glfwSwapBuffers(window);  // Swap buffers (display the rendered frame)
    glfwPollEvents();         // Poll events (like keypresses or window close)
}