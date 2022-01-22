// Header file inclusion
#include<stdio.h>

// Fubnction declration
int Display(int);

// Entry point function
int main()
{
	int iValue = 0,iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
    iRet = Display(iValue);  // Function call
	printf("Addition of digits is :%d\n",iRet);
    
    return 0;
}

// Function defination 
int Display(int iNo)
{
 
 int iDigit = 0,iSum = 0;
 if(iNo > o)		//Input updator
 {
	 iNo = -iNo;
 }

	
	while(iNo>0)
	{
		iDigit = iNo % 10;      
		iSum = iSum + iDigit;
		iNo = iNo/10;
	}
	
	return iSum;
 
	
 }


    
    
