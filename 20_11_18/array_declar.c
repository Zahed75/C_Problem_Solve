#include <stdio.h>
int main()
{
   // text color(Red);
    float ar[5],value,total;
    int i;

    printf("Enter 5 float elements respectively: ");

    for (i=0; i<5; i++)
        {
            scanf("%f",&value);
            ar[i] = value;
        }
  for (i=0; i<5; i++)
      {
          printf("ar[%d] = %f\n",i,ar[i]);
      }

}
