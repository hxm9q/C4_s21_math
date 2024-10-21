#include <limits.h>
#include <stdio.h>

#define S21_PI 3.14159265358979323846
#define S21_PI_2 1.57079632679489661923
#define S21_PI_4 0.78539816339744830961
#define S21_TAN_PI_2 16331239353195370.00000000000000000
#define S21_MAX_LONG_DOUBLE 1.79769313486231571e+308
#define S21_MIN_LONG_DOUBLE 1.79769313486231571e-308
#define S21_NAN 0.0 / 0.0
#define S21_EXP 2.7182818284590452353602874713527
#define S21_EXP_MAX 1000
#define S21_INF_POS +1.0 / 0.0
#define S21_INF_NEG -1.0 / 0.0
#define S21_EPS 1e-15
#define S21_EPS_FAULT 1e-6
#define S21_IS_INF(x) (x == S21_INF_NEG || x == S21_INF_POS)
#define S21_TAILOR_N 64

int s21_abs(int x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_pow(double base, double exp);
long double s21_fmod(double x, double y);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_sqrt(double x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_floor(double x);
long double s21_log(double x);
long double s21_sin(double x);
long double s21_tan(double x);
int s21_is_invalid_fmod_input(double x, double y);
long double s21_fmax(double a, double b);