/**
 * \file areaCalculator.c
 * \author Harsh
 * \date 02 Dec 2018
 * \brief Area Calculator built on C Language
 *
 * \see http://harshppatel.gtihub.io
 */


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
 
 /**
 * \brief Function named squareArea which ask user for a number, validates it and calculate area of square and prints it to the console
 * 
 * \fn squareArea
 * 
 *  <P> 
 * 		<STRONG>Attributes</STRONG> : None <br>
 *  	<STRONG>Function type</STRONG> : Void <br>
 *		<STRONG>Variables</STRONG> : 
 *		<UL>
 *			<LI>squareSide : (type: int) To save user input</LI>
 *			<LI>area : (type: float) To save area value</LI>
 *      </UL>
 *  </P>
 *  \code
 * 
 *  Example of Use Of The Method
 *  
 *  squareArea();
 *  
 *  \endcode
 */

void squareArea(){
	/* Variables */
	int squareSide;
	float area;
	
	/* User Input */
	printf("Enter value of Square Side : ");
	scanf("%d", &squareSide);
	
	/* Validation */
	if (squareSide <= 0) {
		printf("Invlaid Input!\n");
		squareArea();
	} else {
		/* Calculate Area */
		area = pow(squareSide, 2);
	
		/* output */
		printf("Area of your square is : %0.2f", area);	
	}	
	
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
 
 /**
 * \brief Function named rectangleArea which ask user for two numbers, validates it and calculate area of rectangle and prints it to the console
 * 
 * \fn rectangleArea
 * 
 *  <P> 
 * 		<STRONG>Attributes</STRONG> : None <br>
 *  	<STRONG>Function type</STRONG> : Void <br>
 *		<STRONG>Variables</STRONG> : 
 *		<UL>
 *			<LI>sideOne : (type: int) To save user input</LI>
 *			<LI>sideTwo : (type: int) To save user input</LI>
 * 			<LI>area : (type: float) To save area value</LI>
 *      </UL>
 *  </P>
 *  \code
 * 
 *  Example of Use Of The Method
 *  
 *  rectangleArea();
 *  
 *  \endcode
 */

void rectangleArea(){
	/* Variables */
	int sideOne, sideTwo;
	float area;
	
	/* User Input */
	printf("Enter value of Side One : ");
	scanf("%d", &sideOne);
	/* Validation */
	if (sideOne <= 0) {
		printf("Invlaid Input!\n");
		rectangleArea();
	} else {
		printf("Enter value of Side Two : ");
		scanf("%d", &sideTwo);
		
		/* Validation */
		if (sideOne <= 0 || sideTwo <= 0){ 
			printf("Invlaid Input!\n");
			rectangleArea();
		} else {	
			/* Calculate Area */
			area = sideOne * sideTwo;
			/* output */
			printf("Area of your rectangle is : %0.2f", area);
		}
	}
}

/*
 * Function 	: circleArea
 * Attributes 	: none
 * Variables	: radius		=> Type: int	=>	To store user input for the value of radius
 *				  area			=> Type: float	=>	To store Area of shape
 * Description  : Take input of circle radius and calculate area
 * Method Type	: void 
 */
 
  /**
 * \brief Function named circleArea which ask user for a number, validates it and calculate area of circle and prints it to the console
 * 
 * \fn circleArea
 * 
 *  <P> 
 * 		<STRONG>Attributes</STRONG> : None <br>
 *  	<STRONG>Function type</STRONG> : Void <br>
 *		<STRONG>Variables</STRONG> : 
 *		<UL>
 *			<LI>radius : (type: int) To save user input</LI>
 * 			<LI>area : (type: float) To save area value</LI>
 *      </UL>
 *  </P>
 *  \code
 * 
 *  Example of Use Of The Method
 *  
 *  circleArea();
 *  
 *  \endcode
 */

void circleArea(){
	/* Variables */
	int radius;
	float area;
	
	/* User Input */
	printf("Enter value of Radius : ");
	scanf("%d", &radius);
	
	/* Validation */
	if (radius <= 0) {
		printf("Invlaid Input!\n");
		circleArea();
	} else {
		/* Calculate Area */
		area = PI * radius * radius;
	
		/* output */
		printf("Area of your circle is : %0.2f", area);
	}
}

/*
 * Function 	: cubeArea
 * Attributes 	: none
 * Variables	: cubeSide		=> Type: int	=>	To store user input for the value of cube Side
 *				  area			=> Type: float	=>	To store Area of shape
 * Description  : Take input of cube side and calculate area
 * Method Type	: void 
 */

 /**
 * \brief Function named cubeArea which ask user for a number, validates it and calculate area of cube and prints it to the console
 * 
 * \fn cubeArea
 * 
 *  <P> 
 * 		<STRONG>Attributes</STRONG> : None <br>
 *  	<STRONG>Function type</STRONG> : Void <br>
 *		<STRONG>Variables</STRONG> : 
 *		<UL>
 *			<LI>cubeSide : (type: int) To save user input</LI>
 * 			<LI>area : (type: float) To save area value</LI>
 *      </UL>
 *  </P>
 *  \code
 * 
 *  Example of Use Of The Method
 *  
 *  cubeArea();
 *  
 *  \endcode
 */

void cubeArea(){
	/* Variables */
	int cubeSide;
	float area;
	
	/* User Input */
	printf("Enter value of side : ");
	scanf("%d", &cubeSide);
	
	/* Validation */
	if (cubeSide <= 0) {
		printf("Invlaid Input!\n");
		cubeArea();
	} else {
		/* Calculate Area */
		area = cubeSide * 12;
		/* output */
		printf("Area of your cube is : %0.2f", area);
	}
}


/*
 * Function 	: coneArea
 * Attributes 	: none
 * Variables	: height		=> Type: int	=>	To store user input for the value of cone height
 *				  radius		=> Type: int	=>	To store user input for the value of cone raidus
 *				  area			=> Type: float	=>	To store Area of shape
 * Description  : Take input of cone height, raidus and calculate area
 * Method Type	: void 
 */
 
  /**
 * \brief Function named coneArea which ask user for two numbers, validates it and calculate area of cone and prints it to the console
 * 
 * \fn coneArea
 * 
 *  <P> 
 * 		<STRONG>Attributes</STRONG> : None <br>
 *  	<STRONG>Function type</STRONG> : Void <br>
 *		<STRONG>Variables</STRONG> : 
 *		<UL>
 *			<LI>height : (type: int) To save user input</LI>
 *			<LI>radius : (type: int) To save user input</LI>
 * 			<LI>area : (type: float) To save area value</LI>
 *      </UL>
 *  </P>
 *  \code
 * 
 *  Example of Use Of The Method
 *  
 *  coneArea();
 *  
 *  \endcode
 */

void coneArea(){
	/* Variables */
	int height, radius;
	float area;
	
	/* User Input */
	printf("Enter value of height : ");
	scanf("%d", &height);
	if (height <= 0) {
		printf("Invlaid Input!\n");
		coneArea();
	} else {
		printf("Enter value of radius : ");
		scanf("%d", &radius);
		
		/* Validation */
		if (height <= 0 || radius <= 0){
			printf("Invlaid Input!\n");
			coneArea();
		} else {
			/* Calculate Area */
			area = PI * radius * (radius + sqrt((height * height) + (radius * radius)));
			
			/* output */
			printf("Area of your cone is : %0.2f", area);
		}
	}
}

/*
 * Function 	: sphereArea
 * Attributes 	: none
 * Variables	: radius		=> Type: int	=>	To store user input for the value of sphere raidus
 *				  area			=> Type: float	=>	To store Area of shape
 * Description  : Take input of sphere raidus and calculate area
 * Method Type	: void 
 */
 
  /**
 * \brief Function named sphereArea which ask user for a number, validates it and calculate area of sphere and prints it to the console
 * 
 * \fn sphereArea
 * 
 *  <P> 
 * 		<STRONG>Attributes</STRONG> : None <br>
 *  	<STRONG>Function type</STRONG> : Void <br>
 *		<STRONG>Variables</STRONG> : 
 *		<UL>
 *			<LI>radius : (type: int) To save user input</LI>
 * 			<LI>area : (type: float) To save area value</LI>
 *      </UL>
 *  </P>
 *  \code
 * 
 *  Example of Use Of The Method
 *  
 *  sphereArea();
 *  
 *  \endcode
 */

void sphereArea(){
	/* Variables */
	int radius;
	float area;
	
	/* User Input */
	printf("Enter value of radius : ");
	scanf("%d", &radius);
	
	/* Validation */
	if (radius <= 0) {
		printf("Invlaid Input!\n");
		sphereArea();
	} else {
		/* Calculate Area */
		area = 4 * PI * radius * radius;
		/* output */
		printf("Area of your cone is : %0.2f", area);
	}
}


/*
 * Function 	: cylinderArea
 * Attributes 	: none
 * Variables	: radius		=> Type: int	=>	To store user input for the value of cylinder raidus
 *				  height		=> Type: int	=>	To store user input for the value of cylinder height
 *				  area			=> Type: float	=>	To store Area of shape
 * Description  : Take input of cylinder height, raidus and calculate area
 * Method Type	: void 
 */

 /**
 * \brief Function named cylinderArea which ask user for two numbers, validates it and calculate area of cylinder and prints it to the console
 * 
 * \fn cylinderArea
 * 
 *  <P> 
 * 		<STRONG>Attributes</STRONG> : None <br>
 *  	<STRONG>Function type</STRONG> : Void <br>
 *		<STRONG>Variables</STRONG> : 
 *		<UL>
 *			<LI>radius : (type: int) To save user input</LI>
 *			<LI>height : (type: int) To save user input</LI>
 * 			<LI>area : (type: float) To save area value</LI>
 *      </UL>
 *  </P>
 *  \code
 * 
 *  Example of Use Of The Method
 *  
 *  cylinderArea();
 *  
 *  \endcode
 */

void cylinderArea(){
	/* Variables */
	int radius, height;
	float area;
	
	/* User Input */
	printf("Enter value of height : ");
	scanf("%d", &height);
	if(height <= 0) {
		printf("Invlaid Input!\n");
		cylinderArea();
	} else {
		printf("Enter value of radius : ");
		scanf("%d", &radius);
		
		/* Validation */
		if (height <= 0 || radius <= 0) {
			printf("Invlaid Input!\n");
			cylinderArea();
		} else {
			/* Calculate Area */
			area = (2 * PI * radius) * (height + radius);
			/* output */
			printf("Area of your cone is : %0.2f", area);
		}
	}
}

/*
 * Function 	: main
 * Attributes 	: none
 * Description  : Calls every method and run them
 * Method Type	: void 
 */
 
 /**
 * \brief main function which runs the program
 * 
 * \fn main
 * 
 *  <P>
 * 		Main functions runs when program runs. <br>
 * 		It prints the instructions and ask for the choice to the user. It uses the while loop to run this calculator continuous. <br>
 *		While loop breaks when user enter 8 in the console. <br>
 *	</P>
 *  <P> 
 * 		<STRONG>Attributes</STRONG> : None <br>
 *  	<STRONG>Function type</STRONG> : Void <br>
 *		<STRONG>Variables</STRONG> : 
 *		<UL>
 *			<LI>userChoice : (type: int) To save user input for the choice of the different options</LI>
 *      </UL>
 *  </P>
 *  
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
		
		/* Validation */
		if (userChoice < 1 || userChoice > 8) {
			printf("Invlaid Input!\n");
		} else {
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
				case 4:
					cubeArea();
					break;
				case 5:
					coneArea();
					break;
				case 6:
					sphereArea();
					break;
				case 7:
					cylinderArea();
					break;
				default:
					return;
			}
		}
	}
}
