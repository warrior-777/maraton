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
