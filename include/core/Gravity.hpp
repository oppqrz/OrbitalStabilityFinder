#ifndef GRAVITY_HPP
#define GRAVITY_HPP

#include <cmath>
#include "../include/models/Body.hpp"
#include "../include/core/Geometry.hpp"


// Gravitational constant
const double GConst = 6.67430e-11;

// Function declarations
double CalculateAccelerationX(const Body& subjectBody, const Body& effectingBody);
double CalculateAccelerationY(const Body& subjectBody, const Body& effectingBody);
double CalculateAccelerationZ(const Body& subjectBody, const Body& effectingBody);
void UpdateVelocity(Body& subjectBody, const Body& effectingBody);
void UpdatePosition(Body& body, double timeStep = 1);

#endif // GRAVITY_HPP