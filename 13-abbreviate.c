#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* program to abbreviate words
* e.g World health organization will output WHO
*/

main()
{
	int i, n, k = 1, m;
	char text[100], temp[100], ch;
	
	printf("Enter text\n");
	scanf("%[^\n]s", text);
	n = strlen(text);
	
	
	for(i = 0; i <=n; i++)
	{
		temp[0] = text[0];
		if(text[i] == ' ')
		{
			temp[k] = text[i + 1];
			k++;
		}
		temp[k] = '\0';
	}
	printf("%s", temp);
}

