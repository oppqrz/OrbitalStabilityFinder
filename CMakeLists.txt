cmake_minimum_required(VERSION 3.10)

# Set project name
project(OrbitalStabilityFinder)

# Set compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Ofast")

# Include vcpkg toolchain
set(CMAKE_TOOLCHAIN_FILE "/home/oppqrz/vcpkg/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "vcpkg toolchain file" FORCE)
# set(CMAKE_CXX_CLANG_TIDY "clang-tidy;-checks=*;-warnings-as-errors=*")
# set(CMAKE_CXX_INCLUDE_WHAT_YOU_USE "include-what-you-use;-Xiwyu")

# Find dependencies
project(OrbitalStabiltyFinder)
find_package(fmt CONFIG REQUIRED)
find_package(GTest REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(glad CONFIG REQUIRED)
find_package(OpenGL REQUIRED)

# Enable testing
enable_testing()

# Include directories for headers
include_directories(
    ${CMAKE_SOURCE_DIR}/include       # Main include directory
    ${CMAKE_SOURCE_DIR}/tests         # Test-specific headers
)

# List of source files
# Gather source files
set(SOURCES
    src/rendering/InitaliseRendering.cpp
    src/rendering/RenderBodies.cpp
    src/rendering/SetupCamera.cpp
    src/rendering/SetupLighting.cpp
    src/core/Gravity.cpp
    src/core/SimulateTime.cpp
    src/core/Geometry.cpp
)

# Add the test executable
add_executable(simulateSolarSystem
    ${SOURCES}
    src/mains/SimulateSolarSystem.cpp
)
add_executable(test_solarsystem 
    ${SOURCES}
    tests/SolarSystemTest.cpp
)

target_link_libraries(simulateSolarSystem PRIVATE glfw glad::glad GLU ${OPENGL_LIBRARIES})
target_link_libraries(test_solarsystem PRIVATE GTest::GTest GTest::Main glfw glad::glad GLU ${OPENGL_LIBRARIES})

# Register the tests with CTest
add_test(NAME SolarSystemTest COMMAND test_solarsystem)

