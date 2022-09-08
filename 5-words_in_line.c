#include <stdio.h>
#include <strings.h>
/**
* program to accept any line and count the number of words in it
*/
main()
{
	char line[100];
	int count = 0, i = 0;
	printf(" Enter the line of text : ");
	scanf("%[^\n]s", line);
	
	while(line[i] != '\0')
	{
		if(line[i] == 32)
			count++;
		i++;
	}
	if(line[i] == '\0')
	count++;
	printf("the number of words in line = %d\n", count);
}

