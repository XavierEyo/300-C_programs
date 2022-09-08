#include <stdio.h>
/**
 * program to print prime factors
*/
void pfact(int num);
main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	pfact(num);
	printf("\n");
}
void pfact(int num)
{
	int i;
	for(i = 2; num != 1; i++)
	{
		while(num % i == 0)
		{
			printf("%d ", i);
			num = num / i;
		}
	}
}
