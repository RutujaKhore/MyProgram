#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>

int main()
{
	
	int fd = 0;
	char Data[11]={'\0'};
	
	fd = open("Demo.txt",O_RDWR);
	
	
	read(fd,		//Kashatun read karaycha tyacha fd
		  Data,		//Kashat read karaycha tyacha array
		  5);	
printf("Data is : %s\n",Data);		  //kiti lihaycha tyachi size
	//write(1,Data,5);
	
	close(fd); 		//ji file close karaychi tichi fd
	
	return 0;
}