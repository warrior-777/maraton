#include <stdio.h>

char* strcat(char* dest, char* src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		*dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return start;
}

int main()
{
	char str1[] = "hello ";
	char str2[] = "world";
	printf("%s", strcat(str1, str2));
	return 0;
}
