// Needed for the program to function
#include <iostream>
// Allows strings to be used
#include <string>
// Allows information from file Header.h to be used here
#include "Header.h"

// Allows you to use cout, cin, ect.
using namespace std;

// Declares the GetPlayerName function
//string GetPlayerName();

// Function to get the players name
string GetPlayerName()
{
	// A string that holds the playerName
	string playerName;
	// Displays text to ask for the users name 
	cout << "\nPlease Enter your name: ";
	// Get Player name
	getline(cin, playerName);
	// Return player name to pass to other functions
	return playerName;

}