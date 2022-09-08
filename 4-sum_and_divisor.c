#include <stdio.h>
#include <math.h>

/** 
* program to find the sum of the divisors of a number
*e.g 24: divisors are 1,2,3,4,6,8,12,24. Sum of these numbers = 60
* @num: inputted number
* @sumDiv: function to evaluate divisors and sum
* @count: number of times a divisor is found
*/

sumDiv(int num);
int i, num, j;

main()
{
	
	printf("Enter number\n");
	scanf("%d ", &num);
	
	printf("sum of divisors are %d ", sumDiv(num));
}
sumDiv(int num)
{
	num;
	int count  = 0, sum = 0, div;
	
	for(i = 1; i <= num; i++)
	{
		div = num % i;
		if (div == 0)
		{
			count++;
			sum =sum + i;
			printf("%d ", i);
		}
	}
	printf("\nThe number of factors of the number inputted = %d \n", count);
	
	return sum;
}
