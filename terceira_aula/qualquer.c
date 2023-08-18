#include <stdio.h>

int main()
{
    int M[5] = {20, 2, 3, 4, 5};
    int i = 0;

    for (i = 0; i < 5; i+=2)
    {
        printf("primeira posição igual %d\n", M[i]);
    }
}
