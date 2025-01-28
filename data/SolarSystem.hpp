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


namespace CollidingBodies {

    // Predefined celestial bodies with radius (in kilometers converted to meters)
    inline Body Sun = {2E32, 0., 0., 0., 0., 0., 0., 695700.0 * 1E3};
    inline Body Mercury = {3.3E23, 0., 57E9, 0., 47.3E3, 0., 0., 2439.7 * 1E3};

    // Vector of all celestial bodies
    inline const std::vector<Body> AllBodies = {Sun, Mercury};
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

namespace ExpandedSolarSystem {

    // Predefined celestial bodies with mass (kg), position (m), velocity (m/s), and radius (m)
    inline Body Sun = {2E30, 0., 0., 0., 0., 0., 0., 695700.0 * 1E3};
    inline Body Mercury = {3.3E23, 0., 57E9, 0., 47.3E3, 0., 0., 2439.7 * 1E3};
    inline Body Venus = {4.8E24, 0., 108E9, 0., 35E3, 0., 0., 6051.8 * 1E3};
    inline Body Earth = {6E24, 0., -150E9, 0., -29782, 0., 0., 6371.0 * 1E3};
    inline Body Moon = {7.35E22, 0., -150E9 - 384.4E6, 0., -29782 - 1.022E3, 0., 0., 1737.1 * 1E3};
    inline Body Mars = {6.4E23, 0., 227E9, 0., 24E3, 0., 0., 3389.5 * 1E3};
    inline Body Phobos = {1.07E16, 0., 227E9 + 9.376E6, 0., 24E3 + 2.138E3, 0., 0., 11.2 * 1E3};
    inline Body Deimos = {1.48E15, 0., 227E9 + 23.463E6, 0., 24E3 + 1.351E3, 0., 0., 6.2 * 1E3};
    inline Body Jupiter = {1.9E27, 0., 778E9, 0., 13.1E3, 0., 0., 69911.0 * 1E3};
    inline Body Io = {8.93E22, 0., 778E9 + 421.8E6, 0., 13.1E3 + 17.334E3, 0., 0., 1821.6 * 1E3};
    inline Body Europa = {4.8E22, 0., 778E9 + 671.1E6, 0., 13.1E3 + 13.740E3, 0., 0., 1560.8 * 1E3};
    inline Body Ganymede = {1.48E23, 0., 778E9 + 1.070E9, 0., 13.1E3 + 10.880E3, 0., 0., 2634.1 * 1E3};
    inline Body Callisto = {1.08E23, 0., 778E9 + 1.883E9, 0., 13.1E3 + 8.204E3, 0., 0., 2410.3 * 1E3};
    inline Body Saturn = {5.7E26, 0., 1.43E12, 0., 9.7E3, 0., 0., 58232.0 * 1E3};
    inline Body Titan = {1.35E23, 0., 1.43E12 + 1.222E9, 0., 9.7E3 + 5.576E3, 0., 0., 2574.7 * 1E3};
    inline Body Rhea = {2.31E21, 0., 1.43E12 + 527.1E6, 0., 9.7E3 + 8.48E2, 0., 0., 764.5 * 1E3};
    inline Body Dione = {1.1E21, 0., 1.43E12 + 377.4E6, 0., 9.7E3 + 1.01E3, 0., 0., 561.5 * 1E3};
    inline Body Tethys = {6.17E20, 0., 1.43E12 + 294.7E6, 0., 9.7E3 + 1.18E3, 0., 0., 531.1 * 1E3};
    inline Body Enceladus = {1.08E20, 0., 1.43E12 + 237.4E6, 0., 9.7E3 + 2.37E3, 0., 0., 252.1 * 1E3};
    inline Body Mimas = {3.75E19, 0., 1.43E12 + 185.5E6, 0., 9.7E3 + 4.35E3, 0., 0., 198.2 * 1E3};
    inline Body Uranus = {8.7E25, 0., 2.87E12, 0., 6.8E3, 0., 0., 25362.0 * 1E3};
    inline Body Titania = {3.53E21, 0., 2.87E12 + 435.9E6, 0., 6.8E3 + 3.62E3, 0., 0., 788.4 * 1E3};
    inline Body Oberon = {3.01E21, 0., 2.87E12 + 583.5E6, 0., 6.8E3 + 3.15E3, 0., 0., 761.4 * 1E3};
    inline Body Ariel = {1.35E21, 0., 2.87E12 + 191.0E6, 0., 6.8E3 + 5.51E3, 0., 0., 578.9 * 1E3};
    inline Body Umbriel = {1.27E21, 0., 2.87E12 + 266.0E6, 0., 6.8E3 + 4.76E3, 0., 0., 584.7 * 1E3};
    inline Body Neptune = {1.02E26, 0., 4.5E12, 0., 5.4E3, 0., 0., 24622.0 * 1E3};
    inline Body Triton = {2.14E22, 0., 4.5E12 + 354.8E6, 0., 5.4E3 + 4.39E3, 0., 0., 1353.4 * 1E3};
    inline Body Proteus = {4.4E19, 0., 4.5E12 + 117.6E6, 0., 5.4E3 + 9.23E2, 0., 0., 210.0 * 1E3};

