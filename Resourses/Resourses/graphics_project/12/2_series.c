#include <stdio.h>
#include <math.h>

int main()
{
	int n; //total number of terms
	int i; //loop counter
	long int sum; //sum of the series

	//read total number of terms
	printf("Enter total number of terms: ");
	scanf("%d",&n);

	//assign 0 to the sum
	sum = 0;

	for(i=1; i<=n; i++){
		//ODD terms are adding and
		//EVEN terms are subtrating
		if(i%2!=0)
			sum = sum + pow(i,3);
		else
			sum = sum - pow(i,3);
	}

	//print sum of the series
	printf("Sum of the series: %ld\n :",sum);

	return 0;
}
