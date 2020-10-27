#include <stdio.h>

int main()
{	
	int pod,pad,sum;
	int costpod=148,costpad=288;
	printf("Ban muom mua bao nhieu IPOD:"); 
	scanf("%d",&pod);
	printf("Ban muom mua bao nhieu IPAD:"); 
	scanf("%d",&pad);
	sum=pod*costpod+pad*costpad;
	printf("SIEU THI TOPCARE- HOA DON THANH TOAN\n");
	printf("Ipod \t %dx148 =%d\n",pod,pod*costpod);
	printf("Ipad \t %dx288 =%d\n",pad,pad*costpad);
	printf("Net \t\t %d \n",sum);
	printf("Discount  %dx0.1 = %5.1f \n",sum,sum*0.1);
	printf("You pay:  %d-%5.1f=%5.1f",sum,sum*0.1,sum*0.9);
    return 0;
}

