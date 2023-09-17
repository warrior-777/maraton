#include <stdio.h>

int main()
{
        int a = 0, b = 0;

        for (; a < 2; a++)
        {
 		for (b = 0; b < 2; b++)
          	{
	        	printf("A = %d, B = %d\tA && B || !B ^ A = %d\n", a, b, ((a && b) || (!b ^ a)));
          	}
        }

        return 0;
}
