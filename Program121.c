#include<stdio.h>

int Count(char *str)
{
	int iCnt = 0;
	if(str==NULL)
	{
		return -1;
	}
	if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
	{
		iCnt++;
	
	}
	str++;
	return iCnt;
}
	

int main()
{
	char Arr[30];
	int iRet = 0;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet = Count(Arr);
	
	printf("Number of vowels are:%d\n",iRet);
	
	
	return 0;

}

