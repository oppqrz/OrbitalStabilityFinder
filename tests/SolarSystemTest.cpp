
#include "../include/core/SimulateTime.hpp"
int main(){

    auto window = initaliseRendering();
    
    // std::vector<Body> AllBodies = SolarSystem::AllBodies;
    std::vector<Body> AllBodies = InnerSolarSystem::AllBodies;
    SimulateTimeAndRender(AllBodies);
}
    
        