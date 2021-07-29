#include <stdio.h>

int main(void)
{
	int N;
	int one;
	int ten;
	int res;
	int digit;
	int count = 0;
	
	scanf("%d",&N);
	digit = N;
	
	while(1)
{	
	ten = digit / 10;
	one = digit % 10;
	res = (ten + one) % 10;
	digit = (one * 10) + res;
	
	count++;
	
	if(digit == N)
	 break;
	
}
	printf("%d\n",count);

	return(0);
}
