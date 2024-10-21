#include "s21_math.h"

long double s21_exp(double x) {
  long double result = 1.0, y = 1.0;
  long double i = 1.0;
  int flag = 0;
  if (x < 0) {
    x *= -1;
    flag = 1;
  }
  int exit_loop = 0;
  while (!exit_loop) {
    result *= x / i;
    i++;
    y += result;
    if (y > S21_MAX_LONG_DOUBLE) {
      y = S21_INF_POS;
      exit_loop = 1;
    } else if (s21_fabs(result) <= S21_EPS) {
      exit_loop = 1;
    }
  }
  if (flag == 1) {
    if (y > S21_MAX_LONG_DOUBLE) {
      y = 0;
    } else {
      y = 1.0 / y;
    }
  }
  return y;
}
