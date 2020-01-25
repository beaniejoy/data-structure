#include <stdio.h>

int Fibonacci(int);
int FibonacciLoop(int);

int main(void) {
	printf("Recursive\t");
	for (int i = 1; i < 20; i++) {
		printf("%d ", Fibonacci(i));
	}

	printf("\n");
	printf("Loop\t\t");
	for (int i = 1; i < 20; i++) {
		printf("%d ", FibonacciLoop(i));
	}
	printf("\n");

	return 0;
}

int Fibonacci(int n) {
	if (n < 1) {
		printf("Abnormal Number");
		// Abnormal exit
		exit(1);
	}
	else if (n == 1) {
		return 0;
	}
	else if (n == 2) {
		return 1;
	}
	else {
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
}

int FibonacciLoop(int n) {
	int prev_1 = 0;
	int prev_2 = 1;
	int target = 0;

	if (n < 1) {
		printf("Abnormal Number");
		// Abnormal exit
		exit(1);
	}
	else if (n == 1) {
		return prev_1;
	}
	else if (n == 2) {
		return prev_2;
	}
	else {
		for (int i = 3; i <= n; i++) {
			target = prev_1 + prev_2;
			prev_1 = prev_2;
			prev_2 = target;
		}
		return target;
	}
}