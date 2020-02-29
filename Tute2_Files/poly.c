#include <stdio.h>
#include <stdlib.h>

// 1 + x + x^2 + ...
// 1 + x + x(x) + x^2(x)

double compute_p2(double A[], int n, double x) {
    double sum = 0;
    double x_val = 1;
    for (int i = 0; i < n; i++) {
        int coeff = A[i];
        sum += coeff * x_val;
        x_val *= x;
    }
    return sum;
}

double compute_p(double A[], int n, double x) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        int coeff = A[i];
        double x_val = 1;
        for (int j = 0; j < i; j++) {
            x_val *= x;
        }
        sum += coeff * x_val;
    }
    return sum;
}
