#include<iostream>
#include<stdlib.h>
using namespace std;
int *fun( int size){
//	for(int i=0; i<n; i++)
//	cout<<a[i]<<endl;

//    a[0] = 15;
    int *p;
    p=new int[size];
    
    for(int i=0; i<size; i++)
    p[i]=i+1;
    
    return p;
}
int main()
{
//	int a[ ] = {2, 4, 6, 8, 10};
//	int n=5;
//	fun(a, n);
//	
//	for(int i=0; i<n; i++)
//	cout<<a[i]<<" ";
	int *ptr, sz=5;
	
	ptr = fun(sz);
	
	for(int i=0; i<sz; i++)
	cout<<ptr[i]<<endl;
	return 0;
}

//Arrays are always pass by Address only
