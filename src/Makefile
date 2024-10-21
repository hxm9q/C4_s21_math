CC = gcc
CFLAGS = -Wall -Werror -Wextra -g -std=c11

all: clean s21_math.a test gcov_report

test:
	$(CC) $(CFLAGS) --coverage tests/*.c *.c -o test -lcheck -lm
	./test

s21_math: 
	$(CC) $(CFLAGS) *.c -c
	gcc *.o -o math
	./math
	rm -rf *.o

s21_math.a:
	$(CC) $(CFLAGS) *.c -c
	ar rc s21_math.a *.o
	ranlib s21_math.a

gcov_report:
	lcov -t "s21_math_test" -o fizzbuzz.info -c -d .
	genhtml -o report fizzbuzz.info
	open -a "Google Chrome" report/src/index.html

clean:
	rm -rf test *.gcda *.gcno *.o *.info tests/*.gcno report *.a test.dSYM