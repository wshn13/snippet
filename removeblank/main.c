#include <stdio.h>

void rmblank(char* str)
{
	if(!str)
		return ;
	char* f=str;
	char* r=str;

	while((*f=*r++,(*f)==' '?*f:*f++)!='\0');
}

int main()
{
	char str[]="askj ask jjj   bbb n ";
	rmblank(str);
	puts(str);
	return 0;
}
