#include <stdio.h>

int main()
{
	int x = 0, y = 0;
	scanf("%d %d", &x, &y);
	printf("%d", x * y + 21 * x / y - 200);

        return 0;
}

