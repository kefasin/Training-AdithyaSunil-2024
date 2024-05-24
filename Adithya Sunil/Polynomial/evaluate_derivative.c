
#include "evaluate_derivative.h"
#include <math.h>

double evaluate_derivative(double coefficients[], int degree, double x) {
    double result = 0;
    for (int i = 0; i < degree; i++) {
        result += (degree - i) * coefficients[i] * pow(x, degree - i - 1);
    }
    return result;
}
