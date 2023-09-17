#include <stdio.h>

int main()
{
	int x = 0, y = 0, z = 0;
	scanf("%d %d %d", &x, &y, &z);

	if (x == y && x < z)
		printf("%d", z);
	else if (x == z && x < y)
		printf("%d", y);
	else if (y == z && y < x)
		printf("%d", x);
	else
		printf("\n");

	return 0;
}
