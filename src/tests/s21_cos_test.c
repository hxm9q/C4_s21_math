#include "s21_math_test.h"

START_TEST(cos_test1) {
  ck_assert_double_eq_tol(s21_cos(0.5), cos(0.5), 0.000001);
}
END_TEST

START_TEST(cos_test2) { ck_assert_double_eq_tol(s21_cos(0), cos(0), 0.000001); }
END_TEST

START_TEST(cos_test3) {
  ck_assert_double_eq_tol(s21_cos(-0.5), cos(-0.5), 0.000001);
}
END_TEST

START_TEST(cos_test4) {
  ck_assert_double_eq_tol(s21_cos(-13.2), cos(-13.2), 0.000001);
}
END_TEST

START_TEST(cos_test5) {
  ck_assert_double_eq_tol(s21_cos(13.2), cos(13.2), 0.000001);
}
END_TEST

START_TEST(cos_test6) { ck_assert_double_eq_tol(s21_cos(3), cos(3), 0.000001); }
END_TEST

START_TEST(cos_test7) { ck_assert_double_nan(s21_cos(S21_NAN)); }
END_TEST

START_TEST(cos_test8) { ck_assert_double_infinite(s21_cos(S21_INF_NEG)); }
END_TEST

Suite* cos_suite(void) {
  Suite* s = suite_create("s_cos");
  TCase* tc = tcase_create("tc_cos");

  tcase_add_test(tc, cos_test1);
  tcase_add_test(tc, cos_test2);
  tcase_add_test(tc, cos_test3);
  tcase_add_test(tc, cos_test4);
  tcase_add_test(tc, cos_test5);
  tcase_add_test(tc, cos_test6);
  tcase_add_test(tc, cos_test7);
  tcase_add_test(tc, cos_test8);

  suite_add_tcase(s, tc);
  return s;
}