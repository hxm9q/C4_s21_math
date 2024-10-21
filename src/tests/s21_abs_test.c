#include "s21_math_test.h"

START_TEST(abs_test1) { ck_assert_int_eq(s21_abs(-1), abs(-1)); }
END_TEST

START_TEST(abs_test2) { ck_assert_int_eq(s21_abs(5), abs(5)); }
END_TEST

START_TEST(abs_test3) { ck_assert_int_eq(s21_abs(-3), abs(-3)); }
END_TEST

START_TEST(abs_test4) { ck_assert_int_eq(s21_abs(0), abs(0)); }
END_TEST

START_TEST(abs_test5) { ck_assert_int_eq(s21_abs(-100), abs(-100)); }
END_TEST

START_TEST(abs_test6) { ck_assert_int_eq(s21_abs(100), abs(100)); }
END_TEST

Suite *abs_suite(void) {
  Suite *s = suite_create("s_abs");
  TCase *tc = tcase_create("tc_abs");

  tcase_add_test(tc, abs_test1);
  tcase_add_test(tc, abs_test2);
  tcase_add_test(tc, abs_test3);
  tcase_add_test(tc, abs_test4);
  tcase_add_test(tc, abs_test5);
  tcase_add_test(tc, abs_test6);

  suite_add_tcase(s, tc);
  return s;
}