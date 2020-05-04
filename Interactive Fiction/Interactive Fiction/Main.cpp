// Needed for the program to function
#include <iostream>
// Allows strings to be used
#include <string>
// Allows information from file Header.h to be used here
#include "Header.h"

// Allows you to use cout, cin, ect.
using namespace std;

// Return type - Name of function - Parameters if any()
// Main Function
int main()
{
		// Starts the introduction function
		Introduction();
		// A refrence to the string used to get playerName
		string playerName;
		// Makes sure the program understands that playerName is the same as the function GetPlayerName(); and runs the function
		playerName = GetPlayerName();
		// Starts the function to welcome the player 
		WelcomeThePlayer(playerName);
		// Starts the game function
		OurLastDaysGame(playerName);
		// Starts the end of game function
		EndOfGame(playerName);
}
