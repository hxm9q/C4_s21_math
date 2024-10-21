#include "s21_math.h"

long double s21_asin(double x) {
  if (x == 1.0) {
    return S21_PI_2;
  }
  if (x == -1.0) {
    return -S21_PI_2;
  }
  if (x < -1.0 || x > 1.0) {
    return S21_NAN;
  }
  if (x == 0) {
    return 0;
  }

  long double result = 0.0;

  if (x == S21_IS_INF(x)) {
    result = S21_PI_2 * x;
  } else {
    result = s21_atan(x / s21_sqrt(1.0 - x * x));
  }

  return result;
}
