#include <stdio.h>
int main()
{
	char id[50], at[2], server[50];
	printf("E-mail입력: ");
	scanf("%[^@]%[@]%[^\n]", id, at, server);
	printf("아이디 : %s\n서버 : %s\n", id, server);
	fflush(stdin);
}
