#include<stdio.h>

//Input : 3
//output:3 2 1

//Input :7
//Output:7 6 5 4 3 2 1

void Display();    //Declaration

int main()
{
	int iNo = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iNo);
	
	Display(iNo);   //Display(3);
	
	return 0;
}
void Display(int iValue)
{
	int i = 0;
	for(i=iValue; i>=1; i--)
	{
		printf("%d\n",i);
	}




}