#include <stdio.h>
int main()
{	
	int i,j;
	for(i=1;i<=255;i=i+16){
		for(j=i;j<i+16;j++){
			printf("%d %c ",j,j);
		}	
		printf("\n");	
	}

    return 0;
}

