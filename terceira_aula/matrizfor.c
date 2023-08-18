#include <stdio.h>

int main ()
{
    int i = 0;
    int m1[10]; 

        for (int i = 0; i < 10; i++)
        {

            m1[i] = i;
            printf ("m1[%d]=%d\n" , i, m1[i]);

        }

    return 0;
}