#include <stdio.h>

int Reverse(int n){
    int reNum = n % 10; 
    n /= 10; 
    int numlast;
    while(n > 0){
        numlast = n % 10; 
        n /= 10; 
        reNum = reNum * 10 + numlast;
    }
    return reNum;
}
 
int main(){
    int num;
    printf("Nhap vao so nguyen: ");
    scanf("%d", &num);
    printf("\nReverse of the Number is: %d", Reverse(num));
    return 0;
}


