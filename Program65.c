//Input:irow=4,icol=4
//Output:

//# # # #
//* * * *
//# # # #
//* * * *

#include<stdio.h>

void Display(int iRow,int iCol)
{
	
	int i=0,j=0;
	
	
	for(i=1;i<=iRow;i++)	//Outer loop
	{
		for(j=1;j<=iCol;j++)	//Inner loop
		{
		
		if((i%2==0))
		{
			printf("#\t");
		}
		else
		{
			printf("*\t");
		}}
	printf("\n");
}}
int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter number of rows\n");
	scanf("%d",&iValue1);
	
	printf("Enter number of coluns\n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);	//Display(3,3);
	
	return 0;

}