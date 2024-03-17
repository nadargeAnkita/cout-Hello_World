#include<iostream>
using namespace std;

class rectangle{
	private:
		int len;
		int bread;
	public:
		rectangle()
		{
			len=0;
			bread=0;
		}
		rectangle(int l, int b)
		{
			len=l;
			bread=b;
		}
		int area()
		{
			return len*bread;
		}
		int perimeter()
		{
			return 2*(len+bread);
		}
		void setlen(int l)
		{
			len=l;
		}
		void setbread(int b)
		{
			bread=b;
		}
		int getlen(int l)
		{
			return len;
		}
		int getbread(int b)
		{
			return bread;
		}
		~rectangle()
		{
			cout<<"Destructor";
		}
};
int main()
{
	rectangle r(10, 5);
	cout<<"Area="<<r.area()<<endl;
	cout<<"Perimeter="<<r.perimeter()<<endl;
	
	
	return 0;
}
