#ifndef GEOMETRY_HPP
#define GEOMETRY_HPP

#include <cmath>
#include "../include/models/Body.hpp"

double GetDistance(const Body& subjectBody, const Body& effectingBody);
double GetDistanceOpt(double xDiff, double yDiff, double zDiff);

#endif // GEOMETRY_HPP