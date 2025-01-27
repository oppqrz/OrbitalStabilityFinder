#ifndef GRAVITY_HPP
#define GRAVITY_HPP

#include <cmath>
#include "../include/models/Body.hpp"
#include "../include/core/Geometry.hpp"


// Gravitational constant
const double GConst = 6.67430e-11;

// Function declarations
void UpdatePosition(Body& body, double timeStep = 1);

struct Accel3;
Accel3 CaulcateAcceleration3(const Body& subjectBody, const Body& effectingBody);
void UpdateVelocity3(Body& subjectBody, const Body& effectingBody);

#endif // GRAVITY_HPP