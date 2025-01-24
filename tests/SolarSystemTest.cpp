#include <iostream>
#include <vector>
#include <cmath>

#include "../include/models/Body.hpp"
#include "../data/SolarSystem.hpp"
#include "../include/rendering/RenderBodies.hpp"
#include "../include/rendering/SetupCamera.hpp"
#include "../include/rendering/SetupLighting.hpp"
#include "../include/core/Gravity.hpp"
#include "../include/rendering/InitaliseRendering.hpp"

int main(){

    auto window = initaliseRendering();
    
    // std::vector<Body> AllBodies = SolarSystem::AllBodies;
    std::vector<Body> AllBodies = InnerSolarSystem::AllBodies;

    // Set up the camera and lighting once
    setupCameraPerspective(AllBodies.back().PosY);
    setupLighting();
    double TimeStep = 1;
    int CheckInTime = 60*60*24; // How frequently to Render and print out the time passed, By default its a day.

    int nT = 0;
    while (!glfwWindowShouldClose(window)) {
        nT++;
        for(int i =0; i < AllBodies.size(); i++)
        {
                for(int j = 0; j < AllBodies.size(); j++)
                {
                    if( i == j)
                    {
                        continue;
                    }
                    else
                    {
                        UpdateVelocity(AllBodies[i],AllBodies[j]);
                    }
                    
                }
            UpdatePosition(AllBodies[i]);
        }

        if(nT % CheckInTime == 0)
        {
            renderBodies(window,AllBodies);  // Call the render function to update the visualization
            std::cout << "Time Passed :  " << TimeStep*nT / CheckInTime << " Days " << std::endl;
        } 
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
    
        