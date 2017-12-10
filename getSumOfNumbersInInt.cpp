// This program require getLengthOfInt and getNumberAtPosition

#include <iostream>

using namespace std;

int getLengthOfInt(int number)
{
	int length = 1;
	while (number > 9)
	{
		number = number / 10;
		length++;
	}

	return length;
}

int getNumberAtPosition(int number, int position)
{
	int temp;
	int numberAtPosition;
	temp = number / pow(10, (getLengthOfInt(number) - position));
	numberAtPosition = temp % 10;

	return numberAtPosition;
}

int getSumOfNumbersInInt(int number)
{
	int sum = 0;

	for (int i = 1; i <= getLengthOfInt(number); i++)
	{
		sum = sum + getNumberAtPosition(number, i);
	}

	return sum;
}

int main()
{
	int number;

	cout << "Enter the number x to get the sum of its digits" << endl;
	cin >> number;
	cout << "The sum of the digits in " << number << " is " << getSumOfNumbersInInt(number) << endl;

	return 0;
}
