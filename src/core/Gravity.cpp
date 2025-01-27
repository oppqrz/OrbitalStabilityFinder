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

Accel3Pair CalculatePairAcceleration3(const Body& subjectBody, const Body& effectingBody){

    double xDistance = (subjectBody.PosX - effectingBody.PosX);
    double yDistance = (subjectBody.PosY - effectingBody.PosY);
    double zDistance = (subjectBody.PosZ - effectingBody.PosZ);

    double distance = GetDistanceOpt(xDistance, yDistance,zDistance);
    double forceConst = (GConst) / pow(distance, 3);

    double forceConstantSubject = effectingBody.Mass * forceConst;
    double forceConstantEffecting = subjectBody.Mass * forceConst;

    double xAccelSubject = -xDistance * forceConstantSubject;
    double yAccelSubject = -yDistance * forceConstantSubject;
    double zAccelSubject = -zDistance * forceConstantSubject;

    double xAccelEffecting = xDistance * forceConstantEffecting;
    double yAccelEffecting = yDistance * forceConstantEffecting;
    double zAccelEffecting = zDistance * forceConstantEffecting;

    Accel3 accelerationSubject = {xAccelSubject,yAccelSubject,zAccelSubject};
    Accel3 accelerationEffecting = {xAccelEffecting,yAccelEffecting,zAccelEffecting};
    Accel3Pair pairAceeleration = {accelerationSubject,accelerationEffecting};
    return pairAceeleration;
}

void UpdateVelocityPair3(Body& subjectBody,  Body& effectingBody) {
    Accel3Pair acceleration = CalculatePairAcceleration3(subjectBody, effectingBody);
    subjectBody.VelX += acceleration.AccelBody1.xAccel;
    subjectBody.VelY += acceleration.AccelBody1.yAccel;
    subjectBody.VelZ += acceleration.AccelBody1.zAccel;

    effectingBody.VelX += acceleration.AccelBody2.xAccel;
    effectingBody.VelY += acceleration.AccelBody2.yAccel;
    effectingBody.VelZ += acceleration.AccelBody2.zAccel;
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