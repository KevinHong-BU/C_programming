#include <stdio.h>
#include <math.h>
int main()
{
	double ra, rb, surface, round;
	const double pi = 3.141592;
	printf("반지름a : ");
	scanf("%lf", &ra);
	printf("반지름b : ");
	scanf("%lf", &rb);
	surface = pi*ra*rb;
	round = 2.0*pi*sqrt(1./2.*(ra*ra + rb*rb));
	printf("넓이 : %f, 둘레 : %f\n", surface, round);
}
