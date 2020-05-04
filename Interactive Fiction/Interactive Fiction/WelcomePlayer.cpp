// Needed for the program to function
#include <iostream>
// Allows strings to be used
#include <string>
// Allows information from file Header.h to be used here
#include "Header.h"

// Allows you to use cout, cin, ect.
using namespace std;

// Declares the WelcomeThePlayer function
//void WelcomeThePlayer(string playerName);

// Function that welcomes the player
void WelcomeThePlayer(string playerName)
{
	// Displays text that welcomes the player by name 
	cout << "\nWelcome " << playerName << " will you survive our last days?\n";
}