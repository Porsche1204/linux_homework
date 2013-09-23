#include<stdio.h>
#include"../h/stringtool.h"
void GetCmd(char *argv, char *cmd[])
{
	char *temp;
	char *delim = "[]";
	int num = 0;
	temp = strtok(argv, delim);
	cmd[num++] = temp;
	while((temp = strtok(NULL, delim)))
	{
		cmd[num] = temp;
		num++;
	}
	printf("\n");
}

