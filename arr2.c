#include <stdio.h>


int main(void)
{
	int numArr[5];
	int temp;
	int i = 0;
	int j = 0;
	
	scanf("%d %d %d %d %d",&numArr[0],&numArr[1],&numArr[2],&numArr[3],&numArr[4]);
	
	while(i < 5)
	{   
		int j = 1;
		while(j < 5)
		{
			if(numArr[j - 1] > numArr[j])
			{
				temp = numArr[j - 1];
				numArr[j - 1] = numArr[j];
				numArr[j] = temp;
			}
			j++;
		}
		i++;
	}
	
	printf("%d\n",numArr[0]);
	return(0);
}
