#include <stdio.h>
float hospitalFee(int the, int ngay, int thuoc, int thuat){\
	double giam;
//	double sum;
	if(the==1){
		giam=0.3;
	}
	else if(the==2){
		giam=0.5;
	}
	else if(the==3){
		giam=0.7;
	}		
		return (double) (ngay*15000+thuoc+thuat)*giam;
}

int main()
{	
	int the,ngay,tienthuoc,phauthuat;
	printf("CHUONG TRINH TINH VIEN PHI\n");
	printf("1.Thong tin benh nhan\n");
	printf("2.Hoa don vien phi\n");
	printf("3.Thong ke\n");
	printf("4.Thoat\n");	
	char ten;
	int c;
	int sum;
	int dem=0;
	int demG=0,demS=0,demC=0;
	
	do{
		printf(" \nLua chon cua ban:");
		scanf("%d",&c);	
		switch(c){
		case 1:
			printf("Ho va Ten:");
			while(getchar()!='.'){
			}
			printf("Loai the cua ban Gold(1), Silver(2), Citizen(3): ");
			scanf("%d",&the);
			
//			dem so the moi loai		
			if(the==1){
				demG++;
			}
			else if(the==2){
				demS++;
			}
			else if(the==3){
				demC++;
			}
			
			printf("Ngay nhap vien:");
			while(getchar()!='.'){
			}
			
			dem++;
			break;
		case 2:
			printf("Nhap vao so ngay nhap vien:");
			scanf("%d",&ngay);	
			printf("Nhap vao tien thuoc:");
			scanf("%d",&tienthuoc);	
			printf("Nhap vao tien phau thuat:");
			scanf("%d",&phauthuat);		
			sum=hospitalFee(the,ngay,tienthuoc,phauthuat);
			printf("So tien phai tra la: %d VND \n",sum);
			break;
		case 3:
			printf("Tong so benh nhan: %d \n",dem);
			printf("So luong the loai Gold da khai bao: %d \n",demG);
			printf("So luong the loai Sliver da khai bao: %d \n",demS);
			printf("So luong the loai Citizen da khai bao: %d \n",demC);			
			break;
		case 4:
			printf("Goodbye");
			break;
		default:
			break;		
		}
		
				
	}while(c!=5);
		
    return 0;
}

