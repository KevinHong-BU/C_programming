#include <stdio.h>
int main()
{
	double freq, length;
	printf("ÁÖÆÄ¼ö ÀÔ·Â:");
	scanf("%lf", &freq);
	length = 300000000/freq;
	printf("ÆÄÀå = %lf\n", length);
}
