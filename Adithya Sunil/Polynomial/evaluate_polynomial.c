#include "evaluate_polynomial.h"
#include <math.h>

double evaluate_polynomial(double coefficients[], int degree, double x) {
    double result = 0;
    for (int i = 0; i <= degree; i++) {
        result += coefficients[i] * pow(x, degree - i);
    }
    return result;
 }
