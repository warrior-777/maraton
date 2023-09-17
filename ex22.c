#include <stdio.h>

int main()
{
	int x = 0, y = 0;
	scanf("%d %d", &x, &y);

	(x > y) ? printf("%d", x) : printf("%d", y);

	return 0;
}
