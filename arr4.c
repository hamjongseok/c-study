#include <stdio.h>

int arr[1000000] ={ 0 ,};

int main(void)
{
	int N;
	int min;
	int max;
	int i = 0;
	scanf("%d",&N);  
	
	while(i < N) //n번의 값만 입력받을수 있다.
	{
			scanf("%d",&arr[i]); //0부터의 값을 입력받기위해 
			i++;
	}	
	min = arr[0];
	max = arr[0];
	int j = 0;

	while(j < N)
{
	if(min > arr[j])
		min = arr[j];

	if(max < arr[j])
		max = arr[j];
		j++;
}

printf("%d %d\n",min,max);
	return(0);
}
