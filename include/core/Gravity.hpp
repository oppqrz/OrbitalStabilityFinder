#ifndef GRAVITY_HPP
#define GRAVITY_HPP

#include <cmath>
#include "../include/models/Body.hpp"


// Gravitational constant
const double GConst = 6.67430e-11;

// Function declarations
double GetDistance(const Body& body1, const Body& body2);
double CalculateAccelerationX(const Body& body1, const Body& body2);
double CalculateAccelerationY(const Body& body1, const Body& body2);
double CalculateAccelerationZ(const Body& body1, const Body& body2);
void UpdateVelocity(Body& body1, const Body& body2);
void UpdatePosition(Body& body, double timeStep = 1);

#endif // GRAVITY_HPP