#include <stdio.h>
int main()
{
	int x=39209, h, m, s;
	printf("%d초 = ", x); 
	h = x / 3600;
	x = x % 3600;
	m = x / 60;
	s = x % 60;
	printf("%d시 %d분 %d초\n",  h, m, s);
}
