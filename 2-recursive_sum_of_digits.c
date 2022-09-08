#include <stdio.h>
#include <math.h>

/**
* program to print sum of a digit recursively
* e.g if number inputed is 123, sum of digits is 6
* @n: number inputted
* @sumDigits(): function to find sum of digit
*/

main()
{
	int n, x, sumDigits(); 
	
	printf("Enter a number");
	scanf("%d", &n);
	
	x = sumDigits(n);
	printf("Sum of digits is %d", x);
}
int sumDigits(int s)
{
	unsigned long int rem;
	unsigned long int tot;
	if (s == 0) /* if s becomes 0, function is forced to return without recursive call being executed */
		return (s);
	else
	{
		rem = s % 10;
		tot = rem + sumDigits(s / 10); /* remainder is added to every value of the recursive call */
	}
	return (tot);
}
