#include <stdio.h>

int main()
{
    int n1;
    int n2;
    n1 = 4;
    n2 = 4;

    if (n1 > n2)
    {
        printf("n1 maior que n2");

        return 0;
    }

    if (n2 > n1)
    {
        printf("n2 maior que n1");

        return 0;
    }

    printf("n1 igual n2");
}