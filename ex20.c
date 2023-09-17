#include <stdio.h>

int main()
{
	int x = 0;
	scanf("%d", &x);

	(x & 1) ? printf("Kent") : printf("Zuyg");

	return 0;
}
