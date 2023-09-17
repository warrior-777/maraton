#include <stdio.h>

int main()
{
	float celsius = 0;
	scanf("%f", &celsius);
	printf("%.2f", (celsius * 9 / 5) + 32);

	return 0;
}
