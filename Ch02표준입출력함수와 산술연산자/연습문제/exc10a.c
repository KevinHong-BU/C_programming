#include <stdio.h>

main()
{
	int x1, x2, x3;
	char t1[10];

	printf("전화번호를 입력하세요: ");
	scanf("%[0( ]%d%[-),. ]%d%[-),. ]%d", t1, &x1, t1, &x2, t1, &x3);
	printf("%d %d %d\n", x1, x2, x3);
}
