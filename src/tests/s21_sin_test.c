#include "s21_math_test.h"

START_TEST(sin_test1) {
  ck_assert_double_eq_tol(s21_sin(10), sin(10), 0.000001);
}
END_TEST

START_TEST(sin_test2) {
  ck_assert_double_eq_tol(s21_sin(-10), sin(-10), 0.000001);
}
END_TEST

START_TEST(sin_test3) {
  ck_assert_double_eq_tol(s21_sin(1.5), sin(1.5), 0.000001);
}
END_TEST

START_TEST(sin_test4) { ck_assert_double_eq_tol(s21_sin(0), sin(0), 0.000001); }
END_TEST

START_TEST(sin_test5) { ck_assert_double_nan(s21_sin(S21_NAN)); }
END_TEST

START_TEST(sin_test6) {
  ck_assert_double_eq_tol(s21_sin(0.25), sin(0.25), 0.000001);
}
END_TEST

START_TEST(sin_test7) { ck_assert_double_infinite(s21_sin(S21_INF_NEG)); }
END_TEST

Suite* sin_suite(void) {
  Suite* s = suite_create("s_sin");
  TCase* tc = tcase_create("tc_sin");
  tcase_add_test(tc, sin_test1);
  tcase_add_test(tc, sin_test2);
  tcase_add_test(tc, sin_test3);
  tcase_add_test(tc, sin_test4);
  tcase_add_test(tc, sin_test5);
  tcase_add_test(tc, sin_test6);
  tcase_add_test(tc, sin_test7);

  suite_add_tcase(s, tc);
  return s;
}