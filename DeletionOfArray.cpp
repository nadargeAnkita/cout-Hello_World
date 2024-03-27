#include<iostream>
using namespace std;

struct Array{
	int A[10];
	int size;
	int length;
};

void display(struct Array arr)
{
	int i; 
	cout<<"Elements are:"<<endl;
	for(i=0; i<arr.length; i++)
	cout<<arr.A[i];
}

void append(struct Array *arr, int x)
{
	if(arr->length<arr->size)
	arr->A[arr->length++]=x;
}

int Delete(struct Array *arr, int index)
{
	int x=0;
	int i;
	if(index>=0 && index<arr->length)
	{
		x=arr->A[index];
		for(i=index; i<arr->length-1;i++)
		arr->A[i]=arr->A[i+1];
		arr->length--;
		return x;
	}
	
	return 0;
}
int main()
{
	struct Array arr={{2,3,4,5,6},10,5};
	
	cout<<Delete(&arr, 0)<<endl;
	display(arr);
	
	return 0;

}
