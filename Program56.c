//Input: 6
//iCnt:1 2 3 4 4 5 6
//Output: a b c d e f

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	char ch = '\0';	//97
	
	for(iCnt = 1, ch='a';iCnt<=iNo;iCnt++,ch++)
	{
		printf("%c\t",ch);
		
	}
	printf("\n");
}
int main()
{
	int iValue = 0;
	
	printf("enter number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;

}