#include "../include/core/SimulateTime.hpp"

int main(){

    auto window = initaliseRendering();
    // std::vector<Body> AllBodies = SolarSystem::AllBodies;
    std::vector<Body> allBodies = InnerSolarSystem::AllBodies;
    std::vector<Body> updatedBodies =  SimulateTimeAndRender(allBodies);
    return 0;
}
    