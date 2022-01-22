#include<iostream>
using namespace std;

//Specific function
void Swap(char *p,char *q)
{
	char temp;
	
	temp = *p;
	*p = *q;
	*q = temp;
}

//generic function
template<class T>
void SwapX( T *p,T *q)
{
	T temp;
	
	temp = *p;
	*p = *q;
	*q = temp;
}


int main()
{
	char x = 'A',y = 'B';
	Swap(&x,&y);
	
	cout<<"value of x becomes :"<<x<<"\n";
	cout<<"value of y becomes :"<<y<<"\n";
	
	int i = 11,j = 21;
	SwapX(&i,&j);
	
	cout<<"value of x becomes :"<<i<<"\n";
	cout<<"value of y becomes :"<<j<<"\n";
	return 0;
}