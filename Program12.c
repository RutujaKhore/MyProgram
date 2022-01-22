//Input : 3
//Output : 1 2 3


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
    
  for(i=1;i<=iValue;i++)
  {
	printf("%d\n",i);
  }
}