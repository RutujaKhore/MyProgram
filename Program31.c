// Header file inclusion
#include<stdio.h>

// Fubnction declration
int CountDigit(int);

// Entry point function
int main()
{
	int iValue = 0,iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
    iRet = CountDigit(iValue);  // Function call
	printf("Number of digits are :%d\n",iRet);
    
    return 0;
}

// Function defination 
int CountDigit(int iNo)
{
 
 int iDigit = 0,iCnt = 0;
 if(iNo > 0)		//Input updator
 {
	 iNo = -iNo;
 }

	
	while(iNo>0)
	{
		iDigit = iNo % 10;      
		iCnt++;
		iNo = iNo/10;
	}
	
	return iCnt;
 
	
 }


    
    
