# areaCalculator

An C language, console based program which provides different options to the user to calculate its area. It have different methods for all different shapes and switch statement is used to check user input. While loop is used to run this function continuously. But it breaks the loop when user enters 8 in the console.

See Documentation [here](https://harshppatel.github.io/area%20Calculator%20Documentation%20C%20Language/area_calculator_8c.html).

### includes :
- stdio.h
- conio.h
- math.h
- stdbool.h

### Global Variables :
- **PI** : 3.14159

### Included Methods : 
- squareArea
- circleArea
- rectengleArea
- cubeArea
- coneArea
- sphereArea
- cylinderArea

### Included Shapes : 
- Square
- Circle
- Rectangle
- Cube
- Cone
- Sphere
- Cylinder

More will be added soon!!

## Methods
- ### Square Area Method
	- **Name** : squareArea
	- **Type** : void
	- **Attributes** : none
	- **Variables** : 2 Varialbles
		- **squareSide**
			- **Type** : int
			- **Description** : stores user input of side value	
		- **area**
			- **Type** : float
			- **Description** : stores value of area
	- **Description** : Takes input of square side and calculates area of square

- ### Rectangle Area Method
	- **Name** : rectangleArea
	- **Type** : void
	- **Attributes** : none
	- **Variables** : 3 Varialbles
		- **sideOne**
			- **Type** : int
			- **Description** : stores user input of side One value	
		- **sideTwo**
			- **Type** : int
			- **Description** : stores user input of side Two value	
		- **area**
			- **Type** : float
			- **Description** : stores value of area
	- **Description** : Takes input of rectangle sides and calculates area of rectangle

- ### Circle Area Method
	- **Name** : circleArea
	- **Type** : void
	- **Attributes** : none
	- **Variables** : 2 Varialbles
		- **radius**
			- **Type** : int
			- **Description** : stores user input of radius value	
		- **area**
			- **Type** : float
			- **Description** : stores value of area
	- **Description** : Takes input of circle radius and calculates area of rectangle

- ### Cube Area Method
	- **Name** : cubeArea
	- **Type** : void
	- **Attributes** : none
	- **Variables** : 2 Varialbles
		- **cubeSide**
			- **Type** : int
			- **Description** : stores user input of cube side value	
		- **area**
			- **Type** : float
			- **Description** : stores value of area
	- **Description** : Takes input of cube side and calculates area of square

- ### Cone Area Method
	- **Name** : coneArea
	- **Type** : void
	- **Attributes** : none
	- **Variables** : 3 Varialbles
		- **height**
			- **Type** : int
			- **Description** : stores user input of height value	
        - **radius**
			- **Type** : int
			- **Description** : stores user input of radius value	
		- **area**
			- **Type** : float
			- **Description** : stores value of area
	- **Description** : Takes input of cone height, radius and calculates area of square

- ### Sphere Area Method
	- **Name** : sphereArea
	- **Type** : void
	- **Attributes** : none
	- **Variables** : 2 Varialbles
		- **radius**
			- **Type** : int
			- **Description** : stores user input of radius value	
		- **area**
			- **Type** : float
			- **Description** : stores value of area
	- **Description** : Takes input of Sphere Radius and calculates area of square

- ### Cylinder Area Method
	- **Name** : cylinderArea
	- **Type** : void
	- **Attributes** : none
	- **Variables** : 3 Varialbles
		- **radius**
			- **Type** : int
			- **Description** : stores user input of radius value	
		- **height**
			- **Type** : int
			- **Description** : stores user input of height value	
		- **area**
			- **Type** : float
			- **Description** : stores value of area
	- **Description** : Takes input of Cylinder height, radius and calculates area of square
