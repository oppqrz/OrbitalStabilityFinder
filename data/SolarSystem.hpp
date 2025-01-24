#ifndef SOLARSYSTEM_HPP
#define SOLARSYSTEM_HPP

#include <vector>
#include "../include/models/Body.hpp" // Include your Body struct definition

namespace InnerSolarSystem {

    // Predefined celestial bodies with radius (in kilometers converted to meters)
    inline Body Sun = {2E30, 0., 0., 0., 0., 0., 0., 695700.0 * 1E3};
    inline Body Mercury = {3.3E23, 0., 57E9, 0., 47.3E3, 0., 0., 2439.7 * 1E3};
    inline Body Venus = {4.8E24, 0., 108E9, 0., 35E3, 0., 0., 6051.8 * 1E3};
    inline Body Earth = {6E24, 0., -150E9, 0., -29782, 0., 0., 6371.0 * 1E3};
    inline Body Mars = {6.4E23, 0., 227E9, 0., 24E3, 0., 0., 3389.5 * 1E3};

    // Vector of all celestial bodies
    inline const std::vector<Body> AllBodies = {Sun, Mercury, Venus, Earth, Mars};
}

namespace SolarSystem {

    // Predefined celestial bodies with radius (in kilometers converted to meters)
    inline Body Sun = {2E30, 0., 0., 0., 0., 0., 0., 695700.0 * 1E3};
    inline Body Mercury = {3.3E23, 0., 57E9, 0., 47.3E3, 0., 0., 2439.7 * 1E3};
    inline Body Venus = {4.8E24, 0., 108E9, 0., 35E3, 0., 0., 6051.8 * 1E3};
    inline Body Earth = {6E24, 0., -150E9, 0., -29782, 0., 0., 6371.0 * 1E3};
    inline Body Mars = {6.4E23, 0., 227E9, 0., 24E3, 0., 0., 3389.5 * 1E3};
    inline Body Jupiter = {1.9E27, 0., 778E9, 0., 13.1E3, 0., 0., 69911.0 * 1E3};
    inline Body Saturn = {5.7E26, 0., 1.43E12, 0., 9.7E3, 0., 0., 58232.0 * 1E3};
    inline Body Uranus = {8.7E25, 0., 2.87E12, 0., 6.8E3, 0., 0., 25362.0 * 1E3};
    inline Body Neptune = {1.02E26, 0., 4.5E12, 0., 5.4E3, 0., 0., 24622.0 * 1E3};

    // Vector of all celestial bodies
    inline const std::vector<Body> AllBodies = {
        Sun, Mercury, Venus, Earth, Mars, Jupiter, Saturn, Uranus, Neptune
    };
}

namespace SunEarth {

    // Predefined celestial bodies with radius (in kilometers converted to meters)
    inline Body Sun = {2E30, 0., 0., 0., 0., 0., 0., 695700.0 * 1E3};
    inline Body Earth = {6E24, 0., -150E9, 0., -29782, 0., 0., 6371.0 * 1E3};

    // Vector of all celestial bodies
    inline const std::vector<Body> AllBodies = {Sun, Earth};
}

namespace SunEarthMoon {

    // Predefined celestial bodies with radius (in kilometers converted to meters)
    inline Body Sun = {2E30, 0., 0., 0., 0., 0., 0., 695700.0 * 1E3};
    inline Body Earth = {6E24, 0., -150E9, 0., -29782, 0., 0., 6371.0 * 1E3};
    inline Body Moon = {7.35E22, 0., -150E9 - 384.4E6, 0., -29782 - 1.022E3, 0., 0., 1737.4 * 1E3};

    // Vector of all celestial bodies
    inline const std::vector<Body> AllBodies = {Sun, Earth, Moon};
}

namespace EarthMoon {

    // Predefined celestial bodies with radius (in kilometers converted to meters)
    inline Body Earth = {6E24, 0., 0., 0., 0., 0., 0., 6371.0 * 1E3}; // Earth at origin
    inline Body Moon = {7.35E22, 384.4E6, 0., 0., 0., 1.022E3, 0., 1737.4 * 1E3}; // Moon relative to Earth

    // Vector of all celestial bodies
    inline const std::vector<Body> AllBodies = {Earth, Moon};
}

#endif // SOLARSYSTEM_HPP
