#include "../include/core/RandomBodies.hpp"
#include "../include/core/SimulateTime.hpp"
#include "../include/core/Geometry.hpp"
#include "../include/core/Fitting.hpp"


int main() {
    // auto bodies = GenerateRandomBodies();
    // for (const auto& body : bodies) {
    //     std::cout << "Mass: " << body.Mass << " kg, "
    //               << "Position: (" << body.PosX << ", " << body.PosY << ", " << body.PosZ << ") m, "
    //               << "Velocity: (" << body.VelX << ", " << body.VelY << ", " << body.VelZ << ") m/s, "
    //               << "Radius: " << body.Radius << " m\n";
    // }
    
    std::vector<Body> bodies = InnerSolarSystem::AllBodies;
    auto computedBodies = SimulateTime(bodies,365.25*24*60*60);
    for (size_t i = 0; i < computedBodies.size(); ++i) {
        auto& body = computedBodies[i];
        FitEllipse3D(body.historicPosX, body.historicPosY, body.historicPosZ);
    }
    return 0;
}