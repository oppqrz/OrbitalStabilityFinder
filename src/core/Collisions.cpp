#include "../include/core/Collisions.hpp"


bool DetectCollision(Body& subjectBody, Body& targetBody){
    double distance = GetDistance(subjectBody,targetBody);
    if (distance < subjectBody.Radius + targetBody.Radius){
        return true;
    }
    else {
        return false;
    }
}


// Function to handle collisions if more complex functionality is desired
bool HandleCollisions(Body* subjectBody, Body* targetBody) {
    if (DetectCollision(*subjectBody, *targetBody)) {
        // If collision is detected, remove both bodies
        return true;
    }
    return false;
}
