#include <iostream>
using namespace std;
int main() {
	double num1, num2, result;
	char operation;
	while(true) {
		cin >> num1 >> operation >> num2;
		switch (operation) {
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			if (num2 != 0) {
				result = num1 / num2;
			}
			else {
				cout << "Error: Division by zero!" << endl;
				return 1; // Exit with error code
			}
			break;
		default:
			cout << "Error: Invalid operator!" << endl;
			return 1; // Exit with error code
		}
		cout<<"Result: " << result << endl;
	}
	return 0; // Exit successfully
}