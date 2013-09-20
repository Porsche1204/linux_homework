#include<stdio.h>
#include"../h/readfile.h"
int readfile()
{
	FILE *fp;
	fp = fopen("txtfile", "r");
	char ch;
	ch = fgetc(fp);
	while(ch != EOF)
	{
		printf("%c", ch);
		ch = fgetc(fp);
	}
	fclose(fp);
}
