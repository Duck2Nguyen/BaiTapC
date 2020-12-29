#include <stdio.h>
#include <string.h>

typedef struct{
	char maso[9];
	char tieude[50];
	int thoiluong;
	int giathue;
}DVD;

int kiemtra(char a[]){
	int i;
	int check=1;
	if(strlen(a)!=8){
		check= 0;
	}
	if(a[0]!= '0' && a[0]!= '1'){	
		check= 0;
	}
	for(i=1;i<4;i++){
		int chu=(int)a[i];
		if(chu<65 || chu>90){	
			check= 0;	
		}
	}
	for(i=4;i<8;i++){
		if(a[i]< '0' || a[i]> '9'){	
			check= 0;
		}
	}	
	
	if(check==0){
		return 0;
		
	}
	if(check==1){
		return 1;
	}
}

DVD input(DVD dia,int i){
	while(getchar()!='\n');
	fflush(stdin);
	do{
		printf("\nNhap vao ma so cua dia thu %d (mLLLDDDD): ",i+1);
		gets(dia.maso);	
		if(kiemtra(dia.maso)==0){
			printf("Invalid Value.");
		}
	}while(kiemtra(dia.maso)==0);


	printf("Nhap vao tieu de cua dia thu %d: ",i+1);
	gets(dia.tieude);
	
	do{
		printf("Nhap vao thoi luong cua dia thu %d ( 60 <= thoi luong <= 180): ",i+1);
		scanf("%d",&dia.thoiluong);	
		if(dia.thoiluong <60 || dia.thoiluong >180){
			printf("Invalid Value.\n");
		}	
	}while(dia.thoiluong <60 || dia.thoiluong >180);
	
	if(dia.maso[0]=='0'){
		dia.giathue=5000;
	}
	if(dia.maso[0]=='1'){
		dia.giathue=2000;
	}	
	
	return 	dia;
}

void print(DVD dia[],int n){
	int i;
	printf("\n%-15s %-20s %-10s %-10s","Ma So","Tieu De","Thoi Luong","Gia Thue");
	for(i=0;i<n;i++){	
		printf("\n%-15s %-20s %-10d %-10d",dia[i].maso,dia[i].tieude,dia[i].thoiluong,dia[i].giathue);	
	}
}

void sapxep(DVD dia[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(dia[j].thoiluong < dia[i].thoiluong){
				DVD tmp= dia[j];
				dia[j]=dia[i];
				dia[i]=tmp;
			}
		}
	}	
}

void suadoi(DVD a[],int n){
	char b[9];
	int i;
	int check;
	do{
		
		do{
			while(getchar()!='\n');
			fflush(stdin);
			printf("\nNhap vao ma so dia (mLLLDDDD): ");
			gets(b);	
			if(kiemtra(b)==0){
				printf("Invalid Value.");
			}
		}while(kiemtra(b)==0);
		
		
		for(i=0;i<n;i++){
			check = strcmp(b,a[i].maso);
			if(check==0){
				printf("Nhap vao tieu de moi cua dia : ");
				gets(a[i].tieude);				
				do{
					printf("Nhap vao thoi luong moi cua dia ( 60 <= thoi luong <= 180): ");
					scanf("%d",&a[i].thoiluong);	
					if(a[i].thoiluong <60 ||a[i].thoiluong >180){
						printf("Invalid Value.");
					}	
				}while(a[i].thoiluong <60 || a[i].thoiluong >180);
				break;
			}
		}
		if(check!=0){
			printf("\nMa so dia khong ton tai.");
		}		
	}while(check!=0);

}

void dainhat(DVD a[],int n){
	int count=0;
	int vitri=0;
	int i;
	for(i=0;i<n;i++){
		if(strlen(a[i].tieude) >count){
			count = strlen(a[i].tieude);
			vitri=i;
		}	
	}
	printf("\nDVD co tieu de dai nhat la:");
	printf("\n%-15s %-20s %-10d %-10d",a[vitri].maso,a[vitri].tieude,a[vitri].thoiluong,a[vitri].giathue);	
	
}

int main()
{
	DVD dia[100];
	int i=0;
	int c;
	int num=0;
	int them=0;
	int n;
	
	printf("1.Nhap so lieu\n");
	printf("2.Nhap them\n");
	printf("3.In toan bo thong tin dia\n");
	printf("4.Sap xep theo chieu tang thoi luong\n");
	printf("5.Sua doi thong tin dia\n");
	printf("6.DVD co tieu de dai nhat\n");
	printf("7.Thoat\n");	
	
	do{
		while(getchar()!='\n');
		fflush(stdin);		
		printf("\nLua chon cua ban la: ");
		scanf("%d",&c);
		switch(c){
			case 1:
				while(getchar()!='\n');
				fflush(stdin);
				printf("\nNhap so luong dia can tao:");
				scanf("%d",&num);
				for(i=0;i<num;i++){
					dia[i]=input(dia[i],i);		
				}	
				n=num;
				break;
			case 2:
				while(getchar()!='\n');
				fflush(stdin);
				printf("\nNhap so luong dia can tao them:");
				scanf("%d",&them);
				n+=them;
				for(i=n-them;i<n;i++){
					dia[i]=input(dia[i],i);		
				}		
				break;
			case 3:
				print(dia,n);	
				break;
			case 4:
				printf("\nDanh sach dia sau sap xep: \n");
				sapxep(dia,n);
				print(dia,n);		
				break;
			case 5:
				printf("\nSua doi thong tin:");
				suadoi(dia,n);
				print(dia,n);
				break;
			case 6:
				dainhat(dia,n);
				break;
			case 7:
				printf("\nBye.\n");
				break;
			default:
				break;
										
		}			
	}while(c!=7);

    return 0;
}

