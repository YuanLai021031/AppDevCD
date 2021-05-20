#include <stdio.h>
//
// this program will take two positive integers from the user, and print out all
// the number which are divisible by 3 between these 2 number.
//
int main(void) {
	int a, b;
	printf("Enter two positive number:");
	scanf_s("%d%d", &a, &b);
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	for (int i = a, c = 0 ; i <= b; i++) {
		if (i % 3 == 0) {
			printf("%6d", i);
			c++;
			if (c % 5 == 0) printf("\n");
		}
	}
}