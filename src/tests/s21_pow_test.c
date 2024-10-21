#include "s21_math_test.h"

START_TEST(pow_test1) {
  ck_assert_double_eq_tol(s21_pow(5, 0), pow(5, 0), 0.000001);
}
END_TEST

START_TEST(pow_test2) {
  ck_assert_double_eq_tol(s21_pow(9.9, 3.3), pow(9.9, 3.3), 0.000001);
}
END_TEST

START_TEST(pow_test3) {
  ck_assert_double_eq_tol(s21_pow(1, 1), pow(1, 1), 0.000001);
}
END_TEST

START_TEST(pow_test4) {
  ck_assert_double_eq_tol(s21_pow(2, 2), pow(2, 2), 0.000001);
}
END_TEST

START_TEST(pow_test5) {
  ck_assert_double_eq_tol(s21_pow(32, 2), pow(32, 2), 0.000001);
}
END_TEST

START_TEST(pow_test6) {
  ck_assert_double_eq_tol(s21_pow(-1, 2), pow(-1, 2), 0.000001);
}
END_TEST

START_TEST(pow_test7) {
  ck_assert_ldouble_eq_tol(pow(10, 1), s21_pow(10, 1), 0.000001);
}
END_TEST

START_TEST(pow_test8) {
  ck_assert_ldouble_eq_tol(pow(-2, 3), s21_pow(-2, 3), 0.000001);
}
END_TEST

START_TEST(pow_test9) {
  long double result = s21_pow(S21_INF_NEG, S21_INF_POS);
  ck_assert(S21_INF_POS == result);
}
END_TEST

START_TEST(pow_test10) {
  long double result = s21_pow(S21_INF_NEG, S21_INF_NEG);
  ck_assert(0 == result);
}
END_TEST

Suite* pow_suite(void) {
  Suite* s = suite_create("s_pow");
  TCase* tc = tcase_create("tc_pow");

  tcase_add_test(tc, pow_test1);
  tcase_add_test(tc, pow_test2);
  tcase_add_test(tc, pow_test3);
  tcase_add_test(tc, pow_test4);
  tcase_add_test(tc, pow_test5);
  tcase_add_test(tc, pow_test6);
  tcase_add_test(tc, pow_test7);
  tcase_add_test(tc, pow_test8);
  tcase_add_test(tc, pow_test9);
  tcase_add_test(tc, pow_test10);

  suite_add_tcase(s, tc);
  return s;
}