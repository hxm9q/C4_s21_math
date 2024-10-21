#include "s21_math.h"

long double s21_floor(double x) {
  long double res = 0;
  if (x != x) {
    res = S21_NAN;
    return res;
  }

  if (s21_fabs(x) > S21_MAX_LONG_DOUBLE || S21_IS_INF(x)) {
    return x;
  }

  res = (long long int)x;

  if (x < 0 && s21_fabs(x - res) > S21_MIN_LONG_DOUBLE) {
    res -= 1;
  }

  return res;
}
