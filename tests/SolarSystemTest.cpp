#include "gtest/gtest.h"
#include "../include/core/SimulateTime.hpp"




TEST(SolarSystemTest, SimulatedEarthAndSunX) {
    // Initialize a copy of the solar system
    std::vector<Body> bodies = SunEarth::AllBodies;

    // Simulate the system for 1 year
    SimulateTimeAndRender(bodies,365.25  * 24 * 60 * 60);

    const double tolerance = 1E6; // Allowable error in meters
    EXPECT_NEAR(bodies[0].PosX, SunEarth::Sun.PosX, tolerance*1000);  // Sun
    EXPECT_NEAR(bodies[1].PosX, SunEarth::Earth.PosX, tolerance*(-1*SunEarth::Earth.VelX));  // Earth
}

TEST(SolarSystemTest, SimulatedEarthAndSunY) {
    // Initialize a copy of the solar system
    std::vector<Body> bodies = SunEarth::AllBodies;

    // Simulate the system for 1 year
    SimulateTimeAndRender(bodies,365.2425  * 24 * 60 * 60);

    const double tolerance = 1E6; // Allowable error in meters
    EXPECT_NEAR(bodies[0].PosY, SunEarth::Sun.PosY, tolerance*1000);  // Sun
    EXPECT_NEAR(bodies[1].PosY, SunEarth::Earth.PosY, tolerance*(-1*SunEarth::Earth.VelX));  // Earth
}

TEST(SolarSystemTest, SimulatedEarthAndSunZ) {
    // Initialize a copy of the solar system
    std::vector<Body> bodies = SunEarth::AllBodies;

    // Simulate the system for 1 year
    SimulateTimeAndRender(bodies,365.2425  * 24 * 60 * 60);

    const double tolerance = 1E6; // Allowable error in meters
    EXPECT_NEAR(bodies[0].PosZ, SunEarth::Sun.PosZ, tolerance*1000);  // Sun
    EXPECT_NEAR(bodies[1].PosZ, SunEarth::Earth.PosZ, tolerance*(-1*SunEarth::Earth.VelX));  // Earth
}

// // TODO NEEDS MORE WORK FOR LOGIC
// // Test for position updates after 1 year
// TEST(SolarSystemTest, SimulatedGravityAfterOneYear) {
//     // Initialize a copy of the solar system
//     std::vector<Body> bodies = SolarSystem::AllBodies;

//     double oneYearInSeconds = 365.25 * 24 * 60 * 60;
//     // Orbital periods of planets (in seconds)
//     const double orbitalPeriods[] = {
//         0.0,                                  // Sun
//         88.0 * 24.0 * 60.0 * 60.0,           // Mercury (88 days)
//         225.0 * 24.0 * 60.0 * 60.0,          // Venus (225 days)
//         oneYearInSeconds,                    // Earth
//         687.0 * 24.0 * 60.0 * 60.0,          // Mars (687 days)
//         11.86 * 365.0 * 24.0 * 60.0 * 60.0,  // Jupiter (11.86 years)
//         29.46 * 365.0 * 24.0 * 60.0 * 60.0,  // Saturn (29.46 years)
//         84.02 * 365.0 * 24.0 * 60.0 * 60.0,  // Uranus (84.02 years)
//         164.8 * 365.0 * 24.0 * 60.0 * 60.0   // Neptune (164.8 years)
//     };

//     // Simulate the system for 1 year
//     std::vector<Body> updatedBodies = SimulateTimeAndRender(bodies,oneYearInSeconds);

//     const double tolerance = 1E9;
//     for (size_t i = 0; i < bodies.size(); ++i) {
//         if (i == 0) { // Skip the Sun
//             EXPECT_NEAR(updatedBodies[i].PosX, 0.0, tolerance);
//             EXPECT_NEAR(updatedBodies[i].PosY, 0.0, tolerance);
//             EXPECT_NEAR(updatedBodies[i].PosZ, 0.0, tolerance);
//         } else {
//             double initialRadius = bodies[i].PosY;
//             // double initialRadius = std::sqrt(
//             //     bodies[i].PosX * bodies[i].PosX +
//             //     bodies[i].PosY * bodies[i].PosY +
//             //     bodies[i].PosZ * bodies[i].PosZ);

//             double fractionOfOrbit = oneYearInSeconds / orbitalPeriods[i];
//             double angle = 2 * M_PI * fractionOfOrbit; // Angle completed in radians

//             // Expected positions
//             double expectedX = initialRadius * std::cos(angle);
//             double expectedY = initialRadius * std::sin(angle);
//             double expectedZ = 0.0; // Assuming planar orbits for simplicity

//             EXPECT_NEAR(updatedBodies[i].PosX, expectedX, tolerance) << "Failed for body " << i;
//             EXPECT_NEAR(updatedBodies[i].PosY, expectedY, tolerance) << "Failed for body " << i;
//             EXPECT_NEAR(updatedBodies[i].PosZ, expectedZ, tolerance) << "Failed for body " << i;
//         }
//     }

// }