#include <stdio.h>
#include <math.h>

float luyThua(double n, int k) {
    int pow = 1;
    int i;
    for (i = 1; i <= k; i++)
        pow *= n;
    return (float) pow;
}

float menu(char c){
	double sothuc;
    double saiso;
    double laithang;
    double mu;
    
	switch(c){
        case 'N':
            printf("Nhap vao so thuc duong:");
            scanf("%lf",&sothuc);
            printf("%lf",sothuc);
            printf("Nhap vao sai so:");
            scanf("%lf",&saiso);
            break;
        case 'S':
        	 printf("%lf",sothuc);
            printf("Sin cua X la: %lf \n",sin(sothuc));
            break;
        case 'C':
        	 printf("%lf",sothuc);
            printf("Can bac hai cua X la: %lf \n",sqrt(sothuc));
            break;
        case 'E':	
         printf("%lf",sothuc);
            mu =luyThua(2.72,sothuc);
            printf("E mu X la: %lf\n",mu);
            break;		
        case 'T':	
            printf("Bye.\n");
            break;			 
        default :
            printf("Errol! \n");
            break;
	}  
	return 0; 
}

int main()
{	
	char c;   
	printf("Menu \n");
	printf("N. Nhap Lieu \n");
	printf("S. Sin X \n");
	printf("C. Can Bac Hai \n");
	printf("E. E Mu X \n");
	printf("T. Thoat \n\n");	

	do{
	    printf("Lua chon cua ban: ");
        scanf("%c",&c); 
	    if(c!='\n') {
		menu(c); 	    	
		}
	}while(c!='T' && c!='\\n' );
    return 0;
}


