#pragma once
#include "People.h"

// Sub Class Neighbor 
// This Class should take from the Parent Class People
class Neighbor :
	// Parent Class People
	public People
{
// Public encapsulation
public:
	Neighbor();
	// String for Infected
	string Infected();
	// To Set Infection
	void SetInfection(string ill);
// Private encapsulation
private:
	// String for Ill
	string Ill;

};

