#include "s21_math.h"

long double s21_pow(double base, double exp) {
  long double result = 0;
  if (!base && !exp)
    result = 1;
  else if (base == S21_INF_NEG && exp == S21_INF_POS)
    result = S21_INF_POS;
  else if (base == S21_INF_NEG && exp == S21_INF_NEG)
    result = 0;
  else if (base < 0 && exp - (int)exp)
    result = -S21_NAN;
  else {
    result = s21_exp(exp * s21_log(s21_fabs(base)));
    if (base < 0 && (int)exp % 2) result *= -1;
  }
  return result;
}