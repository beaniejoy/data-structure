#include <stdio.h>

void HanoiMove(int num, char from, char by, char to);

int main(void) {
	// move three plates from polar 'A' to 'C' by way of 'B'
	HanoiMove(4, 'A', 'B', 'C');
	return 0;
}

void HanoiMove(int num, char from, char by, char to) {

	if (num == 1) {
		printf("plate %d : move %c to %c \n", num, from, to);
	}
	else {
		HanoiMove(num - 1, from, to, by);
		printf("plate %d : move %c to %c \n", num, from, to);
		HanoiMove(num - 1, by, from, to);
	}
}