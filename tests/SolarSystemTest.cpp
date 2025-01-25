#include "gtest/gtest.h"
#include "../include/core/SimulateTime.hpp"




TEST(SolarSystemTest, SimulatedEarthAndSunX) {
    // Initialize a copy of the solar system
    std::vector<Body> bodies = SunEarth::AllBodies;

    // Simulate the system for 1 year
    bodies = SimulateTimeAndRender(bodies,365.25  * 24 * 60 * 60);

    const double tolerance = 1E6; // Allowable error in meters
    EXPECT_NEAR(bodies[0].PosX, SunEarth::Sun.PosX, tolerance*1000);  // Sun
    EXPECT_NEAR(bodies[1].PosX, SunEarth::Earth.PosX, tolerance*(-1*SunEarth::Earth.VelX));  // Earth
}

TEST(SolarSystemTest, SimulatedEarthAndSunY) {
    // Initialize a copy of the solar system
    std::vector<Body> bodies = SunEarth::AllBodies;

    // Simulate the system for 1 year
    bodies = SimulateTimeAndRender(bodies,365.2425  * 24 * 60 * 60);

    const double tolerance = 1E6; // Allowable error in meters
    EXPECT_NEAR(bodies[0].PosY, SunEarth::Sun.PosY, tolerance*1000);  // Sun
    EXPECT_NEAR(bodies[1].PosY, SunEarth::Earth.PosY, tolerance*(-1*SunEarth::Earth.VelX));  // Earth

}

TEST(SolarSystemTest, SimulatedEarthAndSunZ) {
    // Initialize a copy of the solar system
    std::vector<Body> bodies = SunEarth::AllBodies;

    // Simulate the system for 1 year
    bodies = SimulateTimeAndRender(bodies,365.2425  * 24 * 60 * 60);

    const double tolerance = 1E6; // Allowable error in meters
    EXPECT_NEAR(bodies[0].PosZ, SunEarth::Sun.PosZ, tolerance*1000);  // Sun
    EXPECT_NEAR(bodies[1].PosZ, SunEarth::Earth.PosZ, tolerance*(-1*SunEarth::Earth.VelX));  // Earth

}