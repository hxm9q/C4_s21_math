#include "s21_math.h"

long double s21_sin(double x) {
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

  x = s21_fmod(x, S21_PI * 2);
  if (x < 0) {
    x += S21_PI * 2;
  } else if (x > 0) {
    x -= S21_PI * 2;
  }

  long double result = x;
  long double term = x;

  for (int n = 1; n <= S21_TAILOR_N; ++n) {
    term *= -x * x / ((2 * n) * (2 * n + 1));
    result += term;
  }

  return result;
}