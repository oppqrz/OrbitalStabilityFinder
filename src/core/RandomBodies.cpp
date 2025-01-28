#include "../include/core/RandomBodies.hpp"

double GenerateLogUniform(double min, double max, std::mt19937& gen) {
    std::uniform_real_distribution<double> logDist(std::log(min), std::log(max));
    return std::exp(logDist(gen));
}

std::vector<Body> GenerateRandomBodies() {
    // Random number generators
    std::random_device rd;
    std::mt19937 gen(rd());

    // Distributions for properties
    std::uniform_int_distribution<int> numBodiesDist(2, 5);  // Number of bodies
    std::uniform_real_distribution<double> velocityDist(-1E4, 1E4);  // Velocity in m/s

    // Generate random number of bodies
    int numBodies = numBodiesDist(gen);
    std::vector<Body> bodies;

    for (int i = 0; i < numBodies; ++i) {
        Body body = {
            .Mass = GenerateLogUniform(1E23, 1E31, gen),       // Mass in kg (log-uniform)
            .PosX = GenerateLogUniform(1E9, 1E13, gen),        // Position in meters (log-uniform)
            .PosY = GenerateLogUniform(1E9, 1E13, gen),
            .PosZ = 0,
            //.PosZ = GenerateLogUniform(1E9, 1E13, gen),
            .VelX = velocityDist(gen),                         // Velocity in m/s (uniform)
            .VelY = velocityDist(gen),
            .VelZ = 0,
            //.VelZ = velocityDist(gen),
            .Radius = GenerateLogUniform(1E5, 1E8, gen)        // Radius in meters (log-uniform)
        };

        bodies.push_back(body);
    }

    return bodies;
}