#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<string.h>

char *cmd[4];
char* GetCmd(char *argv)
{
	char *temp;
	char *delim = ":@";
	int num = 0;
	temp = strtok(argv, delim);
	cmd[num++] = temp;
	while((temp = strtok(NULL, delim)))
	{
		cmd[num] = temp;
//		printf("this is %d :%s\n", num, cmd[num]);
		num++;
	}
//	printf("this argv: %s\n", cmd[0]);
	printf("\n");
	return argv;
}

int test()
{
	int i = 0;
	for(; i<4; i++)
		printf("cmd[%d]:%s \n", i, cmd[i]);
}

int main(int argc, char *argv[])
{
	if(argc != 2 || argc > 2)
	{
		printf("Error! The format is not right! \n");
		exit(EXIT_FAILURE);
	}
	else
	{
		GetCmd(argv[1]);
	}
	test();
	return 0;
}
