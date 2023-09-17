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
