#include <stdio.h>

int main()
{
	int tu,tv,hp;
	int tucost=8,tvcost=15,hpcost=12;
	printf("Sieu thi VietLong xin kinh chao quy khach \n");
	printf("So luong tu lanh Electrolux ban dc:");
	scanf("%d",&tu);
	printf("So luong tivi LCD Sony ban dc:");
	scanf("%d",&tv);
	printf("So luong Laptop HP ban dc:");
	scanf("%d",&hp);
	
	int soluong=tu+tv+hp;
	int doanhso= tu*tucost+tv*tvcost+hp*hpcost;
	
	// doanh so
	printf("Doanh so ban tu lanh Electrolux:%d \n",tu*tucost);
	printf("Doanh so ban tivi LCD Sony:%d \n",tv*tvcost);
	printf("Doanh so ban Laptop HP :%d \n",hp*hpcost);
	
	// tong doanh so
	printf("Tong doanh so ban hang:%d\n",doanhso);
	
	// mat hang ban chay nhat
	
	tu<tv ? (tv<hp ? printf("Hp ban chay nhat \n"): printf("Tivi ban chay nhat \n")): (tu>hp ? printf("Tu lanh ban chay nhat\n"):printf("HP ban chay nhat\n"));
	
	tu<tv ? (hp<tu ? printf("Hp ban it nhat \n") : printf("Tu lanh ban it nhat \n")):( tv<hp ? printf("TiVi ban it nhat \n"): printf("Hp ban it nhat \n"));
	
	tu*tucost<tv*tvcost ? (tv*tvcost<hp*hpcost ? printf("Hp co doanh so cao nhat \n"): printf("Tivi co doanh so cao nhat \n")): (tu*tucost>hp*hpcost ? printf("Tu lanh co doanh so cao nhat\n"):printf("HP co doanh so cao nhat\n"));
	
	tu*tucost<tv*tvcost ? (hp*hpcost<tu*tucost ? printf("Hp co doanh so it nhat \n") : printf("Tu lanh co doanh so  it nhat \n")):( tv*tvcost<hp*hpcost ? printf("TiVi co doanh so it nhat \n"): printf("Hp co doanh so it nhat \n"));
	
    return 0;
}

