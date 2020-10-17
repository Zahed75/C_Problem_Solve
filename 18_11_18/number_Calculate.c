#include <stdio.h>
int main()
{
    int x,y;
    float result;

    x = 10; y = 40;

    result = x - y;
    result = result*2;
    result = result/5;

    printf("This is a Result:- *********** %.1f  ", result);
}
