#include "s21_math.h"

long double s21_atan(double x) {
  if (x == S21_INF_POS) {
    return S21_PI_2;
  }

  if (x == S21_INF_NEG) {
    return -S21_PI_2;
  }

  if (x == 0.0) {
    return 0;
  }

  if (x > 1) {
    return S21_PI_2 - s21_atan(1.0 / x);
  }

  if (x < -1) {
    return -S21_PI_2 - s21_atan(1.0 / x);
  }

  long double result = 0.0;
  long double term_squared = x * x;
  result =
      x * (0.9999963 +
           term_squared *
               (-0.3331802 +
                term_squared *
                    (0.19813889 +
                     term_squared *
                         (-0.13257127 +
                          term_squared *
                              (0.08006986 +
                               term_squared * (-0.03400133 +
                                               0.00694645 * term_squared))))));

  return result;
}
