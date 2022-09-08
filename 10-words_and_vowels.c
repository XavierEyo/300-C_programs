#include <stdio.h>
/**
 * program to count words and vowels in a line
*/
main()
{
	char words[100];
	char vowels[]={"aeiouAEIOU"};
	int i, count = 0, vow = 0;
	
	int n = strlen(words);
	int m = strlen(vowels);
	
	printf("Enter sentenece\n");
	scanf("%[^\n]s", words);
	
	for(i = 0; words[i]; i++)
	{
		for(k = 0; vowels[k] != '\0'; k++)
		{
			if (words[i] == vowels[k])
				vow++;
		}
		if(words[i] == 32)
			count++;
	}
	count++;
	printf("Number of words is %d, there are %d vowels", count, vow);
}

