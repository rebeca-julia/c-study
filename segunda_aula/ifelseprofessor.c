#include <stdio.h>

int main ()
{
    int n1;
    int n2;
    n1 = 3;
    n2 = 4;

    if (n1 > n2)
    {
        printf ("n1 maior que n2\n");
    }
    else
    {
        if (n1 == n2)
        {
        printf ("n1 igual n2\n");
        }
        else 
        {
            printf ("n2 maior que n1\n");
        }
    }

}