#include<iostream>
using namespace std;

struct Rectangle{
	int len;
	int bread;
};
void initialise(struct Rectangle *r, int l, int b)
{
	r->len=l;
	r->bread=b;
}
int area(struct Rectangle r){
	return r.len*r.bread;
}
int peri(Rectangle r)
{
	int p;
	p=2*(r.len+r.bread);
	return p;
}
int main()
{
	Rectangle r={0,0};
	int l, b;
	cout<<"Enter length:"<<endl;
	cin>>l;
	cout<<"Enter breadth:"<<endl;
	cin>>b;
	
	initialise(&r, l, b);
	
	int a = area(r);
	int perimeter = peri(r);
	
	cout<<"Area:"<<a<<endl;
	cout<<"Perimeter:"<<perimeter<<endl;
}
