#include "../include/core/Gravity.hpp"

// Function to calculate acceleration in X direction due to another body
double CalculateAccelerationX(const Body& subjectBody, const Body& effectingBody) {
    double distance = GetDistance(subjectBody, effectingBody);
    return -(subjectBody.PosX - effectingBody.PosX) * (GConst * effectingBody.Mass) / pow(distance, 3);
}

// Function to calculate acceleration in Y direction due to another body
double CalculateAccelerationY(const Body& subjectBody, const Body& effectingBody) {
    double distance = GetDistance(subjectBody, effectingBody);
    return -(subjectBody.PosY - effectingBody.PosY) * (GConst * effectingBody.Mass) / pow(distance, 3);
}

// Function to calculate acceleration in Z direction due to another body
double CalculateAccelerationZ(const Body& subjectBody, const Body& effectingBody) {
    double distance = GetDistance(subjectBody, effectingBody);
    return -(subjectBody.PosZ - effectingBody.PosZ) * (GConst * effectingBody.Mass) / pow(distance, 3);
}

// Function to update velocity based on the acceleration from another body
void UpdateVelocity(Body& subjectBody, const Body& effectingBody) {
    subjectBody.VelX += CalculateAccelerationX(subjectBody, effectingBody);
    subjectBody.VelY += CalculateAccelerationY(subjectBody, effectingBody);
    subjectBody.VelZ += CalculateAccelerationZ(subjectBody, effectingBody);
}

// Function to update position based on velocity and time step
void UpdatePosition(Body& body, double timeStep) {
    body.PosX += body.VelX * timeStep;
    body.PosY += body.VelY * timeStep;
    body.PosZ += body.VelZ * timeStep;
}