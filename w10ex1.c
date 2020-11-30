#include <stdio.h>

float lamtron(float a){
	int i=a;
	if(a-i<=0.5){
		a=i+0.5;
	}
	else{
		a=i+1;
	}
	return (float )a;	
}

int main()
{
	double b,c,d,e;
	double a;
	int j;
	int k;
	double caonhat=0,thapnhat=0;
	float vitricao,vitrithap;
	int i=0;	
	float A[20][3];
	do{
	printf("\nNhap vao so ao cua cau thu:");
	scanf("%lf",&a);
	printf("Danh gia cua chuyen gia thu nhat:");
	scanf("%lf",&b);
	c=lamtron(b);	
	printf("Danh gia cua chuyen gia thu hai:");
	scanf("%lf",&d);	
	e=lamtron(d);
	A[i][0]=a;
	A[i][1]=c;
	A[i][2]=e;	
	printf("Cau thu so %2.lf - %0.1lf(GK1) - %0.1lf(GK2) \n",a,c,e);
	i++;	

	}while(a!=100 );
	thapnhat=A[0][0];	
	for(j=0;j<i;j++){
		for(k=1;k<3;k++){
			if(A[j][k]>caonhat){
				caonhat=A[j][k];
				vitricao=A[j][0];
			} 
			if(A[j][k]<thapnhat){
				thapnhat=A[j][k];
				vitrithap=A[j][0];
			}					
		}
	}
	printf("\nCau thu co danh gia thap nhat %0.lf : %0.1lf(diem) \n",vitrithap,thapnhat);
	printf("Cau thu co danh gia cao nhat %0.lf : %0.1lf(diem) \n",vitricao,caonhat);	
    return 0;
}

