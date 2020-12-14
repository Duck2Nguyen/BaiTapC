#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void mahoa(char a[],int c){
	int i,j;
	int size=strlen(a);
	printf("Chuoi ma hoa: ");	
	for(i=0;i<size;i++){
		int b= (int)a[i];

		if(b+c>122){
			printf("%c",b+c-122+97-1);			
		}
		if(b+c>90 && b+c <97){
			printf("%c",b+c-90+65-1);
		}
		else{
			printf("%c",b+c);		
		}
	}
}


void giaima(char a[],int c){
	int i,j;
	int size=strlen(a);
	printf("\nChuoi da giai ma: ");	
	for(i=0;i<size;i++){
		int b= (int)a[i];
		if(b-c<97 && b-c> 90){
			printf("%c",122-97+(b-c)+1);			
		}
		if(b-c<65){
			printf("%c",90-65+(b-c)+1);
		}
		else{
			printf("%c",b-c);		
		}
	}
}

int main()
{
	int c,d,e;
	char a[30];
	char b[30];
	
	printf("1. Ma hoa 1 chuoi.\n");
	printf("2. Giai ma 1 chuoi n.\n");
	printf("3. Thoat.\n");
	
	do{
		printf("lua chon cu ban:");
		scanf("%d",&e);
		switch(e){
			case 1:
				printf("Nhap vao buoc chuyen:");
				scanf("%d",&c);
				while(getchar()!='\n');
				printf("Nhap vao xau ky tu:");
				gets(a);
				printf("Chuoi ban nhap la: %s\n",a);
				mahoa(a,c);
				break;
			case 2:
				printf("Nhap vao buoc chuyen:");
				scanf("%d",&d);	
				while(getchar()!='\n');	
				printf("Nhap vao xau ky tu can giai ma:");
				gets(b);
				giaima(b,d);
				break;
			case 3:
				printf("Bye.");
				break;
			default:
				break;				
		}
	}while(e!=3);

	

	
    return 0;
}

