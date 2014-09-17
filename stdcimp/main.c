#include <stdio.h>
#include <assert.h>

const char* a = "where there is a world";
char* b = "world";

int strlen_imp(const char* str)
{
	assert(str!=NULL);
	int len=0;	

	while(*str!='\0')
	{
		str++;
		len++;
	}
	return len;
}

char* strcpy_imp(char* dest,const char* src)
{
	assert(dest!=NULL && src!=NULL);
	if(dest==src)
			return dest;

	char* addr = dest;

	while((*dest++=*src++)!='\0');
	return addr;
}

int strcmp_imp(const char* str1,const char* str2)
{
	assert(str1!=NULL && str2!=NULL);

	while(*str1 && *str2 && *str1==*str2)
	{
		str1++;
		str2++;
	}

	return *str1-*str2;
}

int main()
{
	printf("str %s len is %d\n",a,strlen_imp(a));

	char p[20] = {0};
	
	strcpy_imp(p,"hello");
	printf("p %s\n",p);

	printf("strcmp a b is %d\n", strcmp_imp("abc","abcd"));

	return 0;
}

