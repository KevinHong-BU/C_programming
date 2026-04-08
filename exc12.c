#include <stdio.h>
#include <math.h>

int main ()
{
	double x=0.0125, y, z=100., mantissa;
	int e;

	printf("%f\n", exp(1.0) );

	mantissa = frexp(x, &e);
	printf("%f * 2^%d = %f\n", mantissa, e, x);

	y = ldexp(5.0, 6);
	printf("5.0 * 2^6 = %f\n", y);

	printf("%f\n", log(z));
	printf("%f\n", log10(z));

	x = modf(123.1029, &y);
	printf("123.1029= %f + %f\n", y, x);
}
