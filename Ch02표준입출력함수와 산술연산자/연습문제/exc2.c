#include <stdio.h>
int main()
{
	int distance=149597870, light=300000;
	int sec, min;
	
	sec = distance/light;
	min = sec/60;
	sec = sec%60;
	printf("%d∫– %d√ \n", min, sec);
}
