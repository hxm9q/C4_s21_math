#include "s21_math_test.h"

START_TEST(atan_test1) {
  ck_assert_double_eq_tol(s21_atan(0.5), atan(0.5), 0.000001);
}
END_TEST

START_TEST(atan_test2) {
  ck_assert_double_eq_tol(s21_atan(0), atan(0), 0.000001);
}
END_TEST

START_TEST(atan_test3) {
  ck_assert_double_eq_tol(s21_atan(-0.5), atan(-0.5), 0.000001);
}
END_TEST

START_TEST(atan_test4) {
  ck_assert_double_eq_tol(s21_atan(1), atan(1), 0.000001);
}
END_TEST

START_TEST(atan_test5) {
  ck_assert_ldouble_eq_tol(atan(-2), s21_atan(-2), 1e-6);
}
END_TEST

START_TEST(atan_test6) {
  ck_assert_double_eq_tol(atan(100), s21_atan(100), 0.000001);
}
END_TEST

START_TEST(atan_test7) {
  ck_assert_double_eq_tol(s21_atan(S21_INF_POS), atan(S21_INF_POS), 0.000001);
}
END_TEST

START_TEST(atan_test8) {
  ck_assert_double_eq_tol(s21_atan(S21_INF_NEG), atan(S21_INF_NEG), 0.000001);
}
END_TEST

Suite* atan_suite(void) {
  Suite* s = suite_create("s_atan");
  TCase* tc = tcase_create("tc_atan");

  tcase_add_test(tc, atan_test1);
  tcase_add_test(tc, atan_test2);
  tcase_add_test(tc, atan_test3);
  tcase_add_test(tc, atan_test4);
  tcase_add_test(tc, atan_test5);
  tcase_add_test(tc, atan_test6);
  tcase_add_test(tc, atan_test7);
  tcase_add_test(tc, atan_test8);

  suite_add_tcase(s, tc);
  return s;
}