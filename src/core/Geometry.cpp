#include "../include/core/Geometry.hpp"


// Function to calculate distance between two bodies (3D)
double GetDistance(const Body& subjectBody, const Body& effectingBody) {
    double disX2 = pow((subjectBody.PosX - effectingBody.PosX), 2);
    double disY2 = pow((subjectBody.PosY - effectingBody.PosY), 2);
    double disZ2 = pow((subjectBody.PosZ - effectingBody.PosZ), 2);
    return sqrt(disX2 + disY2 + disZ2);
}