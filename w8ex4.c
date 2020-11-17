#include <stdio.h>
#include <stdlib.h>

int main()
{
//	int start;
	int end;
	int a;
	int so1;
	int so2;
	int sum=5;
	int nguoi1;
	int nguoi2;
	int chanle=1;
	int sai=0;
	int index=0;
	printf("ICT GAME CENTER- SMART STRATEGY \n");
//	printf("Start: ");
//	scanf("%d",&start);
	printf("End: ");
	scanf("%d",&end);
	a=rand() % 2;
	if(a==0){
		a=2;
	}
	printf("Who play first(randomly): %d \n",a);
	
	while(sum<end){
//		turn p1
		if(a==1){
			printf("P1 turn \n");
			if(index==0){
				do{
					printf("Choose number:");
					scanf("%d",&so1);
					if(so1%2!=chanle && index==1){
						sai=1;
						if(chanle==0)
						printf("invalid- odd as privious selected\n");
						if(chanle==1)
						printf("invalid- even as privious selected\n");
					}
					chanle==so1%2;
					index=1;
					if(so1>=5){
						printf("invalid-greater than 5\n");
					}		
				}while(so1>=5 || sai==1);				
			}
			if(index==2){
				do{
					printf("Choose number:");
					scanf("%d",&so1);
					if(so1%2==chanle ){
						sai=1;
						if(chanle==0)
						printf("invalid- even as privious selected\n");
						if(chanle==1)
						printf("invalid- odd as privious selected\n");
					}
//					chanle==so1%2;
//					index=1;
					if(so1>=5){
						printf("invalid-greater than 5\n");
					}		
				}while(so1>=5 || sai==1);
			}
			sum+=so1;
			printf("Now the value is %d \n",sum);
			if(sum>=end){
				printf("P1 win.");
				break;
			}		
		}	
		
//		turn p2
		printf("P2 turn \n");
		
		if(index==1){
			do{
				printf("Choose number:");
				scanf("%d",&so2);
				
				if(chanle==1 && so2%2==1){
					sai=1;
					printf("invalid - odd as previous selected \n");
				}
				if(chanle==0 && so2%2==0){
					sai=1;
					printf("invalid - even as previous selected \n");
				}	
				sai=0;
//				chanle=so2%2;		
				if(so2>=5){
					printf("invalid-greater than 5\n");
				}		
			}while(so2>=5 || sai==1);			
		}
		
		if(index==0){
			do{
				printf("Choose number:");
				scanf("%d",&so2);
				chanle=so2%2;		
				if(so2>=5){
					printf("invalid-greater than 5\n");
				}		
			}while(so2>=5);	
			index=2;
		}

		
		sum+=so2;	
		printf("Now the value is %d \n",sum);
		if(sum>=end){
			printf("P2 win.");
			break;
		}		
		a=1;
	}	


    return 0;
}

