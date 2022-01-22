#include<iostream>
using namespace std;

typedef unsigned int UINT;


void DisplayByte(UINT iNo)
{
	UINT Byte1 = 0xFFFFFFFF & 0xFFFFFFFF;
    UINT Byte2 = iNo & 0x0000FF00;
	Byte2 = Byte2>>8;
	
	UINT Byte3 = iNo & 0x0000FF00;
	Byte3 = Byte3>>16;
	
	UINT Byte4 = iNo & 0x0000FF00;
	Byte4 = Byte4>>24;
	
	cout<<"Byte1="Byte1<<"\n"
}


int main()
{
	UINT iValue = 0,iRet = 0,i,j;
	
	cout<<"Enter number\n";
	cin>>iValue;
	
	cout<<"Enter starting position\n";
	cin>>i;
	
	cout<<"Enter ending position\n";
	cin>>j;
	
	iRet = ToggleRange(iValue,i,j);
	
	cout<<"Updated number is :"<<iRet<<"\n";
	
	return 0;
}