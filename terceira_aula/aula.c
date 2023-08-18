#include <stdio.h>

int main ()
{   

    // a = --i -> a recebe o decremento de i
    // a = i-- -> a recebe i e depois decremente i 

    int n1 = 21;
    int n2 = 5;
    

    printf ("n1 =%d\n" , n1);
    printf ("n2=%d\n" , n2);

    
    n1 = --n2;
    printf ("n1=%d\n" , n1);
    printf ("n2=%d\n" , n2);

    return 0;

}