#include <stdio.h>

int strchar(char* ptr, char sym)
{
	int index = 0;

	while (*ptr != '\0')
	{
		if (*ptr == sym)
			return index;
		index++;
		ptr++;
	}

	return -1;
}

int main()
{
	char str[] = "basketball";
	char symbol = 'f';
	int check = strchar(str, symbol);

	if (check < 0)
		printf("The array don't consist of the above symbol");
	else
		printf("The symbol in array has index %d", check);

	return 0;
}
