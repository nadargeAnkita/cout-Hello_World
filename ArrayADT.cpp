#include<iostream>
using namespace std;

struct Array{
	int *A;
	int size;
	int length;
};

void display(struct Array arr)
{
	int i; 
	cout<<"Elements are:"<<endl;
	for(i=0; i<arr.length; i++)
	cout<<arr.A[i];
}
int main()
{
	struct Array arr;
	int n, i;
	cout<<"Enter size of an Array:"<<endl;
	cin>>arr.size;
	arr.A=new int[arr.size];
	arr.length=0;
	
	cout<<"Enter no. of numbers:"<<endl;
	cin>>n;
	
	cout<<"Enter all Elements:"<<endl;
	for(i=0; i<n; i++)
	cin>>arr.A[i];
	arr.length=n;
	
	display(arr);
	return 0;
}
