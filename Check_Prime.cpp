#include <iostream>

using namespace std;

int checkPrime(int number)
{
	int counter = 0;
	int isPrime;
	for (int i = 2; i < number; i++)
	{
		if (number % i != 0)
		{
			counter++;
		}
	}

	if (counter == (number - 2))
	{
		isPrime = 1;
	}
	else
	{
		isPrime = 0;
	}

	return isPrime;
}
