#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[50];
	int i;
	printf("Enter String:");
	gets(str);
	for(i=0; str[i]!='\0'; i++);
	{
		printf("Length of string is:%d", i);
		return 0;
	}
}
