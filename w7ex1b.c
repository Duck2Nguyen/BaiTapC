#include <stdio.h>

int main()
{
	int h,i,j,e=0,a=1,b;
	printf("Nhap vao chieu cao: ");
	scanf("%d",&h);
	b=h-2;
	for (i=0;i<h;i++){
		for(e=0;e<=b;e++){
			printf(" ");
		}
		for(j=0;j<a;j++){
			printf("*");
		}
		printf("\n");
		a+=2;
		b=b-1;		
	}
	
	b=h-3;
	a=a-4;
	for (i=0;i<h;i++){
		for(e=0;e<=b-4;e++){
			printf(" ");
		}
		for(j=0;j<a;j++){
			printf("*");
		}
		printf("\n");
		a-=2;
		b=b+1;		
	}
    return 0;
}

