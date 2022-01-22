#include<stdio.h>

void DisplayFactors(int);

int main()
{
	int iNo = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iNo);
	
	DisplayFactors(iNo);  //Function call
	
	return 0;
}

void DisplayFactors(int iValue)
{
	//logic
	int iCnt = 0;
	
	if(iValue < 0)
	{
		iValue = -iValue;
	}
	
	for(iCnt = 1; iCnt < = (iValue/2); iCnt++)	//O(N/2)
	{
		if(iValue % iCnt == 0) //iCnt is a factor
		{
			printf("%d\n",iCnt);
		}
	}
	
}



