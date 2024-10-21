#include "s21_math_test.h"

START_TEST(fabs_test1) {
  ck_assert_double_eq_tol(s21_fabs(1.5), fabs(1.5), 0.000001);
}
END_TEST

START_TEST(fabs_test2) {
  ck_assert_double_eq_tol(s21_fabs(0.4), fabs(0.4), 0.000001);
}
END_TEST

START_TEST(fabs_test3) {
  ck_assert_double_eq_tol(s21_fabs(-10.5), fabs(-10.5), 0.000001);
}
END_TEST

START_TEST(fabs_test4) { ck_assert_double_infinite(s21_fabs(S21_INF_POS)); }
END_TEST

START_TEST(fabs_test5) {
  ck_assert_double_eq_tol(s21_fabs(-1.0), fabs(-1.0), 0.000001);
}
END_TEST

START_TEST(fabs_test6) {
  ck_assert_double_eq_tol(s21_fabs(2.0), fabs(2.0), 0.000001);
}
END_TEST

Suite* fabs_suite(void) {
  Suite* s = suite_create("s_fabs");
  TCase* tc = tcase_create("tc_fabs");

  tcase_add_test(tc, fabs_test1);
  tcase_add_test(tc, fabs_test2);
  tcase_add_test(tc, fabs_test3);
  tcase_add_test(tc, fabs_test4);
  tcase_add_test(tc, fabs_test5);
  tcase_add_test(tc, fabs_test6);

  suite_add_tcase(s, tc);
  return s;
}