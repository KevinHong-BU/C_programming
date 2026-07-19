#include <stdio.h>
int main()
{
	double freq, length;
	printf("주파수 입력:");
	scanf("%lf", &freq);
	length = 300000000/freq;
	printf("파장 = %lf\n", length);
}
