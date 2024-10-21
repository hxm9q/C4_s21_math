#include "s21_math.h"

long double s21_log(double x) {
  long double n = x;
  long long int copy_exp = 0;
  double result = 0;
  double compare;

  if (x == 0) {
    result = S21_INF_NEG;
  } else if ((x != x) || x < 0) {
    result = S21_NAN;
  } else if (x == S21_INF_POS) {
    result = S21_INF_POS;
  } else {
    while (n >= S21_EXP) {
      n /= S21_EXP;
      copy_exp++;
    }
    for (int i = 0; i < S21_TAILOR_N; i++) {
      compare = result;
      result = compare + 2 * (n - s21_exp(compare)) / (n + s21_exp(compare));
    }
  }

  return result + copy_exp;
}
