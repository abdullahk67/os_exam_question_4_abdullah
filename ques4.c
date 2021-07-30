#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

//Sending a file with message 'm' to the receiver

int main()
{
	int k;  // for storing the value of open()

	mkfifo("Ques4", S_IRUSR | S_IWUSR);  
	// mkfifo is naming pipe
	// where as S_IRUSR and S_IWUSR are read and write mode
	
	k = open("Ques4", O_WRONLY); // creating a file with write only mode

	write(k, "m\n", 2); //writing a data on file
	close(k);  // closing a file
	return 0;
}
