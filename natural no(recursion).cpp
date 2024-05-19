#include<stdio.h>
#include<conio.h>
void natural (int n)
{
	if(n<=10)
	{
		printf("\n%d", n);
		natural (n+1);
	}
}
int main()
{
	int n=1;
	natural (n);
	getch();
}
