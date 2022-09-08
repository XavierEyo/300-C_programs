#include <stdio.h>
/**
 * program to print prime factors using recursion
*/

void rpfact(int n);
main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	recursive_pfact(num);
	printf("\n");
}
void recursive_pfact(int num)
{
	static int i = 2;
	if(num == 1)
		return;
	else
	{
		while(num % i == 0)
		{
			printf("%d ", i);
			num = num / i;
		}
		i++;
		recursive_pfact(num);
	}
}
