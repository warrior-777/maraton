#include <stdio.h>
#include <stdlib.h>

int main()
{
	char letter;
	scanf("%c", &letter);

	char vowels[] = {'a', 'e' ,'i', 'o'};

	for (int i = 0; i < 4; i++)
	{
		if (letter == vowels[i] || letter == vowels[i] - 32)
		{
			printf("Dzaynavor");
			exit(0);
		}
	}

	printf("Baxadzayn");

	return 0;
}
