//Input : 7
//Output : 1 2 3 4 5 6 7


#include<stdio.h>

void Display(int); //Declaration
int main()
{
	int iNo=0;
	
	printf("Enter number\n");
	scanf("%d",&iNo);
	
	Display(iNo); //Display(3)
	
	return 0; //Return to OS
}
void Display(int iValue) //Defination
{
	int i=0;
	
	if(iValue==0)
	{
		printf("Your entered number is 0\n");
		return;
	}
	if(iValue < 0)    //Input Updater
	{
		iValue = -iValue;
	}
  
  for(i=1;i<=iValue;i++)
  {
	printf("%d\n",i);
  }
}