#include <stdio.h>

typedef struct{
	int tuso;
	int mauso;
}inputPhanSo; 

void inputArray(inputPhanSo Array[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("\nNhap vao tu so cua phan so thu %d:",i+1);
		scanf("%d",&Array[i].tuso);
		printf("Nhap vao mau so cua phan so thu %d:",i+1);
		scanf("%d",&Array[i].mauso);		
	}
}

void printContent(inputPhanSo Array[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("\nPhan so thu %d :%d/%d",i+1,Array[i].tuso,Array[i].mauso);
	}	
}

void inverseArray(inputPhanSo Array[],int size){
	int i;
	int tmp;
	for(i=0;i<size;i++){
		tmp=Array[i].tuso;
		Array[i].tuso=Array[i].mauso;
		Array[i].mauso=tmp;
	}
}
void sosanh(){
	inputPhanSo a[2];
	printf("Nhap vao tu so cua phan so thu nhat:");
	scanf("%d",&a[0].tuso);
	printf("Nhap vao mau so cua phan so thu nhat:");
	scanf("%d",&a[0].mauso);	
	printf("Nhap vao tu so cua phan so thu hai:");
	scanf("%d",&a[1].tuso);
	printf("Nhap vao mau so cua phan so thu hai:");
	scanf("%d",&a[1].mauso);

	float ketqua1= (float)a[0].tuso/a[0].mauso;
	float ketqua2= (float)a[1].tuso/a[1].mauso;

	
	if(ketqua1<ketqua2){
		printf("%d/%d < %d/%d \n",a[0].tuso,a[0].mauso,a[1].tuso,a[1].mauso);
	}
	else if(ketqua1>ketqua2){
		printf("%d/%d > %d/%d \n",a[0].tuso,a[0].mauso,a[1].tuso,a[1].mauso);
	}	
}

int main()
{
	int i;
	int size=10;	
	int c; 
	printf("1.Input Aray + Print + Inverse \n");
	printf("2.Compare two fraction \n");
	printf("3.Thoat\n")	;
	
	do{
		printf("Lua chon cua ban:");
		scanf("%d",&c);
		switch(c){	
			case 1:		
				
				printf("Nhap vao kich co cua mang:");
				scanf("%d",&size);
				
 				inputPhanSo Array[size];  	  // Khai bao Array
				
				inputArray (Array,size);	// Nhap vao Array
				
				printContent(Array,size);	// In ra content
				
				inverseArray(Array,size);	// Inverse 
				printf("\n\nInverse All Fraction in Array:");
				printContent(Array,size);	
				break;
				
				
			case 2:
				sosanh();
				break;
				
			case 3:
				printf("Bye\n");	
				break;
				
			default:
				break;		
		}		
	}while(c!=3);



	
    return 0;
}

