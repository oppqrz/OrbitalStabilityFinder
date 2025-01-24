#ifndef BODY_HPP
#define BODY_HPP

#include <cmath>
// Structure for the body, containing mass, position, velocity, and radius
struct Body {
    double Mass;  // in Kg
    double PosX, PosY, PosZ;  // 3D Position
    double VelX, VelY, VelZ;  // 3D Velocity
    double Radius;  // Radius of the body (for rendering purposes)
};

#endif // BODY_HPP