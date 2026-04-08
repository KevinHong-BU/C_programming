#include <stdio.h>
#include <math.h>
int main()
{
	double principal=10000000, total, rate=0.05;
	int years = 10;
	total = principal*pow(1+rate, 10);
	printf("гу = %f\n", total);
}
