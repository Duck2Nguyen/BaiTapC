#include <stdio.h>

float getJudgeData(){
	double diem;
	printf("Nhap vao diem cua giam khao :");	
	scanf("%lf",&diem);	
	return diem;
}

void calcScoreint(double diem1,double diem2,double diem3){
	double diemtb=(diem1+diem2+diem3)/3;
	printf("Average score of performer is: %2.2lf",diemtb);
}

int main()
{
	printf("VietNam Idol \n");
	double diem1,diem2,diem3;	
	diem1=getJudgeData();
	diem2=getJudgeData();
	diem3=getJudgeData();	
	calcScoreint(diem1,diem2,diem3);
    return 0;
}

