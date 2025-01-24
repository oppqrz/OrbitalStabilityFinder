#include "../include/rendering/InitaliseRendering.hpp"


GLFWwindow* initaliseRendering()
{
     // Initialize GLFW
    if (!glfwInit()) {
        std::cerr << "GLFW Initialization failed!" << std::endl;
        return nullptr;
    }

    GLFWwindow* window = glfwCreateWindow(2560, 1440, "3D Body Simulation", NULL, NULL);
    if (!window) {
        std::cerr << "GLFW Window creation failed!" << std::endl;
        glfwTerminate();
        return nullptr;
    }
    
    glfwMakeContextCurrent(window);
    gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);

    glEnable(GL_DEPTH_TEST);  // Enable depth testing for 3D rendering
    
    return window;
}