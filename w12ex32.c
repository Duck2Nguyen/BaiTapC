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
			j=b+c-122+97-1;
			a[i]=(char)j;			
		}
		if(b+c>90 && b+c <97){
			j=b+c-90+65-1;
			a[i]=(char)j;
		}
		else if(b+c>=97 && b+c<=122){
			a[i]=(char)b+c;	
		}
		else if(b+c>=65 && b+c<=90){
			a[i]=(char)b+c;	
		}
	}
	printf("%s",a);	
}


void giaima(char a[],int c){
	int i,j;
	int size=strlen(a);
	printf("Chuoi da giai ma: ");	
	for(i=0;i<size;i++){
		int b= (int)a[i];
		if(b-c<97 && b-c> 90){
			j=122-97+(b-c)+1;
			a[i]=(char)j;		
		}
		if(b-c<65 && b!=32){
			j=90-65+(b-c)+1;
			a[i]=(char)j;			
		}
		else if(65<=b-c && b-c<=90){
			j=b-c;
			a[i]=(char)j;		
		}
		else if(97<=b-c && b-c<=122){
			j=b-c;
			a[i]=(char)j;		
		}
				
	}
	printf("%s",a);	
}

int main()
{
	int c,d,e;
	char a[30];
	char b[30];
	
	printf("1. Ma hoa 1 chuoi.\n");
	printf("2. Giai ma 1 chuoi n.\n");
	printf("3. Ma hoa 1 doan van ban va gia ma.\n");	
	printf("4. Thoat.\n");
	
	do{
		printf("\nLua chon cu ban:");
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
				printf("Chuoi ban nhap la: %s\n",b);
				giaima(b,d);
				break;
			
			case 3:
				printf("Nhap vao buoc chuyen:");
				scanf("%d",&c);
				while(getchar()!='\n');
				printf("Nhap vao 1 doan van ban:");
				gets(a);
				mahoa(a,c);
				printf("\n");
				giaima(a,c);
				break;
				
			case 4:
				printf("Bye.");
				break;
			default:
				break;				
		}
	}while(e!=4);
	
    return 0;
}

