#include "../include/core/SimulateTime.hpp"



int SimulateTime(std::vector<Body> AllBodies) {

    double timeStep = 1;
    int checkInTime = 60 * 60 * 24; // How frequently to Render and print out the time passed, By default its a day.

    int nT = 0;
    while(true) {
        nT++;
        for (int i = 0; i < AllBodies.size(); i++) {
            for (int j = 0; j < AllBodies.size(); j++) {
                if (i == j) {
                    continue;
                } else {
                    UpdateVelocity(AllBodies[i], AllBodies[j]);
                }
            }
            UpdatePosition(AllBodies[i], timeStep);
        }
        if (nT % checkInTime == 0) {
            std::cout << "Time Passed :  " << timeStep * nT / checkInTime << " Days " << std::endl;
        } 
    }
    return 0;
}



int SimulateTimeAndRender(std::vector<Body> AllBodies) {
    auto window = initaliseRendering();

    // Set up the camera and lighting once
    setupCameraPerspective(AllBodies.back().PosY);
    setupLighting();
    double timeStep = 1;
    int checkInTime = 60 * 60 * 24; // How frequently to Render and print out the time passed, By default its a day.

    int nT = 0;
    while (!glfwWindowShouldClose(window)) {
        nT++;
        for (int i = 0; i < AllBodies.size(); i++) {
            for (int j = 0; j < AllBodies.size(); j++) {
                if (i == j) {
                    continue;
                } else {
                    UpdateVelocity(AllBodies[i], AllBodies[j]);
                }
            }
            UpdatePosition(AllBodies[i], timeStep);
        }

        if (nT % checkInTime == 0) {
            renderBodies(window, AllBodies);  // Call the render function to update the visualization
            std::cout << "Time Passed :  " << timeStep * nT / checkInTime << " Days " << std::endl;
        } 
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
