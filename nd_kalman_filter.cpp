#include <iostream>
#include <math.h>
#include <tuple>
#include "Core" // Eigen Library
#include "LU" // Eigen Library

using namespace std;
using namespace Eigen;

float measurements[3] = { 1, 2, 3 };

tuple<MatrixXf, MatrixXf> kalman_filter(MatrixXf x, MatrixXf P, MatrixXf u, MatrixXf F, MatrixXf H, MatrixXf R, MatrixXf I)
{
    for (int n = 0; n < sizeof(measurements) / sizeof(measurements[0]); n++)
    {
        // Measurement Update
        

        // Prediction
        //
    }

    return make_tuple(x, P);
}

int main()
{
    MatrixXf x(2, 1); // Initial state (location and veolicty)
    x << 0,
         0;

    MatrixXf P(2, 1); // Initial Uncertainty
    P << 100, 0,
         0, 100;
}
