#include<stdio.h>

bool CheckPallindrome(char *str)
{
	char *end = NULL;
	bool flag = true;
	end = str;
	
	while(*end!='\0')
	{
		end++;
	}
	end--;
	
	while(start < end)
	{
		if(*start != *end)
		{
			flag = false;
			break;
		}
		start++;
		end--;
	}
	return flag;
}
	if(start < end)
	{
		return false;
	}
	else
	{
		return true;
	}
}


int main()
{
	char Arr[30];
	bool bRet = false;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter the character\n");
	scanf("%c",&cValue);
	
	bRet = CheckPallindrome(Arr);
	
	printf("pallindrome is:%d\n",bRet);
	
	
	return 0;

}
