#include <stdio.h>
#include <math.h>
#include "evaluate_polynomial.h"
#include "evaluate_derivative.h"
#include "find_root.h"

int main() {
    int degree;
    
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);

    double coefficients[degree + 1];
    printf("Enter the coefficients of the polynomial from highest to lowest degree:\n");
    for (int i = 0; i <= degree; i++) {
        printf("Coefficient of x^%d: ", degree - i);        scanf("%lf", &coefficients[i]);
    }

    double initial_guess;
    printf("Enter an initial guess for the root: ");
    scanf("%lf", &initial_guess);

    double precision = 0.001;

    double root = find_root(coefficients, degree, initial_guess, precision);
    printf("The root of the polynomial is: %.3lf\n", root);

    return 0;
}
