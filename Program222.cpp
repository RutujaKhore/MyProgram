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
	char x = '\0',y = '\0';
	
	cout<<"Enter first number\n";
	cin>>x;
	
	cout<<"Enter second number\n";
	cin>>y;
	
	Swap(&x,&y);
	
	cout<<"value of x becomes :"<<x<<"\n";
	cout<<"value of y becomes :"<<y<<"\n";
	
	return 0;
}