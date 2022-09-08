#include <stdio.h>
#include <string.h>

/* program to check if a string is a pallindrome
*/
main()
{
	char str[20];
	int i = 0, j, flag;
	printf("Enter the word : ");
	scanf("%s", str);
	j = strlen(str) - 1; /** string length - 1 is assigned to variable j */
	while(i <= j)
	{
		if(str[i] == str[j])
			flag = 1;
		else
		{
			flag = 0;
			break;
		}
		i++;
		j--;
	}
	if(flag == 1)
		printf("Word is a palidrome");
	else
		printf("Word is not a palindrome\n" );
}

