//Input:
//Output:

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 1; iCnt<=iNo; iCnt++)
	{
		printf("*\t");
	}
	
	for(iCnt = iNo;iCnt>=1; iCnt--)
	{
		printf("%d\t");
	}

}
int main()
{
	int iValue = 0;
	
	printf("Enter nmuber\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}