#include <stdio.h>

int main()
{
	int age = 0;
	scanf("%d", &age);

	if (age < 18)
		printf("Duq anchapahas eq");
	else if (age >=18 && age <= 65)
		printf("Duq chapahas eq");
	else
		printf("Du tarec qaxaqaci es");

	return 0;
}
