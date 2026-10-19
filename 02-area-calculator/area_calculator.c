#include<stdio.h>
int main()
{
	int choice;
	float r,s,l,w,area;
	const float pi=3.14f;
	printf("========MENU========\n");
	printf("Choice 1: Area of a circle\nChoice 2: Area of a Square\nChoice 3: Area of a Rectangle\nChoice 4: Exit\n\n");
	printf("Enter Choice: ");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
		
			printf("Enter Radius: ");
			scanf("%f",&r);
			area = pi*r*r;
			printf("Area = %.2f\n", area);
			break;
		
		case 2:
		
			printf("Enter length of side: ");
			scanf("%f", &s);
			area = s*s;
			printf("Area = %.2f\n", area);
			break;
		
		case 3:
	
			printf("Enter Length: ");
			scanf("%f",&l);
			printf("Enter Width:");
			scanf("%f",&w);
			area = l*w;
			printf("Area = %.2f\n", area);
			break;
		
		case 4:
			printf("Exiting\n");
			break;
		
	
		default:
			printf("Invalid Option\n");
			
	}


	

	
	return 0;
}
