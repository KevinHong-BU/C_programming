#include <stdio.h>

main()
{
	int x;
	char str[100];

	printf("숫자가 섞인 문장을 입력하세요: ");
	scanf("%[^1234567890]%d", str, &x);
	printf("%s\n", str);
	printf("%d\n", x);
}
