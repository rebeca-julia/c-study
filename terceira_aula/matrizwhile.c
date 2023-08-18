#include <stdio.h>

int main()
{
    int i = 0;
    int m1[10];

    while (i < 10)
    {
        m1[i] = i;
        printf("m1[%d] = %d\n", i, m1[i]);
        i++;
    }

    return 0;
}