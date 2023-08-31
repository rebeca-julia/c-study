#include <stdio.h>

int main()
{
    int m1[10] = {1, 4, 5, 6, -1, -200, 5000, -731, 0, 27};
    int i = 0;
    int m = m1[i];
    int M = m1[i];

    for (i = 0; i < 10; i++)
    {
        if (m > m1[i])
        {
            m = m1[i];
        }

        if (M < m1[i])
        {
            M = m1[i];
        }
    }

    printf("menor=%d\n", m);

    printf("maior=%d\n", M);
}
