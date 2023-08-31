#include <stdio.h>

int main()
{
    int m1[10] = {1, 4, 5, 6, -1, -200, 5000, -731, 0, 27};
    int i = 0;
    int j = 1;
    int t = 0;

    for (i = 0; i < 10; i++)
    {
        for (j = i+1; j < 10; j++)
        {
            if (m1[j] < m1[i])
            {
                t = m1[i];
                m1[i]=m1[j];
                m1[j]= t;

            }
        }
    }

    for (i =0; i<10; i++)
    {
        printf("%d\n", m1[i]);
    }


}
