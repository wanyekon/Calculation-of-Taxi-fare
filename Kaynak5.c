#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int integer1;
	int integer2;
	int sum;
	int diff;
	printf("Enter first number: ");
	scanf("%d", &integer1);
	printf("Enter second number: ");
	scanf("%d", &integer2);
	sum = integer1 + integer2;
	diff = abs(integer1 - integer2);
	printf("Sum is %d\n", sum);
	printf("Diff is %d\n", diff);


	return 0;
}