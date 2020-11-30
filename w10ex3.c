#include <stdio.h>

int main()
{
	int A[15][1];
	int dem,demhang,demcot;
	int chon;
	int hang,cot,stt;
	int num,so;
	int congsuat=0;
//	for(demhang=0;demhang<5;demhang++){
//		for(demcot=0;demcot<3;demcot++){
//			A[demhang][0]=demcot;
//			A[demhang][1]=1;		
//		}
//		
//	}
	for(dem=0;dem<15;dem++){
		A[dem][0]=0;
	}
	
	printf("Menu bat tat dien gom 5 hang va 3 cot .\n");
	printf("1.Bat tat den theo cot.\n");	
	printf("2.Bat tat den theo hang.\n");
	printf("3.Bat tat den theo vi tri.\n");
	printf("4.Cong suat dan den hien tai .\n");
	printf("5.Thoat.\n");
	do{
	printf("\nLua chon cua ban.");
	scanf("%d",&chon);		
		switch(chon){
			case 1:
				printf("Nhap hang so:");
				scanf("%d",&hang);
				for(num=0;num<3;num++){
					if(A[(hang-1)*3+num][0]==1){
						A[(hang-1)*3+num][0]=0;
					}
					if(A[(hang-1)*3+num][0]==0){
						A[(hang-1)*3+num][0]=1;
					}				
				}
				break;
				
			case 2:
				printf("Nhap cot so: ");
				scanf("%d",&cot);
				for(so=0;so<5;so++){
					if(A[(cot-1)+3*so][0]==1){
						A[(cot-1)+3*so][0]=0;
					}
					if(A[(cot-1)+3*so][0]==0){
						A[(cot-1)+3*so][0]=1;
					}									
				}
				break;
				
			case 3:
				printf("Nhap bong den so:");
				scanf("%d",&stt);
				if(A[stt-1][0]==1){
					A[stt-1][0]=0;
				}
				if(A[stt-1][0]==0){
					A[stt-1][0]=1;
				}
				break;
			case 4:
				congsuat=0;
				if(A[0][0]==1){
					congsuat=congsuat+10;
				}
				if(A[2][0]==1){
					congsuat=congsuat+10;
				}
				if(A[6][0]==1){
					congsuat=congsuat+10;
				}
				if(A[8][0]==1){
					congsuat=congsuat+10;
				}
				if(A[12][0]==1){
					congsuat=congsuat+10;
				}
				if(A[14][0]==1){
					congsuat=congsuat+10;
				}		
				if(A[4][0]==1){
					congsuat=congsuat+20;
				}				
				if(A[10][0]==1){
					congsuat=congsuat+20;
				}					
				for(dem=0;dem<15;dem++){					
					if(A[dem][0]==1 && dem!=0 && dem!=2 && dem!=6 && dem!=8 && dem!=4 && dem!=10 && dem!=12 && dem!=14 ){
						congsuat=congsuat+15;
					}
				}
				printf("Cong suat tieu thu: %d \n",congsuat);
				break;	
				
			default:
				break;				
		}	
	}while(chon!=5);

	
	
    return 0;
}