    // Dwarf planets
    inline Body Pluto = {1.31E22, 0., 5.9E12, 0., 4.7E3, 0., 0., 1188.3 * 1E3};
    inline Body Charon = {1.52E21, 0., 5.9E12 + 19.6E6, 0., 4.7E3 + 2.7E3, 0., 0., 606.0 * 1E3};
    inline Body Ceres = {9.39E20, 0., 414E9, 0., 17.9E3, 0., 0., 473.0 * 1E3};
    inline Body Haumea = {4.01E21, 0., 6.5E12, 0., 4.5E3, 0., 0., 816.0 * 1E3};
    inline Body Makemake = {3.1E21, 0., 6.85E12, 0., 4.41E3, 0., 0., 715.0 * 1E3};
    inline Body Eris = {1.67E22, 0., 10.1E12, 0., 3.43E3, 0., 0., 1163.0 * 1E3};

    // Additional moons and minor objects
    inline Body Amalthea = {7.17E18, 0., 778E9 + 181.3E6, 0., 13.1E3 + 26.57E3, 0., 0., 83.5 * 1E3};
    inline Body Miranda = {6.59E19, 0., 2.87E12 + 129.9E6, 0., 6.8E3 + 6.67E3, 0., 0., 235.8 * 1E3};
    inline Body Nereid = {3.1E19, 0., 4.5E12 + 5.51E9, 0., 5.4E3 + 1.12E3, 0., 0., 170.0 * 1E3};

    // Asteroids
    inline Body Vesta = {2.59E20, 0., 353E9, 0., 19.3E3, 0., 0., 262.7 * 1E3};
    inline Body Pallas = {2.04E20, 0., 414E9, 0., 17.6E3, 0., 0., 272.0 * 1E3};
    inline Body Hygiea = {8.67E19, 0., 471E9, 0., 16.8E3, 0., 0., 215.0 * 1E3};
    inline Body Eros = {6.9E15, 0., 2.1E12, 0., 20.7E3, 0., 0., 13.0 * 1E3};
    inline Body Itokawa = {4.0E12, 0., 1.0E12, 0., 10.0E3, 0., 0., 500.0 * 1E3};

    // Comets
    inline Body Halley = {2.2E14, 0., 8.7E12, 0., 54.6E3, 0., 0., 11.0 * 1E3};
    inline Body HaleBopp = {4.2E14, 0., 6.9E12, 0., 45.0E3, 0., 0., 24.0 * 1E3};

