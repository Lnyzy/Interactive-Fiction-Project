// Allows information from file Neighbor.h to be used here
#include "Neighbor.h"
// Needed for the program to function
#include <iostream>
// Allows strings to be used here
#include <string>

// Allows you to use cout, cin, ect.
using namespace std;

// What makes Neighbor different
// Neighbors are Infected
string Neighbor::Infected()
{
	// Returns Ill
	return Ill;
}
// Sets Infection
void Neighbor::SetInfection(string ill)
{
 // Ill and ill mean the same thing
	Ill = ill;
}
// This  is a constructor 
// it only runs once when an object is made the first time
// it runs once for each object
Neighbor::Neighbor()
{
	// Ill = infected
	Ill = "infected";
}



