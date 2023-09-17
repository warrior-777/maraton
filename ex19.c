#include <stdio.h>

int main()
{
        int a = 0, b = 0;

        for (; a < 2; a++)
        {
          for (b = 0; b < 2; b++)
          {
            printf("A = %d, B = %d\t!(A&&B) || A && !B || A = %d\n", a, b, (!(a && b) || ((a && !b) || a)));
          }
        }

        return 0;
}
