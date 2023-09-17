#include <stdio.h>

/*
// Using pointer parameter
int strlen(char *ptr)
{
	int count = 0;
	while (*ptr != '\0')
	{
		count++;
		ptr++;
	}

	return count;
}
*/


// Using array parameter
int strlen(char arr[])
{
	int count = 0, i = 0;

	while (arr[i] != '\0')
	{
		count++;
		i++;
	}

	return count;
}

int main()
{
	char arr[] = "hello world";
	printf("arr size is %d", strlen(arr));
	return 0;
}
