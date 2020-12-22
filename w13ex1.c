#include <stdio.h>
#include<string.h>

int check(char a[]){
	int size;
	int ktra;
	int sodau;
	int chu;	
	ktra=1;
	size=strlen(a);	
	sodau=(a[0]-48)*10+a[1]-48;
	if(sodau<29 || sodau>32){
		ktra =0;
	}
	if(a[2]!='-'){
		ktra =0;
	}
	if(a[8]!='.'){
		ktra =0;
	}	
	chu=(int)a[3];
	if(chu<41 ||chu>90){
		ktra =0;
	}
	if(size!=11 || ktra==0){
		printf("Invalid Input Value!!");
		return 0;
	}
	if(size==11 && ktra==1){
		return 1;
	}			
}

int main()
{
	char a[30];
	int size;
	int ktra=0;
	int sodau;
	int chu;
	do{
			do{
				printf("\nNhap vao bien so (DD-LDDDD.DD): ");
				gets(a);				
			}while(check(a)==0);
		printf("Bien so cua ban:%s",a);		
	}while(1);

    return 0;
}

