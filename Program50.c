//Input: 5
//iCnt:1 2 3 4 4 5
//Output: * # * # * #

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 1;iCnt<=iNo; iCnt++)
	{
		if((iCnt%2)==0)
		{
			printf("#\t");
		}
		else
		{
			printf("*\t");
		}
	}

}
int main()
{
	int iValue = 0;
	
	printf("enter number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;

}