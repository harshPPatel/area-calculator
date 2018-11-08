#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdbool.h>

/*
 * Function 	: squareArea
 * Attributes 	: none
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
			default:
				return;
		}

	}

}
