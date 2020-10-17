#include <stdio.h>

void main ()

{
    int i, j, n, ct;

    n = 100;

    printf("All The prime numbers between 2 & 100 are : \n");

    for (i=0; i<n; i++)
        {
            ct = 0;
            for (j=2; j<i; j++)
            {
                if (i%j == 0)
                {
                    ct = 1;
                    break;
                }
            }

            if (ct == 0)
            {
                 printf("%d \t",i);
            }


        }

}
