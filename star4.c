#include <stdio.h>

int main(){

	int n;
	scanf("%d",&n);

        for(int i = 0; i < n; i++){
                for(int j = i;  j <= n;  j++){
                printf(" ");
        }
  		for(int k = 0; k <= (i*2); k++)
                printf("*");
                printf("\n");

	}
                return(0);
}


