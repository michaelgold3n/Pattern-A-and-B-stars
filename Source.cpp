/*Lab Assignment_B.Green.cpp
Bryce Green
2/20/2021
Version 1.6
The program displays two patterns side by side starting with a for loop and within that loop
there are three more for loops that print out the plus signs within a specific parameter.*/

#include <iostream>
using namespace std;

int main()
{
	for (int lines = 1; lines < 11; lines++) //defining lines as a variable, the limitations and adding 1 to the variable. for loop representing each line
	{
		for (int number = 0; number < lines; number++) //defining number as a variable, the limitations and adding 1 to the variable. Prints out + each line while adding one + to each line. Pattern A
		{
			cout << "+"; //prints +
		}

		for (int space = 11; space > lines; space--) //defines space as a variable, represents spaces between each of the patterns
		{
			cout << " "; //prints space
		}

		for (int integer = 11; integer > lines; integer--)// Pattern B, defines integer as a variable, creates limitations and starts with 11 and subtracts each time until it gets smaller than lines.
		{
			cout << "+"; //prints +
		}
		
		cout << endl; //creating each line after the previous for statements
	}


}