#include "../include/core/Gravity.hpp"



Accel3 CalculateAcceleration3(const Body& subjectBody, const Body& effectingBody){
    double distance = GetDistance(subjectBody, effectingBody);
    double forceConstant = (GConst * effectingBody.Mass) / pow(distance, 3);
    double xAccel = -(subjectBody.PosX - effectingBody.PosX) * forceConstant;
    double yAccel = -(subjectBody.PosY - effectingBody.PosY) * forceConstant;
    double zAccel = -(subjectBody.PosZ - effectingBody.PosZ) * forceConstant;
    Accel3 acceleration = {xAccel,yAccel,zAccel};
    return acceleration;
}


void UpdateVelocity3(Body& subjectBody, const Body& effectingBody) {
    Accel3 acceleration = CalculateAcceleration3(subjectBody, effectingBody);
    subjectBody.VelX += acceleration.xAccel;
    subjectBody.VelY += acceleration.yAccel;
    subjectBody.VelZ += acceleration.zAccel;
}

// Function to update position based on velocity and time step
void UpdatePosition(Body& body, double timeStep) {
    body.PosX += body.VelX * timeStep;
    body.PosY += body.VelY * timeStep;
    body.PosZ += body.VelZ * timeStep;
}