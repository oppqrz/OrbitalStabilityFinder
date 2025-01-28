#include <chrono>
#include <iostream>

#include "gtest/gtest.h"
#include "../include/core/SimulateTime.hpp"

TEST(CollisionTest, NoCollision) {
    // Initialize a copy of the solar system
    std::vector<Body> bodies = InnerSolarSystem::AllBodies;
    // Simulate the system for 1 year
    bodies = SimulateTimeAndRender(bodies,365.25  * 24 * 60 * 60);
}

TEST(CollisionTest, hasCollision) {
    // Initialize a copy of the solar system
    std::vector<Body> bodies = CollidingBodies::AllBodies;
    // Simulate the system for 1 year
    bodies = SimulateTimeAndRender(bodies);
    
}