//#include<iostream>
//using namespace std;
//
//add(int a, int b)
//{
//	int c;
//	c = a+b;
//    a++;
//    cout<<a<<endl;
//    
//	return 0;
//}
//int main()
//{
//	int num1=10, num2=20, sum;
//	sum=add(num1, num2);
////	cout<<num1<<endl;
//    cout<<sum;
//	return 0;
//}
//



//============= CALL BY ADDRESS==============//

//#include<iostream>
//using namespace std;
//
//void swap(int *x, int *y)
//{
//	int temp;
//	temp=*x;
//	*x=*y;
//	*y=temp;
//}
//int main()
//{
//	int num1=10, num2=20;
//	
//	swap(num1, num2);
//	cout<<"First number:"<<num1<<endl;
//	cout<<"Second number:"<<num2<<endl;
//	
//	return 0;
//}


//========== CALL BY REFERENCE=======//

#include<iostream>
using namespace std;

void swap(int &x, int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
int main()
{
	int num1=10, num2=20;
	
	swap(num1, num2);
	cout<<"First number:"<<num1<<endl;
	cout<<"Second number:"<<num2<<endl;
	
	return 0;
}
