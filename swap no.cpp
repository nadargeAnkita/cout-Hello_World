#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, temp;
	printf("Enter first no:");
	scanf("\n %d", &a);
	printf("Enter second no:");
	scanf("\n %d", &b);
	
	printf("Before Swapping\n" "a = %d, b = %d", a, b);
	printf("After Swapping\n" "a = %d, b = %d", b, a);
	temp = a;
	a = b;
	b = temp;
	return 0;
}
