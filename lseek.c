#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>

int main()
{
	
	int fd = 0;
	char Data[11]={'\0'};
	
	fd = open("Demo.txt",O_RDWR);
	
	//0 starting position
	//1 Current position
	//2 End og the file
	
	lseek(fd,4,0);
	read(fd,		//Kashatun read karaycha tyacha fd
		  Data,		//Kashat read karaycha tyacha array
		  5);		//kiti read karaycha ahe
printf("Data is : %s\n",Data);		  //kiti lihaycha tyachi size
	//write(1,Data,5);
	
	close(fd); 		//ji file close karaychi tichi fd
	
	return 0;
}