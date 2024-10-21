#include "s21_math_test.h"

START_TEST(fmod_test1) {
  ck_assert_double_eq_tol(s21_fmod(2, 2), fmod(2, 2), 0.000001);
}
END_TEST

START_TEST(fmod_test2) {
  ck_assert_double_eq_tol(s21_fmod(9.9, 3.2), fmod(9.9, 3.2), 0.000001);
}
END_TEST

START_TEST(fmod_test3) {
  ck_assert_double_eq_tol(s21_fmod(8.2, 3.6), fmod(8.2, 3.6), 0.000001);
}
END_TEST

START_TEST(fmod_test4) {
  ck_assert_double_eq_tol(s21_fmod(0, 8), fmod(0, 8), 0.000001);
}
END_TEST

START_TEST(fmod_test5) { ck_assert_double_nan(s21_fmod(S21_NAN, 0)); }
END_TEST

Suite* fmod_suite(void) {
  Suite* s = suite_create("s_fmod");
  TCase* tc = tcase_create("tc_fmod");

  tcase_add_test(tc, fmod_test1);
  tcase_add_test(tc, fmod_test2);
  tcase_add_test(tc, fmod_test3);
  tcase_add_test(tc, fmod_test4);
  tcase_add_test(tc, fmod_test5);

  suite_add_tcase(s, tc);
  return s;
}