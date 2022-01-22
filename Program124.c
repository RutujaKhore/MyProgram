#include<stdio.h>

bool CheckPallindrome(char *str)
{
	char *start = NULL;
	char *end = NULL;
	bool flag = true;
	start = str;
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
	
}

	

