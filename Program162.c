#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd = 0,iRet = 0;
	char Fname[30];
	char Data[5];
	
	
	printf("Enter filename\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;   //Return to OS
	}
	else
	{
		printf("File successfully open with FD : %d\n",fd);
	}
	
	iRet = write(fd,Data,5);
	
	printf("%d bytes gets successfully read from file\n",iRet);
	
	printf("Data from the file : %s\n",Data);
	
	return 0;
}