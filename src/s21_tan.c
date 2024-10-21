#include "s21_math.h"

long double s21_tan(double x) {
  if (x == 0.0) {
    return 0.0;
  }

  if (s21_fmod(x, S21_PI_2) == 0) {
    if (x > 0) {
      return S21_TAN_PI_2;
    } else if (x < 0) {
      return -S21_TAN_PI_2;
    }
  }

  return s21_sin(x) / s21_cos(x);
}