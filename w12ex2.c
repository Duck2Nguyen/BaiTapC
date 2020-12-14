#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void toUpper(char a[]){
	int i;
	int size=strlen(a);
	a[0]=toupper(a[0]);
	for(i=0;i<size;i++){
		if(a[i]==' '){
			a[i+1]=toupper(a[i+1]);
		}
	}
	printf("Ten cua ban after:%s.\n",a);
}

void trimRight(char a[]){
	int i;
	int size=strlen(a);
	for(i=0;i<size;i++){
		if(a[size-1-i]==' '){
			a[size-1-i]='\0';
		}
		else if(a[size-1-i]!=' '){
			break;
		}		
	}
//	printf("%s.",a);
	
}

void trimLeft(char a[]){
	int i;
	int j;
	int size=strlen(a);
	for(j=0;j<size;j++){
		if(a[0]==' '){
			for(i=0;i<size;i++){
				a[i]=a[i+1];
			}		
	//		a[size-1-i]='\0';
			size--;		
		}
		else if(a[0]!=' '){
			break;
		}		
	}
//	printf(".%s.",a);
	
}
	
void trimMiddle(char a[]){
	int i;
	int j;
	int size=strlen(a);
	for(i=1;i<size;i++){
		if(a[i]==' '&& a[i+1]==' '&&a[i-1]!=' '){
			for(j=i;j<size;j++){
				a[j]=a[j+1];
			}
			size--;
			i--;	
		}
	}
//	printf("Ten cua ban after: %s.\n",a);
}	

int main()
{
	int i;
	int c;
	char a[30];
	char b[5][30]={"  Nguyen  duc hai","  Nguyen van hai"," Nguyen  van","nguyen  van Hai","Nguyen duc "};

	printf("1. Chuan hoa 1 ten.\n");
	printf("2. Chuan hoa chuoi co san.\n");
	printf("3. Thoat.\n");
	
	do{
		printf("Lua chon cua ban:");
		scanf("%d",&c);
		
		switch(c){
			case 1:
				while(getchar()!='\n');
				printf("Nhap vao ten:");
				gets(a);
				trimRight(a);
				trimLeft(a);
				trimMiddle(a);
				toUpper(a);	
				break;
			case 2:	
				for(i=0;i<5;i++){
					trimRight(b[i]);
					trimLeft(b[i]);
					trimMiddle(b[i]);
					toUpper(b[i]);	
				}
				break;			
			case 3:
				printf("Bye.");
				break;
			default:
				break;						
		}		
	}while(c!=3);	


    return 0;
}

