// main.hpp
#ifndef SIMULATETIME_HPP
#define SIMULATETIME_HPP

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

std::vector<Body> SimulateTime(std::vector<Body> AllBodies, double maxTime =-1);
std::vector<Body> SimulateTimeAndRender(std::vector<Body> AllBodies, double maxTime =-1);

#endif // SIMULATETIME_HPP
