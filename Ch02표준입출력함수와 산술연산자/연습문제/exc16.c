#include <stdio.h>
#include <math.h>
int main()
{
	int dec=3849, bin;
	bin = (int) ceil(log10(dec)/ log10(2.));
	printf("10진수 %d는 2진수 %d자리\n", dec, bin);
}
