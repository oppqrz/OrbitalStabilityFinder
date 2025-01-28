#include "../include/core/SimulateTime.hpp"
#include <omp.h>
#include <iostream>
#include <cmath>

double GetLargestPositionComponent(const std::vector<Body>& allBodies) {
    double maxPos = 0.0;
    for (const auto& body : allBodies) {
        maxPos = std::max(maxPos, std::max(std::fabs(body.PosX), 
                            std::max(std::fabs(body.PosY), std::fabs(body.PosZ))));
    }
    return maxPos;
}

std::vector<Body> SimulateTime(std::vector<Body> allBodies, double maxTime) {

    const double timeStep = 1;
    const int checkInTime = 60 * 60 * 24; // How frequently to Render and print out the time passed, By default its a day.

    
    for (auto body: allBodies) {
        body.historicPosX.reserve(maxTime);
        body.historicPosY.reserve(maxTime);
        body.historicPosZ.reserve(maxTime);
    }

    int nT = 0;
    while (maxTime <= 0 || nT <= maxTime) {
        nT++;
        for (int i = 0; i < allBodies.size(); i++) {
            for (int j = i + 1; j < allBodies.size(); j++) {
                UpdateVelocityPair3(allBodies[i], allBodies[j]);
            }
        }
        for (int i = 0; i < allBodies.size(); i++) {
            allBodies[i].historicPosX.push_back(allBodies[i].PosX);
            allBodies[i].historicPosY.push_back(allBodies[i].PosY);
            allBodies[i].historicPosZ.push_back(allBodies[i].PosZ);
            UpdatePosition(allBodies[i], timeStep);
        }
        if (nT % checkInTime == 0) {
            // std::cout << "Time Passed :  " << timeStep * nT / checkInTime << " Days " << std::endl;
        } 
    }
    return allBodies;
}


std::vector<Body> SimulateTimeParralel(std::vector<Body> allBodies, double maxTime) {
    const double timeStep = 1;
    const int checkInTime = 60 * 60 * 24; // How frequently to Render and print out the time passed, By default its a day.

    int nT = 0;
    while (maxTime <= 0 || nT <= maxTime) {
        nT++;
        #pragma omp parallel for
        for (int i = 0; i < allBodies.size(); i++) {
            for (int j = i + 1; j < allBodies.size(); j++) {
                UpdateVelocityPair3(allBodies[i], allBodies[j]);
            }
        }
        for (int i = 0; i < allBodies.size(); i++) {
            UpdatePosition(allBodies[i], timeStep);
        }
        if (nT % checkInTime == 0) {
            // std::cout << "Time Passed :  " << timeStep * nT / checkInTime << " Days " << std::endl;
        } 
    }
    return allBodies;
}

std::vector<Body> SimulateTimeAndRender(std::vector<Body> allBodies, double maxTime) {
    auto window = initaliseRendering();
    bool hasCollision = false;

    double largestPos = GetLargestPositionComponent(allBodies);

    // Set up the camera and lighting once
    setupCameraPerspective(largestPos);
    setupLighting();
    double timeStep = 1;
    int checkInTime = 60 * 60 * 24; // How frequently to Render and print out the time passed, By default its a day.

    int nT = 0;
    while (!glfwWindowShouldClose(window) && (maxTime <= 0 || nT <= maxTime)) {
        nT++;
        for (int i = 0; i < allBodies.size(); i++) {
            for (int j = i + 1; j < allBodies.size(); j++) {
                UpdateVelocityPair3(allBodies[i], allBodies[j]);
            }
        }
        for (int i = 0; i < allBodies.size(); i++) {
            UpdatePosition(allBodies[i], timeStep);
            for (int j = i + 1; j < allBodies.size(); j++) {
                hasCollision = HandleCollisions(&allBodies[i], &allBodies[j]);
                if(hasCollision){
                    std::cout << "COLLISION" << std::endl;
                    return allBodies;
                }
            }
        }

        if (nT % checkInTime == 0) {
            renderBodies(window, allBodies);  // Call the render function to update the visualization
            // std::cout << "Time Passed :  " << timeStep * nT / checkInTime << " Days " << std::endl;
        } 
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    return allBodies;
}

