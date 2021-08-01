#include <stdio.h>
#include <math.h>

int main(void)
{ 
  int demical = 0;
  int a[4] = {1,1,0,1};
  int i = 0;
  int position = 0;


  while(i < 4)
{
	a[position] = pow(2 , i);

	i++;
	position++;

}
  int sum = 0;
  int position1 = 0;

	while(1)
{
	sum += a[position1];
	
	position++;

	if(sum == 13)
		break;

}

	printf("%d\n",sum);

 return(0);
}
