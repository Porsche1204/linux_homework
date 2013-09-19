void ToUpper(char *str)
void ToUpper(char *str)
{
	while(*str)
	{
		if(islower(*str))
			*str = toupper(*str);
		str++;
	}
}


