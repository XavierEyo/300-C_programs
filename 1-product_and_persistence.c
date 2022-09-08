#include <stdio.h>
#include <math.h>

/* program to find the product and persistence
* of a number
* the persisitence of a number n is the number
* of times taken to multiply its digits until
* a single digit is left
* @cprod: continuous product of number
* @prod_pers: product and persistence function
*/

int count;
prod_pers(int n);
main()
{
	int num;
	
	printf("Enter a number\n");
	scanf("%d", &num);
	
	printf("\nProduct of the digits of the number up till point of persistence is %d", prod_pers(num));
}
prod_pers(int num)
{
	int i, rem;
	int cprod;
	
	if(num < 10)
		return num; /* if number is a single digit, return the number */
	else
	{
		do
		{
			for (cprod=1; num != 0; num /= 10)
			{
				rem = num % 10;
				cprod = rem * cprod;
			}
			count++;
			num = cprod;
		}while(num / 10 != 0);
	}
	printf("persistence of the number is %d", count);
	return cprod;
}

