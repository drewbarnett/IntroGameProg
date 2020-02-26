#include "GPRO-FW-DB/header.h"
int guess;

int Foo(int bar)
{
	return(bar + 1);
}

void printScreen() 
{
	cout << "Hello, Please guess my age: ";
}

bool checkAge(int guess, int age) 
{
	if (guess < age)
	{
		cout << "Higher!" << endl;
		return false;
	}
	else if (guess > age)
	{
		cout << "Lower!" << endl;
		return false;
	}
	else
		return true;
}

void printNewScreen()
{
	cout << "These are your guesses so far: " << endl;
}

void printWinScreen() 
{
	cout << "You Win!" << endl;
}

bool playAgain() 
{
	bool checker = false;
	char input;

	cout << "Play Again? (Y/N)" << endl;
	cin >> input;
	if (input == 'Y' || input == 'y')
	{
		system("cls");
		checker = true;
	}
	else if (input == 'N' || input == 'n')
		checker = false;
	return checker;
}