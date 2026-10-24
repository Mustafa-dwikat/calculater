#include <iostream>
using namespace std;
#include <string>
int main() {
	
	float x = 0, y = 0;
	char operation;
	cout << "Welcome to the calculater\n"	;
	cout << "Choose an operation (+, -, *, /): ";
	cin >> operation;
	if (operation == '+' || operation == '-' || operation == '*' || operation == '/')
		cout << "What is the first number? : " &&
		cin >> x &&
		cout << "What is the second? : " &&
		cin >> y;
	else { cout << "Invalid operation"; 
	
		return 7;
	}


	if (operation == '+')
		cout << x << "+" << y << " = " << x + y;
	else if (operation == '-')
		cout << x << "-" << y << " = " << x - y;
	else if (operation == '*')
		cout << x << "*" << y << " = " << x * y;
	else 
	{
		cout << x << "/" << y << " = " << x / y;
		return 1;
	}
}