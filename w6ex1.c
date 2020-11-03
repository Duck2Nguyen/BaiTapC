#include <stdio.h>
int main()
{
	int heading;
	printf("Enter a compass heading (0.0 - 360.0 degrees):  ");
	scanf("%d", &heading); 
	if (heading < 0){
	printf("Error--negative heading (%d): must be between 0 and 360\n", heading);		
	}
	else if (heading < 90){
	printf("The bearing is north %d degrees east\n", heading); 			
	}
	else if (heading < 180){
	printf("The bearing is north %d degrees west\n", 180-heading);		
	}
	else if (heading < 270){
	printf("The bearing is south %d degrees west\n", heading-180);		
	}
	else if (heading <= 360){
	printf("The bearing is south %d degrees east\n", 360-heading);		
	}
	else{
	printf("Error--heading > 360 (%d): must be between 0 and 360\n", heading); 		
	}
    return 0;
}

