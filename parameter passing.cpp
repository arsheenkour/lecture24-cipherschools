#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
	int c;
	c=*x;
	*x=*y;
	*y=c;
	cout<<"swapping is complete"<<endl;
}
int main()
{
int a,b;
a=5;
b=6;
swap(&a,&b);
cout<<"the vales are"<<a<<" "<<b<<endl;
}
#include<iostream>
using namespace std;
int main()
{
	int a[10];
	cout<<"the values for comparison"<<endl;
	cout<<"the value of a is: "<<a<<endl;
	cout<<"the avlue of address a[0] is"<<&a[0]<<endl;
	cout<<"the value of address a[1] is"<<&a[1]<<endl;
}

