#include <iostream>
using namespace std;


int main() {
	int num1, num2;
	char Operation;
	cout << "Welcome to the Basic Calculator " << endl;
	cout << "Enter expression (e.g. 22 + 13):	";
	cin >> num1 >> Operation >> num2;
	switch (Operation) {
	case '+':
		cout << "Result = " << num1 + num2;
		break;
	case '-':
		cout << "Result = " << num1 - num2;
		break;
	case '*':
		cout << "Result = " << num1 * num2;
		break;
	case '/':
		if (num2 == 0)
			cout << "Error Cannot Divide by zero!! " << endl;
		else {
			cout << "Result = " << num1 / num2;
			break;
		}
	default:
		cout << "Invalid Operator!";
	}
}