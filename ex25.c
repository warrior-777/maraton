#include <stdio.h>

int main()
{
	int year = 0;
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("Leap");
	else
		printf("Not leap");

	return 0;
}
