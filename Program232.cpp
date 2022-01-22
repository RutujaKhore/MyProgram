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
void DisplayR()
{
	static int iCnt = 1;
	if(iCnt<=4)
	{
		cout<<"Marvrllous\n";
		iCnt++;
		DisplayR();
	}
}

int main()
{
	DisplayR();
	
	
	return 0;
}