#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>

int main()
{
	
	int fd = 0;
	char Data[11] = "Marvellous";
	
	fd = open("Demo.txt",O_RDONLY);
	//O_RDONLY Reading
	//O_WRONGLY Writing
	//O_RDWR Read and Write
	//O_Append
	
	write(fd,		//Kashat lihaycha tyacha fd
		  Data,		//Kay lihaycha to data
		  10);		//kiti lihaycha tyachi size
		  
	close(fd); 		//ji file close karaychi tichi fd
	
	return 0;
}