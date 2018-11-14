// TriviaGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "TriviaFactory.h"
#include "PlayerRecord.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{
	string playerName;
	cout << "Please enter a player name: ";
	getline(cin, playerName);

	auto pr = std::make_unique<PlayerRecord>(playerName);

	cout << "0 - Shut down.\n"
		<< "9 - Print Menu.\n";

	int input;
	auto tf = std::make_unique<TriviaFactory>();

	while (cin >> input)
	{
		cout << endl;

		if (input == 0)
		{
			tf.reset();
			break;
		}
		else if (input == 9)
		{
			tf->printTriviaMenu();
		}
		else
		{
			// Here will need to create the type of trivia game
			// and use that pointer to play the game itself.
			// After tha point the player should be able to leave the game
			// and create a new kind of trivia game.
		}
	}

	cout << "Hello World!" << endl;
}
