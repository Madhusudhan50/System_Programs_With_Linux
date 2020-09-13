/*
	Write a program which accept file name from user and open that file.
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(int argc, char *argv[]){

	int fd=0;
	char str[10];

	printf("Enter file name\n");
	scanf("%[^\n]%*c", str);

	fd=open(str,O_RDONLY);
	
	if(fd==-1)
	{
	  printf("Error : Unable to open file");
	  return -1;
	  close(fd);
	}
	printf("File gets succesfully opned with FD : %d\n",fd);
	
	close(fd);	
	
	return 0;
}


