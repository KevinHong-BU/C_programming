#include <stdio.h>
int main()
{
	double v, i, r;
	printf("전압 : ");
	scanf("%lf", &v);
	printf("저항 : ");
	scanf("%lf", &r);
	i = v / r;
	printf("전류 : %f[A]\n", i);
}
