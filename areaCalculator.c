#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdbool.h>

/* Global Variables */
#define PI 3.14159

/*
 * Function 	: squareArea
 * Attributes 	: none
 * Variables	: suqareSide	=> Type: int	=>	To store user input for the value of square sides
 *				  area			=> Type: float	=>	To store Area of shape
 * Description  : Take input of square side and calculate area of square
 * Method Type	: void 
 */

void squareArea(){
	/* Variables */
	int squareSide;
	float area;
	
	/* User Input */
	printf("Enter value of Square Side : ");
	scanf("%d", &squareSide);
	
	/* Calculate Area */
	area = pow(squareSide, 2);
	
	/* output */
	printf("Area of your square is : %0.2f", area);
}


/*
 * Function 	: rectangleArea
 * Attributes 	: none
 * Variables	: sideOne		=> Type: int	=>	To store user input for the value of Side 1
 *				  sideTwo		=> Type: int	=>	To store user input for the value of Side 2
 *				  area			=> Type: float	=>	To store Area of shape
 * Description  : Take input of rectangle sides and calculate area
 * Method Type	: void 
 */

void rectangleArea(){
	/* Variables */
	int sideOne, sideTwo;
	float area;
	
	/* User Input */
	printf("Enter value of Side One : ");
	scanf("%d", &sideOne);
	printf("Enter value of Side Two : ");
	scanf("%d", &sideTwo);
	
	/* Calculate Area */
	area = sideOne * sideTwo;
	
	/* output */
	printf("Area of your rectangle is : %0.2f", area);
}

/*
 * Function 	: circleArea
 * Attributes 	: none
 * Variables	: sideOne		=> Type: int	=>	To store user input for the value of Side 1
 *				  sideTwo		=> Type: int	=>	To store user input for the value of Side 2
 *				  area			=> Type: float	=>	To store Area of shape
 * Description  : Take input of rectangle sides and calculate area
 * Method Type	: void 
 */

void circleArea(){
	/* Variables */
	int radius;
	float area;
	
	/* User Input */
	printf("Enter value of Radius : ");
	scanf("%d", &radius);
	
	/* Calculate Area */
	area = 2 * PI * radius;
	
	/* output */
	printf("Area of your rectangle is : %0.2f", area);
}


/*
 * Function 	: main
 * Attributes 	: none
 * Description  : Calls every method and run them
 * Method Type	: void 
 */
 
void main() {
	
	/* Variables */
	int userChoice;
	
	/* While Loop to Continue to take input after getting area of one shape. */
	while(true) {
		
		/* Printing instruction */
		printf("\nChoose Your Code : \n  1 - Square\n  2 - Circle\n  3 - Rectangle\n  4 - Cube\n  5 - Cone\n  6 - Sphere\n  7 - Cylinder\n  8 - Exit\n");
		
		/* Taking User Input */
		printf("Enter Your Choice : ");
		scanf("%d", &userChoice);
		
		/* Switch to call methods according userChoice */
		switch(userChoice) {
			case 1:
				squareArea();
				break;
			case 2:
				circleArea();
				break;
			case 3:
				rectangleArea();
				break;
			default:
				return;
		}

	}
	
	//TODO: Add if else statement to check input in various functions

}