    // Theoretical bodies (hypothetical or unobserved)
    inline Body PlanetNine = {5E24, 0., 10E12, 0., 3.0E3, 0., 0., 8000.0 * 1E3};
    inline Body Nibiru = {4.0E23, 0., 12E12, 0., 4.5E3, 0., 0., 7000.0 * 1E3};
 // Additional objects after Nibiru
    inline Body Sedna = {1.5E21, 0., 13.4E12, 0., 3.6E3, 0., 0., 1000.0 * 1E3};
    inline Body Eris2 = {1.78E22, 0., 10.5E12, 0., 3.3E3, 0., 0., 1200.0 * 1E3}; // A theoretical object beyond Eris
    inline Body OR10 = {1.1E21, 0., 9.2E12, 0., 3.8E3, 0., 0., 1130.0 * 1E3}; // Distant TNO
    inline Body XR190 = {4.5E20, 0., 11.3E12, 0., 3.1E3, 0., 0., 850.0 * 1E3}; // Trans-Neptunian object
    inline Body KQ40 = {2.5E20, 0., 6.3E12, 0., 4.4E3, 0., 0., 920.0 * 1E3}; // Distant object
    inline Body VP113 = {1.7E21, 0., 12.2E12, 0., 2.9E3, 0., 0., 1100.0 * 1E3}; // Inner Oort Cloud candidate
    inline Body Haumea2 = {4.0E21, 0., 6.9E12, 0., 4.4E3, 0., 0., 820.0 * 1E3}; // A hypothetical sibling to Haumea
    inline Body UB313 = {1.3E22, 0., 12.7E12, 0., 3.2E3, 0., 0., 1200.0 * 1E3}; // Another Eris-like object
    inline Body RR245 = {1.8E21, 0., 7.1E12, 0., 4.0E3, 0., 0., 950.0 * 1E3}; // Distant minor planet
    inline Body MS4 = {4.1E21, 0., 6.5E12, 0., 4.2E3, 0., 0., 860.0 * 1E3}; // Trans-Neptunian object
    inline Body TY430 = {2.3E21, 0., 11.8E12, 0., 3.0E3, 0., 0., 1100.0 * 1E3}; // Trans-Neptunian object
    inline Body CR105 = {1.9E21, 0., 7.5E12, 0., 4.5E3, 0., 0., 920.0 * 1E3}; // Distant solar system body
    inline Body TR66 = {2.7E21, 0., 5.8E12, 0., 5.1E3, 0., 0., 850.0 * 1E3}; // Another distant TNO
    inline Body AW197 = {1.5E21, 0., 8.4E12, 0., 3.6E3, 0., 0., 1100.0 * 1E3}; // Distant object
    inline Body QG298 = {1.3E21, 0., 6.6E12, 0., 3.8E3, 0., 0., 1050.0 * 1E3}; // Trans-Neptunian object

    // Additional moons and hypothetical bodies
    inline Body Charon2 = {1.5E21, 0., 5.9E12 + 40.0E6, 0., 4.7E3 + 2.3E3, 0., 0., 800.0 * 1E3}; // Another hypothetical moon for Pluto
    inline Body Carpo = {6.5E17, 0., 2.4E12, 0., 6.4E3, 0., 0., 225.0 * 1E3}; // A small asteroid moon
    inline Body Astraea = {1.2E19, 0., 4.7E12, 0., 17.2E3, 0., 0., 270.0 * 1E3}; // A main-belt asteroid
    inline Body Hippolyta = {1.3E18, 0., 4.3E12, 0., 16.7E3, 0., 0., 220.0 * 1E3}; // Another small asteroid moon
    inline Body Lysithea = {3.5E18, 0., 1.5E12 + 11.7E6, 0., 10.4E3, 0., 0., 100.0 * 1E3}; // A moon of Jupiter
    inline Body Ananke = {4.8E18, 0., 2.9E12 + 20.1E6, 0., 12.6E3, 0., 0., 500.0 * 1E3}; // Jupiter's moon
    inline Body Carme = {5.5E18, 0., 2.8E12 + 23.5E6, 0., 13.1E3, 0., 0., 460.0 * 1E3}; // Another of Jupiter's moons
    inline Body Callirrhoe = {2.2E17, 0., 2.7E12 + 12.5E6, 0., 13.5E3, 0., 0., 200.0 * 1E3}; // A moon of Jupiter

    // Additional asteroids
    inline Body Ida = {4.0E19, 0., 3.6E12, 0., 15.1E3, 0., 0., 150.0 * 1E3}; // Main-belt asteroid with moon Dactyl
    inline Body Psyche = {4.0E20, 0., 3.5E12, 0., 18.5E3, 0., 0., 225.0 * 1E3}; // Metal-rich asteroid
    inline Body Bennu = {7.8E14, 0., 2.4E12, 0., 13.3E3, 0., 0., 500.0 * 1E3}; // Potentially hazardous asteroid
    inline Body RQ36 = {6.6E14, 0., 2.7E12, 0., 11.8E3, 0., 0., 510.0 * 1E3}; // Another asteroid near Earth

    // Additional hypothetical objects
    inline Body Nemesis = {2.0E30, 0., 2E12, 0., 5.0E3, 0., 0., 50000.0 * 1E3}; // Theoretical companion star to the Sun
    inline Body PlanetX = {3.0E24, 0., 20E12, 0., 3.5E3, 0., 0., 7000.0 * 1E3}; // Hypothetical planet beyond Neptune

