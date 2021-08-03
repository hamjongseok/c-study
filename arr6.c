#include <stdio.h>

int main(void)
{
	int a,b,c;
	int arr[10] ={ 0, };
	int res;
	int rest;

	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);

	res = a*b*c;
	
	while(res > 0)
	{
		rest = res % 10;
		res /= 10;
		arr[rest]++;
	}

	int i = 0;

	while(i < 10)
	{
		printf("%d\n",arr[i]);
		i++;

	}
	return(0);
}
