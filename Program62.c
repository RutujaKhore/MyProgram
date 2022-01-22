//Input:3 * 3
//Output:
//1 2 3 
//1 2 3 
//1 2 3 

#include<stdio.h>

void Display(int iRow,int iCol)
{
	
	int i=0,j=0;
	
	for(i=1;i<=iRow;i++)	//Outer loop
	{
		for(j=1;j<=iCol;j++)	//Inner loop
		{
			printf("%d\t",j);
		}	
		
	printf("\n");
}}
int main()
{
	int iValue1=0,iValue2;
	
	printf("Enter number of rows\n");
	scanf("%d",&iValue1);
	
	printf("Enter number of coluns\n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);	//Display(3,3);
	
	return 0;

}