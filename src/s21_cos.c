#include "s21_math.h"

long double s21_cos(double x) {
  if (x == 0.0) {
    return 1.0;
  }

  if (x == S21_INF_POS) {
    return S21_INF_POS;
  }

  if (x == S21_INF_NEG) {
    return S21_INF_NEG;
  }

  if (x == S21_NAN) {
    return S21_NAN;
  }

  if (x == -S21_NAN) {
    return -S21_NAN;
  }

  long double result = 0.0;
  if ((x != x) || s21_fabs(x) == S21_IS_INF(x)) {
    result = S21_NAN;
  } else {
    result = s21_sin(S21_PI_2 - x);
  }

  return result;
}