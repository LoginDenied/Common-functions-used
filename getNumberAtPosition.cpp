// This program require getLengthOfInt

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

int main()
{
	int number;
	int position;

	cout << "Enter the number x" << endl;
	cin >> number;
	while (true)
	{
		cout << "Enter the position in the number x you want the digit of" << endl;
		cin >> position;
		if (position <= getLengthOfInt(number))
		{
			break;
		}
		else
		{
			cout << "The number entered does not have that many digits, please try again" << endl;
			cout << "Please enter a value between 1 and " << getLengthOfInt(number) << endl;
		}
	}
	cout << "Position number " << position << " in " << number << " is " << getNumberAtPosition(number, position) << endl;

	return 0;
}