    // Imaginary Comets
    inline Body CometX1 = {1.5E14, 0., 8.0E12, 0., 50.0E3, 0., 0., 15.0 * 1E3};
    inline Body CometX2 = {1.2E14, 0., 9.0E12, 0., 53.0E3, 0., 0., 10.0 * 1E3};
    inline Body CometX3 = {1.8E14, 0., 7.5E12, 0., 60.0E3, 0., 0., 20.0 * 1E3};
    inline Body CometX4 = {1.1E14, 0., 10.0E12, 0., 48.0E3, 0., 0., 12.0 * 1E3};
    inline Body CometX5 = {1.4E14, 0., 6.5E12, 0., 45.0E3, 0., 0., 18.0 * 1E3};
    inline Body CometX6 = {1.7E14, 0., 11.0E12, 0., 55.0E3, 0., 0., 25.0 * 1E3};
    inline Body CometX7 = {1.6E14, 0., 7.2E12, 0., 47.0E3, 0., 0., 22.0 * 1E3};
    inline Body CometX8 = {2.0E14, 0., 8.8E12, 0., 50.0E3, 0., 0., 30.0 * 1E3};
    inline Body CometX9 = {1.3E14, 0., 9.5E12, 0., 52.0E3, 0., 0., 14.0 * 1E3};
    inline Body CometX10 = {1.0E14, 0., 10.2E12, 0., 51.0E3, 0., 0., 19.0 * 1E3};
    inline Body CometX11 = {1.9E14, 0., 6.7E12, 0., 60.0E3, 0., 0., 23.0 * 1E3};
    inline Body CometX12 = {2.2E14, 0., 7.9E12, 0., 62.0E3, 0., 0., 28.0 * 1E3};
    inline Body CometX13 = {2.3E14, 0., 8.3E12, 0., 59.0E3, 0., 0., 24.0 * 1E3};
    inline Body CometX14 = {2.5E14, 0., 9.7E12, 0., 57.0E3, 0., 0., 26.0 * 1E3};
    inline Body CometX15 = {1.4E14, 0., 11.5E12, 0., 55.0E3, 0., 0., 21.0 * 1E3};
    inline Body CometX16 = {1.6E14, 0., 6.3E12, 0., 46.0E3, 0., 0., 16.0 * 1E3};
    inline Body CometX17 = {1.7E14, 0., 7.6E12, 0., 50.0E3, 0., 0., 27.0 * 1E3};
    inline Body CometX18 = {1.9E14, 0., 10.0E12, 0., 49.0E3, 0., 0., 32.0 * 1E3};
    inline Body CometX19 = {2.0E14, 0., 11.2E12, 0., 51.0E3, 0., 0., 33.0 * 1E3};
    inline Body CometX20 = {1.3E14, 0., 8.4E12, 0., 43.0E3, 0., 0., 15.0 * 1E3};
    inline Body CometX21 = {1.5E14, 0., 9.3E12, 0., 46.0E3, 0., 0., 18.0 * 1E3};
    inline Body CometX22 = {1.8E14, 0., 7.8E12, 0., 54.0E3, 0., 0., 29.0 * 1E3};
    inline Body CometX23 = {1.7E14, 0., 10.4E12, 0., 59.0E3, 0., 0., 34.0 * 1E3};
    inline Body CometX24 = {2.4E14, 0., 9.1E12, 0., 53.0E3, 0., 0., 35.0 * 1E3};
    inline Body CometX25 = {1.6E14, 0., 6.9E12, 0., 45.0E3, 0., 0., 19.0 * 1E3};
    inline Body CometX26 = {1.4E14, 0., 7.0E12, 0., 44.0E3, 0., 0., 16.0 * 1E3};
    inline Body CometX27 = {2.1E14, 0., 8.9E12, 0., 60.0E3, 0., 0., 20.0 * 1E3};
    inline Body CometX28 = {1.5E14, 0., 10.9E12, 0., 48.0E3, 0., 0., 22.0 * 1E3};
    inline Body CometX29 = {1.2E14, 0., 8.6E12, 0., 52.0E3, 0., 0., 25.0 * 1E3};
    inline Body CometX30 = {2.3E14, 0., 7.3E12, 0., 55.0E3, 0., 0., 26.0 * 1E3};
    inline Body CometX31 = {1.8E14, 0., 9.0E12, 0., 50.0E3, 0., 0., 21.0 * 1E3};
    inline Body CometX32 = {1.0E14, 0., 11.7E12, 0., 49.0E3, 0., 0., 20.0 * 1E3};
    inline Body CometX33 = {1.6E14, 0., 8.7E12, 0., 47.0E3, 0., 0., 22.0 * 1E3};
    inline Body CometX34 = {2.0E14, 0., 10.8E12, 0., 50.0E3, 0., 0., 28.0 * 1E3};
    inline Body CometX35 = {1.3E14, 0., 9.4E12, 0., 53.0E3, 0., 0., 24.0 * 1E3};
    inline Body CometX36 = {1.7E14, 0., 8.1E12, 0., 48.0E3, 0., 0., 27.0 * 1E3};
    inline Body CometX37 = {1.9E14, 0., 10.5E12, 0., 56.0E3, 0., 0., 29.0 * 1E3};
    inline Body CometX38 = {1.2E14, 0., 7.7E12, 0., 44.0E3, 0., 0., 18.0 * 1E3};
    inline Body CometX39 = {2.1E14, 0., 9.8E12, 0., 55.0E3, 0., 0., 30.0 * 1E3};
    inline Body CometX40 = {2.3E14, 0., 10.3E12, 0., 52.0E3, 0., 0., 33.0 * 1E3};
    inline Body CometX41 = {2.2E14, 0., 8.1E12, 0., 58.0E3, 0., 0., 31.0 * 1E3};
    inline Body CometX42 = {1.4E14, 0., 7.4E12, 0., 48.0E3, 0., 0., 23.0 * 1E3};
    inline Body CometX43 = {1.1E14, 0., 9.2E12, 0., 47.0E3, 0., 0., 20.0 * 1E3};
    inline Body CometX44 = {2.0E14, 0., 11.4E12, 0., 54.0E3, 0., 0., 34.0 * 1E3};
    inline Body CometX45 = {1.7E14, 0., 10.6E12, 0., 56.0E3, 0., 0., 36.0 * 1E3};
    inline Body CometX46 = {1.5E14, 0., 8.0E12, 0., 51.0E3, 0., 0., 32.0 * 1E3};
    inline Body CometX47 = {2.4E14, 0., 9.4E12, 0., 59.0E3, 0., 0., 37.0 * 1E3};
    inline Body CometX48 = {2.1E14, 0., 7.2E12, 0., 45.0E3, 0., 0., 28.0 * 1E3};
    inline Body CometX49 = {1.8E14, 0., 8.2E12, 0., 52.0E3, 0., 0., 24.0 * 1E3};
    inline Body CometX50 = {1.3E14, 0., 9.9E12, 0., 54.0E3, 0., 0., 35.0 * 1E3};

