#include <iostream>

using namespace std;

int main()
{
	//Creating variables
	int num1;
	int num2;
	float result;
	int select;

	//Asks the user to enter their first number 
	cout << "Enter first number:  ";

	//Stores user input in the integer 'num1'
	cin >> num1;

	//Asks user to enter second number
	cout << "Enter second number: ";

	//Stores user input in the integer 'num2' 
	cin >> num2;

	//Asks user to choose a operation for the two numbers entered
	cout << "Press 1 to Add, 2 to Subtract, 3 to Multiply, 4 to Divide ";
	cin >> select;

	//Lists all the cases
	switch (select)
	{
		//if the user chooses addition then the numbers are added and the sum is calculated
	case 1:
		result = num1 + num2;
		cout << "Sum is " << result;
		break;

		//if the user chooses sutraction then the numbers are subtracted and the difference is calculated.
	case 2:
		result = num1 - num2;
		cout << "Difference is " << result;
		break;

		//if the user chooses multiplication then the number are multiplied and the product is calculated.
	case 3:
		result = num1 * num2;
		cout << "Product is " << result;
		break;

		//If the user chooses division then the numbers are divided and the quotient is calculated.
	case 4:
		result = num1 / num2;
		cout << "Quotient is " << result;
		break;

		//if the user enters anything else then it shows invalid option
	default:
		cout << "Invalid option selected ";

	}
	return 0;
}