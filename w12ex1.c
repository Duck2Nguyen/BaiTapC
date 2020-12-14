#include <stdio.h>
#include<conio.h>
#include<string.h>

void trimRight(char a[]){
//	printf("%s\n",a);
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
	printf("%s.",a);	
}

void trimLeft(char a[]){
//	printf("\n%s\n",a);
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
	printf(".%s.",a);
	
}
	
void trimMiddle(char a[]){
//	printf("\n%s\n",a);
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
	printf(".%s.",a);
}	

int main()
{
	char a[30];
	printf("Nhap vao xau ky tu:");
	gets(a);
	printf("Chuoi ban nhap la: %s",a);
	printf("\nTrim Right:");
	trimRight(a);
	printf("\nTrim Left:");
	trimLeft(a);
	printf("\nTrim Middle:");
	trimMiddle(a);

    return 0;
}

