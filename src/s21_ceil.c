#include "s21_math.h"

long double s21_ceil(double x) {
  double result;
  if (x != x) {
    result = x;
  } else if (x == S21_INF_POS) {
    result = S21_INF_POS;
  } else if (x == S21_INF_NEG) {
    result = S21_INF_NEG;
  } else {
    if (x - (long long int)x != 0 && x > 0) {
      result = (long long int)x + 1;
    } else {
      result = (long long int)x;
    }
  }
  return result;
}