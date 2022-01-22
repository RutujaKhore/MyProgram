#include<iostream>
using namespace std;

typedef unsigned int UINT;

/*
	op1 op2 &  |  ^
	1    0  0  1  1
	0	 1  0  1  1
	1    1  1  1  0
	0    0  0  0  0
*/

//iNo 0000 0000 1110 0100 1111 0100 1011 1010
//iPos  6
//iRet 0000 0000 1110 0100 1111 0100 1011 1010

UINT ToggleNibble(UINT iNo)
{
	int iMask = 0xF000000F;
	
	UINT iResult = 0;
	
	iResult = iNo ^ iMask;
	
	return iResult;
}


int main()
{
	UINT iValue = 0,iRet = 0;
	
	cout<<"Enter number\n";
	cin>>iValue;
	
	iRet = ToggleNibble(iValue);
	
	cout<<"Updated number is :"<<iRet<<"\n";
	
	return 0;
}