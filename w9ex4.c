#include <stdio.h>

int checkLeapYear(int a){
	if(a%4==0 && a%100!=0 ){
		printf("It is Leap Year \n");
		return 1;
	}
	else if(a%400==0){
		printf("It is Leap Year \n");	
		return 1;
	}
	else{
		printf("It is not Leap Year \n");
		return 0;
	}

}

int Days(int a){
	if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12){
		return 31;
	}
	if(a==4 || a==6 || a==9 || a==11 ){
		return 30;
	}	
}

int main()
{
		int nam,thang;
		int check;	
	do{
		printf("Nhap vao nam :");	
		scanf("%d",&nam);
		check=checkLeapYear(nam);	
		printf("Nhap vao thang:");	
		scanf("%d",&thang);	
		if(thang==2){
			if(check==1){
				printf("So ngay cua thang la: 29 ngay. \n");
			}
			else{
				printf("So ngay cua thang la: 28 ngay. \n");
			}	
			
		}
		else{
			printf("So ngay cua thang la: %d ngay. \n",Days(thang));		
		}		
	}while(thang!=13);


    return 0;
}