    // Vector of all celestial bodies, updated
    inline const std::vector<Body> AllBodies = {
        Sun, Mercury, Venus, Earth, Moon, Mars, Phobos, Deimos,
        Jupiter, Io, Europa, Ganymede, Callisto, Amalthea,
        Saturn, Titan, Rhea, Dione, Tethys, Enceladus, Mimas,
        Uranus, Titania, Oberon, Ariel, Umbriel, Miranda,
        Neptune, Triton, Proteus, Nereid,
        Pluto, Charon, Ceres, Haumea, Makemake, Eris,
        Vesta, Pallas, Hygiea, Halley, Eros, Itokawa, HaleBopp,
        PlanetNine, Nibiru,
        Sedna, Eris2, OR10, XR190, KQ40, VP113,
        Haumea2,  UB313,  RR245,  MS4,  TY430,  CR105,
         TR66,  AW197,  QG298,
        Charon2, Carpo, Astraea, Hippolyta, Lysithea, Ananke, Carme, Callirrhoe,
         Europa,  Ida,  Psyche,  Eros,  Bennu,  RQ36,
        Nemesis, PlanetX, CometX1, CometX2, CometX3, CometX4, CometX5, CometX6, CometX7, CometX8, CometX9, CometX10,
        CometX11, CometX12, CometX13, CometX14, CometX15, CometX16, CometX17, CometX18, CometX19, CometX20,
        CometX21, CometX22, CometX23, CometX24, CometX25, CometX26, CometX27, CometX28, CometX29, CometX30,
        CometX31, CometX32, CometX33, CometX34, CometX35, CometX36, CometX37, CometX38, CometX39, CometX40,
        CometX41, CometX42, CometX43, CometX44, CometX45, CometX46, CometX47, CometX48, CometX49, CometX50
    };;
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
