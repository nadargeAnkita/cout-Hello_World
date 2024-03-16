#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter size:";
	cin>>n;
	int a[n];
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	a[3] = 4;
	a[4] = 5;
	
	for(int i=0; i<5; i++)
	{
		cout<<a[i]<<endl;
	}
	
	
//	cout<<sizeof(a)<<endl;
//	cout<<a[0]<<endl;
//	cout<<a[1]<<endl;
//	cout<<a[2]<<endl;
//	cout<<a[3]<<endl;
//	cout<<a[4]<<endl;
//	cout<<a[9]<<endl;
	return 0;
}
