#include <stdio.h>
int main()
{
	char str[100];
	int x;
	printf("숫자가 섞여 있는 문장 입려:");
	scanf("%[^0123456789]%d",str, &x);
	printf("%s, %d\n", str, x);
}
