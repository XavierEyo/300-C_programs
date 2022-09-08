#include <stdio.h>
#include <string.h>

main()
{
	char str[20];
	int i = 0;
	printf("Enter a string in lowercase: ");
	scanf("%s", str);
	
	while(str[i] != '\0')
	{
		str[i] = str[i] - 32; /** difference between a and A is 32 */
		i++;
	}
	printf("Uppercase string case is : %s\n", str);
}
