#include <stdio.h>

int main()
{
	printf("Nhap vao day ki tu: ");
	char k;
	int dem=0;
	while((k=getchar())!='\n'){
		if (k=='a' || k=='e'|| k=='u'|| k=='i' || k=='y' || k=='o'){
			dem++;
			if(k=='a'){
				printf("A");
			}
			if(k=='e'){
				printf("E");
			}
			if(k=='u'){
				printf("U");
			}			
			if(k=='i'){
				printf("I");
			}
			if(k=='y'){
				printf("Y");
			}
			if(k=='o'){
				printf("O");
			}									
		}
		else{
		putchar(k);			
		}

	}
	printf("\nSo ky tu nguyen am: %d",dem);
    return 0;
}

