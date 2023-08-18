#include <stdio.h>

int main()
{
    int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i = 0;
    int a = 1;

    for (a = 1; a < 11; a++)
    {
        printf ("\n");
        for (i = 0; i < 11; i++)
        {
            printf("%d x %d = %d\n", a, tab[i - 1], a * tab[i - 1]);
        }
    }
}
