#include<iostream>
using namespace std;

class Rectangle{
	public:
	int len;
	int bread;
	
void initialise(int l, int b)
{
	len=l;
	bread=b;
}
int area(){
	return len*bread;
}
int peri()
{
	int p;
	p=2*(len+bread);
	return p;
}

};
int main()
{
	Rectangle r;
	int l, b;
	cout<<"Enter length:"<<endl;
	cin>>l;
	cout<<"Enter breadth:"<<endl;
	cin>>b;
	
	r.initialise(l, b);
	
	int a = r.area();
	int perimeter = r.peri();
	
	cout<<"Area:"<<a<<endl;
	cout<<"Perimeter:"<<perimeter<<endl;
}
