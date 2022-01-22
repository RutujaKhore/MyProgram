#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

using namespace std;

class MarvellousFile
{
	char Fname[30];
	int fd;
	
	MarvellousFile(char*Name)
	{
		strcpy(Fname,Name);
		fd = open(Fname,O_RDWR);
	}
	
	~MarvellousFile()
	{
		close(fd);
	}
	
	void CountCapital()
	{
		int iRet = 0,iCnt = 0;
		char Buffer[10];
		lseek(fd,0,0);
		
		while((iRet=read(fd,Buffer,10))!=0)
		{
			for(i=0;i<iRet;i++)
			{
				if((Buffer[i]>='A')&&(Buffer[i]<='Z'))
				{
					iCnt++;
				}
			}
		}
		return iCnt;
	}
};

int main()
{
	char Name[30];
	cout<<"Enter name of file\n";
	cin>>Name;
	MarvellousFile obj(Name);
	
	obj.Display();
	iRet = obj.CountCapital();
	cout<<"Capital letters are :"<<iRet"\n";
	
	iRet = obj.CountSmall();
	cout<<"Small letters are :"<<iRet"\n";
	
	return 0;
}