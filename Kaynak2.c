#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int integer1;
	int integer2;
	int sum ;
	printf("Enter First integer: ");
	scanf("%d", &integer1);

	printf("Enter Second integer: ");
	scanf("%d", &integer2);

	sum = integer1 + integer2;
	printf("Sum is %d\n", sum);



		return 0;
}