#include "../include/core/Fitting.hpp"

// Function to fit a 3D ellipse
void FitEllipse3D(const std::vector<double>& x, const std::vector<double>& y, const std::vector<double>& z) {
    // Ensure the vectors have the same size
    if (x.size() != y.size() || y.size() != z.size()) {
        std::cerr << "Position vectors must have the same size." << std::endl;
        return;
    }

    int n = x.size();
    Eigen::MatrixXd data(n, 3);
    for (int i = 0; i < n; i++) {
        data(i, 0) = x[i];
        data(i, 1) = y[i];
        data(i, 2) = z[i];
    }

    // Compute the centroid (mean point)
    Eigen::RowVector3d centroid = data.colwise().mean();

    // Subtract the centroid to center the data
    Eigen::MatrixXd centered = data.rowwise() - centroid;

    // Perform Singular Value Decomposition (SVD)
    Eigen::JacobiSVD<Eigen::MatrixXd> svd(centered, Eigen::ComputeThinU | Eigen::ComputeThinV);
    Eigen::MatrixXd V = svd.matrixV();

    // The ellipse orientation is given by the principal components in V
    Eigen::Vector3d axis1 = V.col(0); // Major axis
    Eigen::Vector3d axis2 = V.col(1); // Minor axis

    std::cout << "Ellipse Center: " << centroid << std::endl;
    std::cout << "Ellipse Major Axis: " << axis1.transpose() << std::endl;
    std::cout << "Ellipse Minor Axis: " << axis2.transpose() << std::endl;
}
