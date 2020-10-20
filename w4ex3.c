#include <stdio.h>

int main()
{
	int over,three,week;
	char string[20];
	printf("Welcome to BK DVD shop");
	printf("Input the date (dd/mm/yyyy):");
	scanf("%s",&string); 
 	printf("Number of overnight DVD: ")	;
 	scanf("%d",&over);
 	printf("Number of 3-days: ")	;
 	scanf("%d",&three);
	printf("Number of weekly DVD: ")	;
 	scanf("%d",&week); 	
 	int sum= over*7+three*5*3+week*3*7;
 	printf("Your total cost: %dx7 + %dx5x3 + %dx3x7 = %d$ ",over,three,week,sum);
    return 0;
}

