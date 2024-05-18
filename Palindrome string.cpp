#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i, j, len;
	printf("Enter String:");
	gets(str);
	len = strlen(str);
	j = len - 1;
	for(i = 0; i<=j; i++)
	{
		if(str[i]!=str[j])
		{
			break;
		}
		j--;
	}
	if(i<j)
	{
		printf("\n%s is not a Palindrome String", str);
	}
	else
	{
		printf("\n%s is a Palindrome String", str);
	}
	return 0;
}
