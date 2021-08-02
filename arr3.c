
 #include <stdio.h>
 #include <math.h> 
 
int main(void)
{
  int demical = 0;
  int a[4] = {1, 1, 0, 1};
  int i = 3;
  int position = 0;
 
   while(i >= 0) 
{
   a[position] *= pow(2 , i);
	
   printf("%d\n",a[position]);
    i--;
    position++;
 
}

    int sum = 0;
	int  position1 = 0;
	int  j = 0;
      while(j < 4 )
{
      sum += a[position1]; 
	  
	  j++; 
      position1++;
 
}
    printf("%d\n",sum);
 
    return(0);
}
