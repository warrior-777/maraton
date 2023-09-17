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
