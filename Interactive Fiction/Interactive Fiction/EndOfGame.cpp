// Needed for the program to function
#include <iostream>
// Allows strings to be used
#include <string>
// Allows information from file Header.h to be used here
#include "Header.h"

// Allows you to use cout, cin, ect.
using namespace std;

// Declares the EndOfGame function
//void EndOfGame(string playerName);

// Function for the end of game 
void EndOfGame(string playerName)
{
	// Display text to thank the player and say goodbye
	cout << "\nThank you " << playerName << " for playing Our Last Day\n";
}