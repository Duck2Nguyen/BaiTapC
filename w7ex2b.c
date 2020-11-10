#include <stdio.h>
 
int main(){
	int i,j;
    for(i = 1; i <= 10;i++){
        printf("\n \tBANG NHAN %d\n", i);
        for(j = 0; j < 10; j++){
            printf("\t%d x %d = %d\n", i, j, i*j);
        }
    }
}
