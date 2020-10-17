#include<stdio.h>
int main(){
    int columns, rows, a, b;

    printf("Enter number of rows\t");
    scanf("%d", &rows);
    printf("Enter number of columns\t");
    scanf("%d", &columns);


    /*this loop increase number of rows */
	for(a = 0; a < rows; a++)
	{
		/*this loop increase number of columns */
        for(b = 0; b < columns; b++)
		{
            /* this puts the star on boudaries */
			if(a==0 || a==rows-1 || b==0 || b==columns-1)
                printf("*"); //prints the star
            else
                printf(" ");
			/* leaves the middle columns of rectangle blank*/
        }
        printf("\n");
    }
    return 0;
}
