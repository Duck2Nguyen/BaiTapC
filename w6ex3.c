#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{	
	int num=7,rnd;
	while(num!=0){

		printf("Nhap vao so co 6 chu so cua ban: ");
		scanf("%d",&num);
		printf("So ban chon la : %.6d \n",num);
		rnd = 1 + rand()%999999;		
		printf("Ket qua xo so la:%.6d \n",rnd);
		if(rnd==num){
			printf("Ban da trung giai dac biet 3 ty!!");		
		}
		else if(num-num/100000*100000==rnd-rnd/100000*100000){
			printf("Giai nhat (200 trieu) \n");
		}	
		else if(num-num/10000*10000==rnd-rnd/10000*10000){
			printf("Giai nhi (100 trieu) \n");
		}		
		else if(num-num/1000*1000==rnd-rnd/1000*1000){
			printf("Giai ba (10 trieu) \n");
		}
		else if(num-num/100*100==rnd-rnd/100*100){
			printf("Giai khuyen khich (500 nghin) \n");
		}
		else{
			printf("Chuc ban may man lan sau \n");
		}	
	}
	
    return 0;
}

