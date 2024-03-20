#include<iostream>
using namespace std;
class student
{          public:
	char name[20],branch[10];
	int rollno,age;
	 void getInputDetails()
	 {        cout<<"Enter your name:"<<endl;
	 	cin>>name;
	 	cout<<"Enter your branch name:"<<endl;
	 	cin>>branch;
	 	cout<<"Enter your roll no:"<<endl;
	 	cin>>rollno;
	 	cout<<"Enter your age:"<<endl;
	 	cin>>age;
	 }
	 void outputDetail()
	 {        cout<<"\n Name:"<<name;
	 	cout<<"\n Branch:"<<branch;
		cout<<"\n Roll no:"<<rollno;
		cout<<"\n Age:"<<age;
	 }    };
int main()
{         student j;
	student *ptr;
	ptr=&j;
	ptr->getInputDetails();
	ptr->outputDetail();
	return 0;   }

