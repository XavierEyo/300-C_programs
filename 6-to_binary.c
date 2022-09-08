#include <stdio.h>

int i, n, bc[];
int main()
{
	printf("Enter number to convert");
	scanf("%d", &n);
	
	for (i = 0; n > 0; i++)
	{
		bc[i] = n % 2;
		n /= 2;
	}
	
	for (i = i-1;i >= 0;i--)
	{
		printf("%d", bc[i]);
	}
}

