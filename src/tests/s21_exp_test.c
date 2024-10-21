#include "s21_math_test.h"

START_TEST(exp_test1) {
  ck_assert_double_eq_tol(s21_exp(1.5), exp(1.5), 0.000001);
}
END_TEST

START_TEST(exp_test2) {
  ck_assert_double_eq_tol(s21_exp(0.4), exp(0.4), 0.000001);
}
END_TEST

START_TEST(exp_test3) {
  ck_assert_double_eq_tol(s21_exp(-100), exp(-100), 0.000001);
}
END_TEST

START_TEST(exp_test4) {
  ck_assert_double_eq_tol(s21_exp(-1), exp(-1), 0.000001);
}
END_TEST

START_TEST(exp_test5) { ck_assert_double_infinite(s21_exp(S21_INF_POS)); }
END_TEST

START_TEST(exp_test6) {
  ck_assert_double_infinite(s21_exp(S21_MAX_LONG_DOUBLE + 1));
}
END_TEST

Suite *exp_suite(void) {
  Suite *s = suite_create("s_exp");
  TCase *tc = tcase_create("tc_exp");

  tcase_add_test(tc, exp_test1);
  tcase_add_test(tc, exp_test2);
  tcase_add_test(tc, exp_test3);
  tcase_add_test(tc, exp_test4);
  tcase_add_test(tc, exp_test5);
  tcase_add_test(tc, exp_test6);

  suite_add_tcase(s, tc);
  return s;
}