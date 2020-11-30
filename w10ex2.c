#include <stdio.h>

int main()
{
	int A[40][2];
	int i;
	int chon;
	int sodien=0,tiendien=0;			
	int may;
	int dem;
		
//	printf("After");
	
	for(i=0;i<40;i++){
		A[i][0]=1;  
		A[i][1]=0;
//		printf("%d-%d",A[i][0],A[i][1]);
	}
//	printf("Before");


	printf("Lab 813. \n");
	printf("1.Chon may.\n");
	printf("2.Roi may.\n");
	printf("3.Trang thai cac may.\n");
	printf("4.Dien nang tieu thu cac may.\n");	
	printf("5.Tong dien nang tieu thu va tien dien.\n");	
	printf("6.May dc dung nhieu nhat va it nhat.\n");
	printf("7.Thoat.\n");
		
		
				
	do{
		printf("\nLua chon cua ban:");	
		scanf("%d",&chon);	
			
		switch(chon){
			case 1:
				do{
					printf("Nhap so may:");
					scanf("%d",&may);
					if(A[may-1][0]==0){
						printf("May da co nguoi xu dung.\n");
					}
					else{
						printf("%d is available. \n",may);	
					}						
				}while(A[may-1][0]==0);
				A[may-1][0]=0;
				A[may-1][1]+=400;
				break;
				
			
			case 2:
				A[may-1][0]=1;
				printf("Bye.\n");
				break;
				
			case 3:
				for(dem=0;dem<40;dem++){
					if(A[dem][0]==1){
						printf("May %d: chua dung \n",dem+1);						
					}
					if(A[dem][0]==0){
						printf("May %d: DANG DUNG\n",dem+1);						
					}						
				}
				break;
				
			case 4:
				for(dem=0;dem<40;dem++){
					printf("Dien nang tieu thu may %d : %d(Watt) \n",dem+1,A[dem][1]);					
				}
				break;
				
			case 5:
				sodien=0;
				for(dem=0;dem<40;dem++){
					sodien=sodien+A[dem][1];
				}
				tiendien=sodien*750/1000;
				printf("Tong so dien la: %d(Watt)\n",sodien);
				printf("Tong tien dien thanh toan: %d(VND)\n",tiendien);
				break;
				
			case 6:
				printf("Loading... \n");	
				break;
				
			case 7:
				printf("Bye \n");
				break;
				
			default:
				break;
						
		}
		
	}while(chon!=7);

		
    return 0;
}

