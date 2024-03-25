#include<iostream>
using namespace std;

template<class t>
class arithmetic{
	private:
		t a;
		t b;
	public:
		arithmetic(t a, t b);
		t add();
		t sub();
};
template<class t>
arithmetic<t>::arithmetic(t a, t b)
{
	this->a=a;
	this->b=b;
}
template<class t>
t arithmetic<t>::add()
{
    t c;
	c=a+b;
	return c;
}
template<class t>
t arithmetic<t>::sub()
{
	t c;
	c=a-b;
	return c;
}


int main()
{
	arithmetic<int> ar(10, 5);
//	arithmetic<float> ar1(10.5, 5.5);
//	arithmetic<char> ar2('A', 'B');
	cout<<"Add:"<<ar.add()<<endl;
	cout<<"Sub:"<<ar.sub()<<endl;
	
	return 0;
}
