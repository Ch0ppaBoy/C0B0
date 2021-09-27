/* -----------------------------------------------------------------------------
FILENAME:			Calculator.cpp
DESCRIPTION:         
COMPILER:           MiniGW 
NOTES:              
   
MODIFICATION HISTORY:

Author             Date               Version
---------------    ----------         --------------
Chayton Zuniga		2021-09-20			1.0-Input correct file & function headers, -notes and returns,
											as well as added all of my #includes.
Chayton Zuniga		2021-09-22			1.1-created cases for my menu as well as the basic foundation for 
											main menu functions.	
Chayton Zuniga		2021-09-24			1.2- Created functions for other mathematic functions,
											as well as linked them to their cases and got them to work.
Chayton Zuniga		2021-09-26			1.3- Created if, or, else, statement to adjust for 0
											in the division operation.
Chayton Zuniga		2021-09-27			1.4- 
----------------------------------------------------------------------------- */

#include <iostream>
#include <cctype>
#include <iomanip>
#include <cmath>
#include <string>
#include <stdlib.h>

using namespace std;

const string PROGRAMMER_NAME = "Chayton Zuniga";   

float y, x, sum;

char Get_Choice();			 
void Add_2_Numbers();		
void Get_x_and_y();
void Subtract_2_Numbers();
void Multiply_2_Numbers();
void Divide_2_Numbers();
/* -----------------------------------------------------------------------------
FUNCTION:          main()
DESCRIPTION:       Excutes Add_2_Numbers and Get_Choice in a loop
RETURNS:           0
NOTES:             This is the while loop that uses the other two functions of the program.
----------------------------------------------------------------------------- */
int main()
{	
	char choice;

	bool running = true;   

	system("cls");
	while (running)
	{
		choice = Get_Choice();
		switch (choice)
		{
	
			case 'a':
				Add_2_Numbers();
					break;
			
			case'b':
				Subtract_2_Numbers();
					break;
			
			case 'c':
				Multiply_2_Numbers();
					break;

			case 'd':
				Divide_2_Numbers();
				break;

/*			case 'e':
				Powers_Roots();
				break;
*/
			case 'q':
				running = false;	 
				break;				
		}
	}

	cout << "Goodbye! \n";			
	cout << "Programmed by: " << PROGRAMMER_NAME << " -- ";
	cout << __DATE__ << "  " __TIME__ << endl;
	cout << endl;
	
	system("pause");
	return 0;
}

/* -----------------------------------------------------------------------------
FUNCTION:          Get_Choice
DESCRIPTION:       Creates a menu with varying choices of variables to choose from
RETURNS:           Choice
NOTES:             Only two create resulsts being, qutting the program and adding the sum x & y
----------------------------------------------------------------------------- */
char Get_Choice()
{

	char choice;
	
						
	cout << endl << endl;
	cout << " WELCOME to the CALCULATOR PRACTICE PROGRAM." << endl << endl; 
	cout << "This program allows you to practice your math skills." << endl << endl;
	cout << "Choose what you want to practice in the menu shown below." << endl <<endl;
	cout << "		Main Menu" << endl << endl;
	cout << endl << endl;
	cout << "	a	Addition" << endl << endl;
	cout << "	b	Subtraction" << endl << endl;
	cout << "	c	Multiplication" << endl << endl;
	cout << "	d	Division" << endl << endl;
	cout << "	e	Powers & Roots" << endl << endl;
	cout << "	q	Quitting " << endl << endl; 
	cout << endl << endl;
	cout << "Enter your choice [ a - e, q ]: ";
	cin >> choice;
	cout << endl << endl;


	choice = tolower(choice);
	if (choice >= 'a' &&  choice <= 'q')
		cout << "You entered: '" << choice << "', that is correct input ." << endl;
	else
	{
		cout << "You did not enter 'a','b' or 'c'." << endl;
		cout << "Please rerun the program." << endl;
	}

	cout << endl;

	return (choice);
}
/* -----------------------------------------------------------------------------
FUNCTION:          Add_2_Numbers
DESCRIPTION:       Takes two numbers and adds them.
RETURNS:           0 
NOTES:             removed the x and y input into its own function 
----------------------------------------------------------------------------- */
void Add_2_Numbers()
{
	Get_x_and_y();
	 
	 sum= x + y;

	
	cout << endl << endl;
	cout << endl << endl;
	cout << "	x + y = "<< x << " + " << y
		 << " = " << sum << endl; 
	cout << endl << endl;
}
/* -----------------------------------------------------------------------------
FUNCTION:          Get_x_and_y()
DESCRIPTION:       Lets you input values for x and y 
RETURNS:           0 
NOTES:             Also created a way to move it between functions
----------------------------------------------------------------------------- */
void Get_x_and_y()
{
cout << "Please input x and y: ";
	cin >> x;
	cin >> y;

	 
}

/* -----------------------------------------------------------------------------
FUNCTION:          Subtract_2_Numbers
DESCRIPTION:       Subtracts given x & y variables.
RETURNS:           .b
b
NOTES:             .
----------------------------------------------------------------------------- */

void Subtract_2_Numbers()
{
	Get_x_and_y();
	
	sum = x - y;

cout << endl << endl;
	cout << endl << endl;
	cout << "	x - y = "<< x << " - " << y
		 << " = " << sum << endl; 
	cout << endl << endl;
}


/* -----------------------------------------------------------------------------
FUNCTION:          Multiply_2_Numbers
DESCRIPTION:       Multiplies given x & y variables.
RETURNS:           .
NOTES:             .
----------------------------------------------------------------------------- */
void Multiply_2_Numbers()
{
	Get_x_and_y();

	sum = x * y;

	cout << endl << endl;
	cout << endl << endl;
	cout << "	x * y = "<< x << " * " << y
		 << " = " << sum << endl; 
	cout << endl << endl;
}

/* -----------------------------------------------------------------------------
FUNCTION:          Divide_2_Numbers()
DESCRIPTION:       Divides given x & y variables
RETURNS:           .
NOTES:             .
----------------------------------------------------------------------------- */
void Divide_2_Numbers()
{
	Get_x_and_y();

	sum = x / y;

	if (x ==0 || y==0)
		cout << "Arthemtic error enter a value >= 1" << endl << endl;
	else 
	{
	cout << endl << endl;
	cout << endl << endl;
	cout << "	x / y = "<< x << " / " << y
		 << " = " << sum << endl; 
	cout << endl << endl;
	}
	
}

















/* -----------------------------------------------------------------------------
FUNCTION:          .
DESCRIPTION:       .
RETURNS:           .
NOTES:             .
----------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
FUNCTION:          .
DESCRIPTION:       .
RETURNS:           .
NOTES:             .
----------------------------------------------------------------------------- */


/* -----------------------------------------------------------------------------
FUNCTION:          .
DESCRIPTION:       .
RETURNS:           .
NOTES:             .
----------------------------------------------------------------------------- */