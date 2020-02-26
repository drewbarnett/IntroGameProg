// GPRO-FW-Launcher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "GPRO-FW-DB/header.h"

int main()
{
	int playerGuess;
	//int test = Foo(9000);
	srand(time(0));
	bool correct = false;
	bool Quit = false;

	do
	{ 	
	int randAge = rand() % 100;
	printScreen();
		do
		{
			cin >> playerGuess;
		
			cout << "This is your guess: " << playerGuess << endl << endl;
			/*
			Instead of playerGuess, make a function that uses a function instead
			printNewScreen();
			*/
			correct = checkAge(playerGuess, randAge);
		} while (correct == false);

	printWinScreen();
	Quit = playAgain();
	} while (Quit == true);
	return 0;
}