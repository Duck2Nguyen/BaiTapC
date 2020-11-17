#include <stdio.h>

int hammu(int a, int b){
	int pow= 1;
	int i;
	for(i=0;i<b;i++){
		pow=pow*a;
	}
	return pow;
}

int henhiphan(int a){
	int hehai=0;
	int dem=-1;
	int b;
	do{
		b=0;
		int c=0;
		b=a/2;
		c=a%2;		
		a=b;
		dem++;
		if(c==1){
		hehai=hehai+hammu(10,dem);	
		}		
	}while(b!=0);
	return hehai;
}


int main()
{
	int  a;   
	printf("Chuyen doi co so \n");
	printf("Tac gia: HaiNguyen \n");
	printf("1. Nhap so(he 10) \n");
	printf("2. So o he nhi phan \n");
	printf("3. So o he thap luc \n");
	printf("4. So o he tam \n");
	printf("5. Thoat \n\n");
	
	do{		
		printf("Chon di ban:");
		scanf("%d",&a);
		int hemuoi;		
		switch(a){
	        case 1:
	            printf("Nhap vao so: ");
	            scanf("%d",&hemuoi);
	            break;
	        case 2:
	        	printf("So o he nhi phan la: %d \n",henhiphan(hemuoi));
	            break;
	        case 3:
	        	printf("Dang update code vui long quay lai sau");
	            break;
	        case 4:	
	        	printf("Dang update code vui long quay lai sau");
	            break;		
	        case 5:	
	            printf("Bye.\n");
	            break;			 
	        default :
	            printf("Errol! \n");
	            break;
		}  
	}while(a!=5 );
	
    return 0;
}


