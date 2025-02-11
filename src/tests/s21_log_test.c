#include "s21_math_test.h"

START_TEST(log_test1) {
  ck_assert_double_eq_tol(s21_log(10), log(10), 0.000001);
}
END_TEST

START_TEST(log_test2) {
  ck_assert_double_eq_tol(s21_log(7.7), log(7.7), 0.000001);
}
END_TEST

START_TEST(log_test3) {
  ck_assert_double_eq_tol(s21_log(5.5), log(5.5), 0.000001);
}
END_TEST

START_TEST(log_test4) { ck_assert_double_infinite(s21_log(S21_INF_POS)); }
END_TEST

START_TEST(log_test5) { ck_assert_double_infinite(s21_log(0)); }
END_TEST

Suite* log_suite(void) {
  Suite* s = suite_create("s_log");
  TCase* tc = tcase_create("tc_log");

  tcase_add_test(tc, log_test1);
  tcase_add_test(tc, log_test2);
  tcase_add_test(tc, log_test3);
  tcase_add_test(tc, log_test4);
  tcase_add_test(tc, log_test5);

  suite_add_tcase(s, tc);
  return s;
}