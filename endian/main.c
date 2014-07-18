#include <stdio.h>

void get_endian(void)
{
	int i = 0x01;
	if(*(char*)(&i)>0)
	{
		printf("little endian \n");
	}
	else
	{
		printf("big endian \n");
	}
}

int main(int argc,char** argv)
{
	get_endian();
	return 0;
}

