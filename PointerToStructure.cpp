#include<iostream>
using namespace std;

struct rectangle{
	int len;
	int bred;
};
int main()
{
//	rectangle r={10, 6};
//	cout<<r.len<<endl;
//	cout<<r.bred<<endl; 
	
	rectangle *p;
	p=new rectangle;
	p->len=15;
	p->bred=7;
	cout<<p->len<<endl;
	cout<<p->bred<<endl;
	
	
	
	return 0;
}
