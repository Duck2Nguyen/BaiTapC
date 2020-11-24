#include <stdio.h>
#include <math.h>
//#include <stdlib.h>

//float luyThua(double n, int k) {
//    int pow = 1;
//    int j;
//    for (j = 1; j <= k; j++)
//        pow *= n;
//    return (float) pow;
//}
//
//int giaiThua(int k) {
//    int pow = 1;
//    int j;
//    for (j = 1; j <= k; j++)
//        pow=pow*j;
//    return (int)pow;
//}

float tinhsin(double a,double b){
	
//	luy thua
	float luyThua(double n, int k) {
	    int pow = 1;
	    int j;
	    for (j = 1; j <= k; j++)
	        pow *= n;
	    return (float) pow;
	}
	
//	giai thua
	int giaiThua(int k) {
	    int pow = 1;
	    int j;
	    for (j = 1; j <= k; j++)
	        pow=pow*j;
	    return (int)pow;
	}

// ham chinh	
	float lastsinx;
	float sincuax=0;
	float sintongx=0;
	int i=0;
	int j;
	int e;
//	printf("luy thua: %lf \n",luyThua(-1,i));
//	printf("gia tri i:%d",2i+1);
//	printf("giai thua: %d \n",giaiThua(2i+1));
//	printf("luy thua: %lf \n",luyThua(a,2i+1));
	do
	{
	lastsinx = sintongx;
//	printf("gia tri i:%d \n",i);
//	printf("sin x: %lf \n",sincuax);
//	printf("lastsin x: %lf \n",lastsinx);
//	printf("gia tri pow :%d \n",pow(-1.0,i));
//	printf("gia tri pow :%d \n",pow(a,2i+1));
//	printf("gia tri giaithua :%d \n",giaiThua(2i+1));	
//	sincuax = sincuax + (pow(-1,i)/giaiThua(2i+1))*pow(a,2i+1);
	
	if (i % 2 == 1)
        sincuax=sincuax*(-1);
    b=2i+1;
	for(j = 1; j<=e; j++){
		sincuax=sincuax*a/j;
	}
	
	sintongx=sintongx + sincuax;
	
	printf("sincua x: %lf \n",sincuax);
	printf("sintong x: %lf \n",sintongx);	
	i=i+1;
	} while (b <= fabs(sintongx - lastsinx));
	return (float) sintongx;	
}


int main()
{
	double a;
	double b;
	int c;
	
	printf("Menu \n");
	printf("1. Nhap gia tri \n");
	printf("2. Sin X \n");
	printf("3. Can Bac Hai \n");
	printf("4. E Mu X \n");
	printf("5. Thoat \n\n");	
    do{
        printf("Lua chon cua ban: ");
        scanf("%d",&c);
        switch(c){
            case 1:
                printf("Nhap vao gia tri cua x:");
                scanf("%lf",&a);
                printf("Nhap vao sai so:");
                scanf("%lf",&b);
                break;
            case 2:
                printf("Sin cua X la: %lf",tinhsin(a,b));
                break;
//            case 3:
//                printf("Can bac hai cua X la: %lf \n",sqrt(sothuc);
//                break;
//            case 4:	
//                mu =luyThua(2.72,sothuc);
//                printf("E mu X la: %lf\n",mu);
//                break;		
            case 5:	
                printf("Bye.\n");
                break;		
            default:
                printf("Errol! \n");
                break;
        }        
    }while (c!=5);
    
    return 0;
}

