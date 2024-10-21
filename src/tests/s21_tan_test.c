#include "s21_math_test.h"

START_TEST(tan_test1) {
  ck_assert_double_eq_tol(s21_tan(0.5), tan(0.5), 0.000001);
}
END_TEST

START_TEST(tan_test2) { ck_assert_double_eq_tol(s21_tan(0), tan(0), 0.000001); }
END_TEST

START_TEST(tan_test3) {
  ck_assert_double_eq_tol(s21_tan(-0.5), tan(-0.5), 0.000001);
}
END_TEST

START_TEST(tan_test4) { ck_assert_double_eq_tol(s21_tan(1), tan(1), 0.000001); }
END_TEST

START_TEST(tan_test5) { ck_assert_double_nan(s21_tan(S21_NAN)); }
END_TEST

START_TEST(tan_test6) { ck_assert_double_nan(s21_tan(S21_INF_POS)); }
END_TEST

START_TEST(tan_test7) { ck_assert_double_nan(s21_tan(S21_INF_NEG)); }
END_TEST

START_TEST(tan_test8) {
  ck_assert_double_eq_tol(s21_tan(-1), tan(-1), 0.000001);
}
END_TEST

START_TEST(tan_test9) {
  ck_assert_double_eq_tol(s21_tan(S21_PI_2), tan(S21_PI_2), 0.000001);
}
END_TEST

START_TEST(tan_test10) {
  ck_assert_double_eq_tol(s21_tan(-S21_PI_2), tan(-S21_PI_2), 0.000001);
}
END_TEST

START_TEST(tan_test11) {
  ck_assert_double_eq_tol(s21_tan(5), tan(5), 0.000001);
}
END_TEST
Suite* tan_suite(void) {
  Suite* s = suite_create("s_tan");
  TCase* tc = tcase_create("tc_tan");
  tcase_add_test(tc, tan_test1);
  tcase_add_test(tc, tan_test2);
  tcase_add_test(tc, tan_test3);
  tcase_add_test(tc, tan_test4);
  tcase_add_test(tc, tan_test5);
  tcase_add_test(tc, tan_test6);
  tcase_add_test(tc, tan_test7);
  tcase_add_test(tc, tan_test8);
  tcase_add_test(tc, tan_test9);
  tcase_add_test(tc, tan_test10);
  tcase_add_test(tc, tan_test11);

  suite_add_tcase(s, tc);
  return s;
}