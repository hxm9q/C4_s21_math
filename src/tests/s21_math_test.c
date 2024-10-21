#include "../s21_math.h"

#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "s21_math_test.h"

void run_test(Suite *s, int *fail) {
  SRunner *runner = srunner_create(s);
  srunner_run_all(runner, CK_NORMAL);
  *fail = srunner_ntests_failed(runner);
  srunner_free(runner);
}

int main() {
  int fail = 0;
  run_test(abs_suite(), &fail);
  run_test(acos_suite(), &fail);
  run_test(asin_suite(), &fail);
  run_test(atan_suite(), &fail);
  run_test(ceil_suite(), &fail);
  run_test(cos_suite(), &fail);
  run_test(exp_suite(), &fail);
  run_test(fabs_suite(), &fail);
  run_test(floor_suite(), &fail);
  run_test(fmod_suite(), &fail);
  run_test(log_suite(), &fail);
  run_test(pow_suite(), &fail);
  run_test(sin_suite(), &fail);
  run_test(sqrt_suite(), &fail);
  run_test(tan_suite(), &fail);

  return (fail == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}