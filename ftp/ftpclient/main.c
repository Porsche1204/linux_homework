#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<string.h>
#include"h/stringtool.h"
#include"h/readfile.h"

int main(int argc, char *argv[])
{
	char *cmd[4];
	if(argc != 2 || argc > 2)
	{
		printf("Error! The format is not right! \n");
		exit(EXIT_FAILURE);
	}
	GetCmd(argv[1], cmd);
//	printf("cmd[0] : %s", cmd[0]);
	readfile();
	return 0;
}
