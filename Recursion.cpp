#include<iostream>
using namespace std;
void fun(int n)
{
	if(n>0)
	{
		fun(n-1);
		cout<<n<<"\t";
//		fun(n-1);
	}
}
int main()
{
	int x=3;
	fun(x);
	
	return 0;
}
