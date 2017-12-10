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

int main()
{
	int number;
	cout << "Enter the number x to get the number of digits in x" << endl;
	cin >> number;
	cout << "The number of digits in " << number << " is " << getLengthOfInt(number) << endl;

    return 0;
}
