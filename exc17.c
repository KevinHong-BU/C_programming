#include <stdio.h>
#include <math.h>
int main()
{
	double series, r=2., a=1, n=10;
	series = a*(pow(r, n)-1)/(r-1);
	printf("гу = %f\n", series);
}
