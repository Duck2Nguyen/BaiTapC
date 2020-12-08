#include <stdio.h>

void lefttoright(int a[],int size,int off){
	int b[size];
	off=off;
	int i,j,stt;
	for(i=0;i<size-off;i++){
		b[i+off]=a[i];
	}
	for(j=0;j<off;j++){
		b[j]=a[size-off+j];
	}
	for(stt=0;stt<size;stt++){
		printf("%d \t",b[stt]);
	}
}

void righttoleft(int a[],int size,int off){
	int b[size];
	off=off;
	int i,j,stt;
	for(i=0;i<size-off;i++){
		b[i]=a[size-off-1-i];
	}
	for(j=0;j<off;j++){
		b[size-1-j]=a[size-off+j];
	}
	for(stt=0;stt<size;stt++){
		printf("%d \t",b[stt]);
	}
}


int main()
{
	int num;
	int size;
	int i;
	int j;
	
	do{
		printf("Nhap vao size of Array:");
		scanf("%d",&size);
		if(size<=0){
			printf("Error!!\n");
		}		
	}while(size<=0);

	
	int a[size];
	for(i=0;i<size;i++){
		printf("Nhap vao phan tu thu %d:",i+1);
		scanf("%d",&j);
		a[i]=j;
	}
	printf("Mang: ");
	for(i=0;i<size;i++){
		printf("%d \t",a[i]);
	}	
//	int a[11]={1,2,4,5,6,5,8,6,9,11,12};
	do{
		printf("\nNhap vao offset(0=< offset< size): ");
		scanf("%d",&num);	
		if(num>=size || num <0)	{
			printf("Error!! \n");	
		}
	}while(num>=size || num <0);

	printf("Left to Right: \t");
	lefttoright(a,size,num);
	printf("\n");
	printf("Right to Left: \t");
	righttoleft(a,size,num);
    return 0;
}

