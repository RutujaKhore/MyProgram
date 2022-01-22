#include<stdio.h>

int Power(int,int);

int main()
{
	
	int iValue1 = 0,iValue2=0,iRet=0;
	
	printf("Enter 1st number \n");
	scanf("%d",&iValue1);
	
	printf("Enter 2nd number \n");
	scanf("%d",&iValue2);
	
	iRet = Power(iValue1,iValue2);
	
	printf("Result is:%d\n",iRet);
	
	return 0;
}
//Poer(2,4);
int Power(int x,int y)		//O(N)
{
	int iMult = 1,iCnt = 0;
	
	for(iCnt=1;iCnt<=y;iCnt++)
	{
		iMult = iMult * x;
	}
	return iMult;
}