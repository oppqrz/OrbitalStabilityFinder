#include <chrono>
#include <iostream>

#include "gtest/gtest.h"
#include "../include/core/SimulateTime.hpp"

using std::chrono::high_resolution_clock;
using std::chrono::duration_cast;
using std::chrono::duration;
using std::chrono::milliseconds;


TEST(SimulationTiming, InnerSolarTimings) {
    // Initialize a copy of the solar system
    std::vector<Body> bodies = InnerSolarSystem::AllBodies;

    auto t1 = high_resolution_clock::now();
    // Simulate the system for 1 year
    bodies = SimulateTimeAndRender(bodies,365.25  * 24 * 60 * 60);
    
    auto t2 = high_resolution_clock::now();
    
    /* Getting number of milliseconds as an integer. */
    auto ms_int = duration_cast<milliseconds>(t2 - t1);

    /* Getting number of milliseconds as a double. */
    duration<double, std::milli> ms_double = t2 - t1;

    std::cout << ms_int.count() << "ms\n";
    std::cout << ms_double.count() << "ms\n";
}


TEST(SimulationTiming, InnerSolarTimingsNoRender) {
    // Initialize a copy of the solar system
    std::vector<Body> bodies = InnerSolarSystem::AllBodies;

    auto t1 = high_resolution_clock::now();
    // Simulate the system for 1 year
    bodies = SimulateTime(bodies,365.25  * 24 * 60 * 60);
    
    auto t2 = high_resolution_clock::now();
    
    /* Getting number of milliseconds as an integer. */
    auto ms_int = duration_cast<milliseconds>(t2 - t1);

    /* Getting number of milliseconds as a double. */
    duration<double, std::milli> ms_double = t2 - t1;

    std::cout << ms_int.count() << "ms\n";
    std::cout << ms_double.count() << "ms\n";
}

// TEST(SimulationTiming, FullSolarTimings) {
//     // Initialize a copy of the solar system
//     std::vector<Body> bodies = SolarSystem::AllBodies;

//     auto t1 = high_resolution_clock::now();
//     // Simulate the system for 1 year
//     bodies = SimulateTimeAndRender(bodies,365.25  * 24 * 60 * 60);
    
//     auto t2 = high_resolution_clock::now();
    
//     /* Getting number of milliseconds as an integer. */
//     auto ms_int = duration_cast<milliseconds>(t2 - t1);

//     /* Getting number of milliseconds as a double. */
//     duration<double, std::milli> ms_double = t2 - t1;

//     std::cout << ms_int.count() << "ms\n";
//     std::cout << ms_double.count() << "ms\n";
// }



// TEST(SimulationTiming, ExpandedSolarTimings) {
//     // Initialize a copy of the solar system
//     std::vector<Body> bodies = ExpandedSolarSystem::AllBodies;

//     auto t1 = high_resolution_clock::now();
//     // Simulate the system for 1 year
//     bodies = SimulateTime(bodies,50  * 24 * 60 * 60);
    
//     auto t2 = high_resolution_clock::now();
    
//     /* Getting number of milliseconds as an integer. */
//     auto ms_int = duration_cast<milliseconds>(t2 - t1);

//     /* Getting number of milliseconds as a double. */
//     duration<double, std::milli> ms_double = t2 - t1;

//     std::cout << ms_int.count() << "ms\n";
//     std::cout << ms_double.count() << "ms\n";
// }


// TEST(SimulationTiming, ExpandedSolarTimingsParralel) {
//     // Initialize a copy of the solar system
//     std::vector<Body> bodies = ExpandedSolarSystem::AllBodies;

//     auto t1 = high_resolution_clock::now();
//     // Simulate the system for 1 year
//     bodies = SimulateTimeParralel(bodies,50  * 24 * 60 * 60);
    
//     auto t2 = high_resolution_clock::now();
    
//     /* Getting number of milliseconds as an integer. */
//     auto ms_int = duration_cast<milliseconds>(t2 - t1);

//     /* Getting number of milliseconds as a double. */
//     duration<double, std::milli> ms_double = t2 - t1;

//     std::cout << ms_int.count() << "ms\n";
//     std::cout << ms_double.count() << "ms\n";
// }
