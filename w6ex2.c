#include <stdio.h>

int main()
{
	int tem,hum,rain;
	printf("Enter your temperature:");
	scanf("%d",&tem);
	printf("Enter your Humidity:");
	scanf("%d",&hum);
	printf("Enter your rain:(rain:1  not_rain:0)");
	scanf("%d",&rain);	
	
	
	if(tem>=35 && hum>=67){
		printf("Rest at home");		
	}
	else if(30>= tem && tem>=20 && 32<=hum && hum<=40 && rain==0){
		printf(" Go out for photography");
	}
	else {
		printf("Remember to take Umbrella!");
	}
	
    return 0;
}

