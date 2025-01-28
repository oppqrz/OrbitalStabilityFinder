#ifndef COLLISIONS_HPP
#define COLLISIONS_HPP

#include <cmath>
#include "../include/models/Body.hpp"
#include "../include/core/Geometry.hpp"

double DetectCollision(const Body& subjectBody, const Body& effectingBody);
bool HandleCollisions(Body* subjectBody, Body* targetBody);
#endif // COLLISIONS_HPP