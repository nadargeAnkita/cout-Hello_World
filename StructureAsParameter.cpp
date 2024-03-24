//=============CALL BY VALUE============//


//#include<iostream>
//#include<stdio.h>
//#include<stdlib.h>
//using namespace std;
//
//struct rectangle
//{
//	int len;
//	int bred;
//};
//void fun(struct rectangle r)
//{
//	r.len=20;
//	cout<<"Length:"<<r.len<<endl;
//	cout<<"Breadth:"<<r.bred<<endl;
//}
//int main()
//{
//	rectangle r={10, 5};
//	fun(r);
//	cout<<"Length:"<<r.len<<endl;
//	cout<<"Breadth:"<<r.bred<<endl;
//	
//	return 0;
//}


// ============CALL BY ADDRESS=========//

//#include<iostream>
//#include<stdio.h>
//#include<stdlib.h>
//using namespace std;
//
//struct rectangle
//{
//	int len;
//	int bred;
//};
//void fun(struct rectangle *p)
//{
//	p->len=20;
//	cout<<"Length:"<<p->len<<endl;
//	cout<<"Breadth:"<<p->bred<<endl;
//}
//int main()
//{
//	rectangle r={10, 5};
//	fun(&r);
//	cout<<"Length:"<<r.len<<endl;
//	cout<<"Breadth:"<<r.bred<<endl;
//	
//	return 0;
//}


//================================================//
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
struct rectangle{
	int len;
	int bred;
};

struct rectangle *fun()
{
	struct rectangle *p;
	p=new rectangle;
	p->len=15;
	p->bred=7;
	return p;
}

int main()
{
	struct rectangle *ptr=fun();
	cout<<"Length:"<<ptr->len<<endl<<"Breadth:"<<ptr->bred<<endl;
	
	return 0;
}
