#include <stdio.h>

int FactorialRecur(int);
int FactorialLoop(int);

int main() {

	printf("%d\n", FactorialRecur(5));
	printf("%d\n", FactorialLoop(5));

	return 0;
}

int FactorialRecur(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * FactorialRecur(n - 1);
	}
}

int FactorialLoop(int n) {
	int factor = 1, count = 0;

	for (count = 2; count <= n; count++) {
		factor *= count;
	}
	return factor;
}