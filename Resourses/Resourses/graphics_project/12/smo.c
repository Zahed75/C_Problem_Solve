#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, root1, root2;

    printf("Enter value of a, b and c : ");
    scanf("%f%f%f", &a, &b, &c);
    d = b * b - 4 * a * c;

    if (d == 0)
    {
        root1 = ( - b) / (2 * a);
        root2 = root1;
        printf("Roots are real & equal, Root1 = %f, Root2 = %f", root1, root2);
    } else if (d > 0)
    {
        root1 =  - (b + sqrt(d)) / (2 * a);
        root2 =  - (b - sqrt(d)) / (2 * a);
        printf("Roots are real & distinct, Root1 = %f, Root2 = %f", root1, root2);
    }
    else
    {
        printf("Roots are imaginary");
    }

    return 0;
}
