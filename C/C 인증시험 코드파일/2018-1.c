#include <stdio.h>

int main()
{
	char c;
	scanf("%c", &c);

	if (c >= 'A'&&c <= 'Z') printf("upper\n");
	else if (c >= 'a'&&c <= 'z') printf("lower\n");
	else if (c >= '0'&&c <= '9') printf("number\n");
	else printf("etc\n");

	return 0;
}