#include "s21_math.h"

long double s21_fmod(double x, double y) {
  if (s21_is_invalid_fmod_input(x, y)) {
    return S21_NAN;
  }
  if (S21_IS_INF(y)) {
    return (long double)x;
  }
  int n = x / y;
  long double res = (long double)x - n * (long double)y;
  return res;
}
int s21_is_invalid_fmod_input(double x, double y) {
  int res = 0;
  int a = (y == 0);
  int b = S21_IS_INF(x);
  int c = S21_IS_INF(y);

  if (a || b || c) {
    res = 1;
  }
  return res;
}
