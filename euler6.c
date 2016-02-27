#include <stdio.h>

int main(void)
{
	int n = 100;
	long int sum;
    long int squareOfSum;
    long int sumOfSquares;
    long int difference;

	sum = n*(n+1) / 2;
    squareOfSum = sum*sum;
    sumOfSquares = n*(n+1)*(2*n+1) / 6;

    difference = squareOfSum - sumOfSquares;
	
	printf("%d\n", difference);

	return 0;
}
