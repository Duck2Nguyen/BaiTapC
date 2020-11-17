#include <stdio.h>
#include <math.h>

float luyThua(double n, int k) {
    int pow = 1;
    for (int i = 1; i <= k; i++)
        pow *= n;
    return (float) pow;
}

int main()
{	
	char c;
	double sothuc;
    double saiso;
    double laithang;
    double mu;

    
	printf("Menu \n");
	printf("N. Nhap Lieu \n");
	printf("S. Sin X \n");
	printf("C. Can Bac Hai \n");
	printf("E. E Mu X \n");
	printf("T. Thoat \n\n");	
    do{
        printf("Lua chon cua ban: ");
        getchar(c);
        switch(c){
            case 'N':
                printf("Nhap vao so thuc duong: \n");
                scanf("%lf",&sothuc);
                printf("Nhap vao sai so: \n");
                scanf("%lf",&saiso);
            case 'S':
                printf("Sin cua X la: %lf",sin(sothuc));
                break;
            case 'C':
                printf("Can bac hai cua X la: %lf \n",sqrt(sothuc);
                break;
            case 'E':	
                mu =luyThua(2.72,sothuc);
                printf("E mu X la: %lf\n",mu);
                break;		
            case 'T':	
                printf("Bye.\n");
                break;		
            default:
                printf("Errol! \n");
                break;
        }        
    }while (c!='T');
    return 0;
}

