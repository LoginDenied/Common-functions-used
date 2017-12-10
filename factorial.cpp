#include <iostream>

using namespace std;

int factorial(int number)
{
	int factorialValue = 1;
	for (int i = 1; i <= number; i++)
	{
		factorialValue = factorialValue * i;
	}

	return factorialValue;
}

int main()
{
	int numberToProcess;
	cout << "Please enter the number x to convert to x!" << endl;
	cin >> numberToProcess;
	cout << "The x! value of the entered number is: " << factorial(numberToProcess) << endl;

    return 0;
}
