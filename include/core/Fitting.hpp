#ifndef FITTING_HPP
#define FITTING_HPP


#include <iostream>
#include <vector>
#include <cmath>
#include <Eigen/Dense>

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <GL/glu.h>

void FitEllipse3D(const std::vector<double>& x, const std::vector<double>& y, const std::vector<double>& z);

#endif // FITTING_HPP