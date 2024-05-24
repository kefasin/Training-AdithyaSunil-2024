#include "find_root.h"
#include "evaluate_polynomial.h"
#include "evaluate_derivative.h"
#include <math.h>
double find_root(double coefficients[], int degree, double initial_guess, double precision) {
    double x0 = initial_guess;
    double x1 = x0 - evaluate_polynomial(coefficients, degree, x0) / evaluate_derivative(coefficients, degree, x0);
    
    while (fabs(x1 - x0) >= precision) {
        x0 = x1;
        x1 = x0 - evaluate_polynomial(coefficients, degree, x0) / evaluate_derivative(coefficients, degree, x0);
    }
    
    return x1;
}
