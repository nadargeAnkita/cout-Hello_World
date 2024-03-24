#include<iostream>
using namespace std;

struct rectangle
{
	int length;
	int breadth;
	char x;  //Padding
};
//} r1, r2, r3;
//struct rectangle r1, r2, r3;
int main()
{
	struct rectangle r1={10, 5};
	
	r1.length = 20;
	r1.breadth = 18;
	
	cout<<sizeof(r1)<<endl;
	cout<<r1.length<<endl;
	cout<<r1.breadth<<endl;
	return 0;
}
