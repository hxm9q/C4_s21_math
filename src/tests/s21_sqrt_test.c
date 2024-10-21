#include "s21_math_test.h"

START_TEST(sqrt_test1) {
  ck_assert_double_eq_tol(s21_sqrt(10), sqrt(10), 0.000001);
}
END_TEST

START_TEST(sqrt_test2) {
  ck_assert_double_eq_tol(s21_sqrt(9.9), sqrt(9.9), 0.000001);
}
END_TEST

START_TEST(sqrt_test3) {
  ck_assert_double_eq_tol(s21_sqrt(6), sqrt(6), 0.000001);
}
END_TEST

START_TEST(sqrt_test4) {
  ck_assert_double_eq_tol(s21_sqrt(69), sqrt(69), 0.000001);
}
END_TEST

START_TEST(sqrt_test5) {
  ck_assert_double_eq_tol(s21_sqrt(0.9), sqrt(0.9), 0.000001);
}
END_TEST

START_TEST(sqrt_test6) { ck_assert_double_infinite(s21_sqrt(S21_INF_POS)); }
END_TEST

START_TEST(sqrt_test7) {
  ck_assert_double_eq_tol(s21_sqrt(10000), sqrt(10000), 0.000001);
}
END_TEST

Suite* sqrt_suite(void) {
  Suite* s = suite_create("s_sqrt");
  TCase* tc = tcase_create("tc_sqrt");

  tcase_add_test(tc, sqrt_test1);
  tcase_add_test(tc, sqrt_test2);
  tcase_add_test(tc, sqrt_test3);
  tcase_add_test(tc, sqrt_test4);
  tcase_add_test(tc, sqrt_test5);
  tcase_add_test(tc, sqrt_test6);
  tcase_add_test(tc, sqrt_test7);

  suite_add_tcase(s, tc);
  return s;
}