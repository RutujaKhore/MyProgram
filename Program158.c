#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>


int main()
{
	int fd = 0;
	char Fname[30];
	
	printf("Enter filename\n");
	scanf("%s",Fname);
	
	fd = creat("Marvellous.txt",0777);
	
	if(fd==-1)
	{
		printf("Unable to create file\n");
	}
	else
	{
		printf("File successfully created\n");
		
	}
	return 0;
}