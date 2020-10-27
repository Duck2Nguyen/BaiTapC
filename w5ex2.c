#include <stdio.h>

int main()
{
	int height,tuoi,point=0,sum=0,yh;
	char ten1[20],ten2[20];	
 	printf("Login -enter your height (cm):");
 	scanf("%d",&height);
 	
// 	ban thu nhat
 	printf("Enter your name:");
	scanf("%s",ten1);
 	printf("Hi %s:\n",ten1);
 	printf("How old are you?");
 	scanf("%d",&tuoi);
 	if(tuoi<=16){
 		point=-2;
 		sum=sum+point;
	 }
	 else if(16<tuoi && tuoi<21){
	 	point=5;
	 	sum=sum+point;
	 }
	 else if(tuoi>21){
	 	point=2;
	 	sum=sum+point;
	 }
 	printf("(%d)",point);
 	
 	printf("What's your height'?");
 	scanf("%d",&yh);
 	if(yh>=height){
 		point=-1;
 		sum=sum+point;
	}
	else if(height-yh>30){
	 	point=-2;
	 	sum=sum+point;
	}
 	else{
 		point=3;
	 	sum=sum+point;
	}
	printf("(%d)",point);
	
	int sum1=sum; // tong ban thu nhat
	point=sum=0;  //reset

// ban thu hai	
	printf("Enter your name:");
	scanf("%s",ten2);
 	printf("Hi %s:\n",ten2);
 	printf("How old are you?");
 	scanf("%d",&tuoi);
 	if(tuoi<=16){
 		point=-2;
 		sum=sum+point;
	 }
	 else if(16<tuoi && tuoi<21){
	 	point=5;
	 	sum=sum+point;
	 }
	 else if(tuoi>21){
	 	point=2;
	 	sum=sum+point;
	 }
 	printf("(%d)",point);
 	
 	printf("What's your height'?");
 	scanf("%d",&yh);
 	if(yh>=height){
 		point=-1;
 		sum=sum+point;
	}
	else if(height-yh>30){
	 	point=-2;
	 	sum=sum+point;
	}
 	else{
 		point=3;
	 	sum=sum+point;
	}
	printf("(%d)",point);
	
	int sum2=sum; // tong ban thu hai
	
//	quyet dinh
	printf("My decision: \n");
	if(sum1=sum2){
		printf("QUAY LEN");
	}
	else{
		sum1<sum2 ? printf("%s, are you free on Saturday",ten1) : printf("%s, are you free on Saturday",ten2);
	}
	
    return 0;
}

