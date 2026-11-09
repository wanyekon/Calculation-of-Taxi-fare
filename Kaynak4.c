#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	double radius;
	double area;
	const double PI = 3.14;
	printf("Enter radius of circle:");
	scanf("%lf", &radius);
	area = radius * radius * PI;
	printf("Area of Circle: %2f\n", area);
		

	return 0;
}
