
//problems on pattern printing

#include<iostream>
using namespace std;

void DisplayI()
{
	int iCnt = 1;
	
	while(iCnt<=4)
	{
		cout<<"Marvrllous\n";
		iCnt++;
	}
}
void DisplayR(int iNo)
{
	static int iCnt = 1;
	
	if(iCnt<=iNo)
	{
		cout<<"Marvellous\n";
		iCnt++;
		DisplayR(iNo);
	}
}


int main()
{
	int i = 5;
	
	//DisplayI(i);
	DisplayR(i);
	
	return 0;
}