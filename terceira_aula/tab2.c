#include <stdio.h>

int main()
{
    int i = 1;
    int a = 1;

    for (i = 1; i < 11; i++)
    {
        printf("\n");
        for (a = 1; a < 11; a++)
        {
            printf("%d x %d = %d\n", i, a, i * a);
        }
    }
}