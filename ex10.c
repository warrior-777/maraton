#include <stdio.h>

int main()
{
	char sym;
	scanf("%c", &sym);

	(sym < 48 || sym > 57) ? printf("false") : printf("true");

        return 0;
}

