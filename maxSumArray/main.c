#include <stdio.h>
#include <stdlib.h>

int a[6] = {2,-1,-4,5,-3,7};
int b[6] = {-2,-1,-4,-5,-3,-7};

int get_max_sum(int x[],int s)
{
	if(s<=0)
			exit(-1);

	int max = x[0];
	int sum = 0;

	int i=0;
	for(i=0;i < s;i++)
	{
		if(sum<0)
			sum = x[i];
		else
			sum = sum+x[i];
		if(sum>max)
			max=sum;		
	}
	return max;
}

int main()
{
	printf("the max sum a is  %d\n",get_max_sum(a,6));
	printf("the max sum b is  %d\n",get_max_sum(b,6));
	return 0;
}

