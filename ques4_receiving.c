#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define SIZE 64

//Receiving the message 'm' from the process 1 i.e sender


int main()
{
	int k;   // for storing the value of open()
	unsigned char buff[SIZE];   // storing the message

	mkfifo("Ques4", S_IRUSR | S_IWUSR);
	
	k = open("Ques4", O_RDONLY); //opening a file Ques4 in read only mode
	read(k, buff,64); // reading a file from k and storing a message in buff 
	printf("Process 2 receive meassage : %s from Process 1\n", buff);
	printf("Length of meassage is %ld \n", strlen(buff) );  //printing the length of message
	close(k);
	return 0;
}


