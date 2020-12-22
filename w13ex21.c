#include <stdio.h>

typedef struct{
	int tuso;
	int mauso;
}inputPhanSo; 

void inputArray(inputPhanSo Array[],int size){
	
//	khong the nhap so 0 vi con phai inverse array;
	
	int i;
	for(i=0;i<size;i++){
		
		do{
			printf("Nhap vao tu so cua phan so thu %d:",i+1);
			scanf("%d",&Array[i].tuso);	
			if(Array[i].tuso==0){
				printf("Invalid Value\n");
			}			
		}while(Array[i].tuso==0); 
		
		do{
			printf("Nhap vao mau so cua phan so thu %d:",i+1);
			scanf("%d",&Array[i].mauso);	
			if(Array[i].mauso==0){
				printf("Invalid Value\n");
			}			
		}while(Array[i].mauso==0);
	
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

void RutGonArray(inputPhanSo Array[],int size){
	int i;
	for(i=0;i<size;i++){
		int d=ucln(Array[i].tuso,Array[i].mauso);
		Array[i].tuso=Array[i].tuso/d;
		Array[i].mauso=Array[i].mauso/d;
	}
}

void sosanh(){
	inputPhanSo a[2];
	printf("\n\nSo sanh two fractions:\n");
	printf("Nhap vao tu so cua phan so thu nhat:");
	scanf("%d",&a[0].tuso);
	do{
		printf("Nhap vao mau so cua phan so thu nhat:");
		scanf("%d",&a[0].mauso);	
		if(a[0].mauso==0){
			printf("\nInvalid Value\n");
		}		
	}while(a[0].mauso==0);
	
	printf("Nhap vao tu so cua phan so thu hai:");
	scanf("%d",&a[1].tuso);
	
	do{
		printf("Nhap vao mau so cua phan so thu hai:");
		scanf("%d",&a[1].mauso);	
		if(a[1].mauso==0){
			printf("\nInvalid Value\n");
		}		
	}while(a[1].mauso==0);

	float ketqua1= (float)a[0].tuso/a[0].mauso;
	float ketqua2= (float)a[1].tuso/a[1].mauso;

	
	if(ketqua1<ketqua2){
		printf("%d/%d < %d/%d \n",a[0].tuso,a[0].mauso,a[1].tuso,a[1].mauso);
	}
	else if(ketqua1>ketqua2){
		printf("%d/%d > %d/%d \n",a[0].tuso,a[0].mauso,a[1].tuso,a[1].mauso);
	}	
}

int ucln(int a, int b){
	while(a!=b){
		if(a>b){
			a-=b;
		}
		if(a<b){
			b-=a;
		}
	}
		return a;	
}

inputPhanSo RutGon(inputPhanSo a){
	int d=ucln(a.tuso,a.mauso);
	a.tuso=a.tuso/d;
	a.mauso=a.mauso/d;
	return a;
}

void pheptoan(){
	inputPhanSo a[4];
	printf("\n\nPhep toan voi two fractions:\n");
	printf("Nhap vao tu so cua phan so thu nhat:");
	scanf("%d",&a[0].tuso);
	do{
		printf("Nhap vao mau so cua phan so thu nhat:");
		scanf("%d",&a[0].mauso);	
		if(a[0].mauso==0){
			printf("\nInvalid Value\n");
		}		
	}while(a[0].mauso==0);
	
	printf("Nhap vao tu so cua phan so thu hai:");
	scanf("%d",&a[1].tuso);
	
	do{
		printf("Nhap vao mau so cua phan so thu hai:");
		scanf("%d",&a[1].mauso);	
		if(a[1].mauso==0){
			printf("\nInvalid Value\n");
		}		
	}while(a[1].mauso==0);

	float ketqua1= (float)a[0].tuso/a[0].mauso;
	float ketqua2= (float)a[1].tuso/a[1].mauso;

	a[2].tuso=a[0].tuso+a[1].tuso;
	a[2].mauso=a[0].mauso+a[1].mauso;
	a[2]=RutGon(a[2]);	
	printf("\nTong 2 phan so la: %d/%d",a[2].tuso,a[2].mauso);
	
	a[3].tuso=a[0].tuso*a[1].tuso;
	a[3].mauso=a[0].mauso*a[1].mauso;
	a[3]=RutGon(a[3]);
	printf("\nTich 2 phan so la: %d/%d ",a[3].tuso,a[3].mauso);
}
int main()
{
	int i;
	int size;	
	printf("Nhap vao kich co cua mang:");
	scanf("%d",&size);
	
	inputPhanSo Array[size];     // Khai bao Array
	
	inputArray (Array,size);	// Nhap vao Array
	
	printContent(Array,size);	// In ra content
	
	inverseArray(Array,size);	// Inverse 
	printf("\n\nInverse All Fraction in Array:");
	printContent(Array,size);

	printf("\n\nRut Gon All Fraction in Array:"); // Rut Gon
	inverseArray(Array,size);		
	RutGonArray(Array,size);
	printContent(Array,size);

	sosanh(); //  So sanh 2 phan so
	
	
	inputPhanSo a; // Rut gon phan so
	printf("\n\nRut gon fraction:\n");
	printf("Nhap vao tu so cua phan so rut gon:");
	scanf("%d",&a.tuso);
	do{
		printf("Nhap vao mau so cua phan so thu nhat:");
		scanf("%d",&a.mauso);
		if(a.mauso==0){
			printf("\nInvalid Value\n");
		}		
	}while(a.mauso==0);
	
	a=RutGon(a);
	printf("\nPhan so rut gon la: %d/%d",a.tuso,a.mauso);
	
	pheptoan(); // Tong 2 phan so

    return 0;
}

