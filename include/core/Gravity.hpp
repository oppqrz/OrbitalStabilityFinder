#ifndef GRAVITY_HPP
#define GRAVITY_HPP

#include <cmath>
#include "../include/models/Body.hpp"
#include "../include/core/Geometry.hpp"
#include <tuple>

// Gravitational constant
const double GConst = 6.67430e-11;

// Function declarations
void UpdatePosition(Body& body, double timeStep = 1);


struct Accel3 {
    double xAccel;
    double yAccel;
    double zAccel;
};

struct Accel3Pair {
    Accel3 AccelBody1;
    Accel3 AccelBody2;
};

Accel3 CalculateAcceleration3(const Body& subjectBody, const Body& effectingBody);
Accel3Pair CalculatePairAcceleration3(const Body& subjectBody, const Body& effectingBody);
void UpdateVelocity3(Body& subjectBody, const Body& effectingBody);
void UpdateVelocityPair3(Body& subjectBody,  Body& effectingBody);

#endif // GRAVITY_HPP