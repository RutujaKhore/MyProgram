
//Time complexity = O(N)
// Header file inclusion
#include<stdio.h>

// Fubnction declration
int CountEven(int);

// Entry point function
int main()
{
	int iValue = 0,iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
    iRet = CountEven(iValue);  // Function call
	printf("Number of even digits are :%d\n",iRet);
    
    return 0;
}

// Function defination 
int CountEven(int iNo)
{
 
 int iCnt= 0,iDigit=0;
 if(iNo == 0)		//Input updator
 {
	return 1;
 }
  if(iNo < 0)
  {
	  iNo = -iNo;
  }
  while(iNo>0)
  {
	  iDigit = iNo%10;
	  if((iDigit%2)==0)
	  {
		  iCnt++;
	  }
	  iNo = iNo/10;
	  
	  
  }
	return iCnt;
 
	
 }


    
    
