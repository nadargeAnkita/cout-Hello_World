#include<iostream>
using namespace std;
class employee
{
	public:
		int id;
		string name;
		float salary;
		employee(int id, string name, float salary)
		{
			this->id=id;
			this->name=name;
			this->salary=salary;
		}
		void display()
		{
			cout<<"id:"<<id<<"\t Name:"<<name<<"\t Salary:"<<salary<<endl;
		}
};
int main()
{
	employee E1= employee(32,"Ankita",26000);
	employee E2= employee(30,"Darshan",25000);
    E1.display();
    E2.display();
    return 0;
}

