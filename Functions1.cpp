#include<iostream>
using namespace std;

add(int a, int b)
{
	int c;
	c = a+b;
	return c;
}
int main()
{
	int num1=10, num2=20, sum;
	sum=add(num1, num2);
	cout<<sum;
	return 0;
}

// Procedural Programming
