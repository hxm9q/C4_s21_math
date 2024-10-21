#include "s21_math.h"

long double s21_fmax(double a, double b) {
  long double result = 1.0;
  if (a >= b) {
    result = a;
  } else {
    result = b;
  }
  return result;
}

long double s21_sqrt(double x) {
  if (x != x || x < 0) {
    return S21_NAN;
  }

  if (x == 0) {
    return 0.0;
  }

  double left = 0.0;
  double right = s21_fmax(1.0, x);

  while ((right - left) > S21_EPS * right) {
    double mid = (left + right) / 2;
    if (mid * mid > x) {
      right = mid;
    } else {
      left = mid;
    }
  }

  return (left + right) / 2;
}