// Needed for the program to function
#include <iostream>
// Allows srtings to be used
#include <string>
// Allows information from all header files to be used here
#include "Header.h"
#include "People.h"
#include "Neighbor.h"

// Allows you to use cout, cin, ect.
using namespace std;

//Declares the OurLastDaysGame function
//void OurLastDaysGame(string playerName);

// Function for the game
void OurLastDaysGame(string playerName)
{
	   // Varriable Jane for our Neighbor Class
		Neighbor Jane;
		// Displays text for encounter 
		cout << "\n You just turned off the TV. And you don't know if you believe it or not. But you know that you have to make a plan.\n";
		cout << "\n You ask yourself. Do I call my family and friends? Should I go find a gun? Or Should I stay put in my house.\n";
		// Asks player by name what they want to do 
		cout << playerName << "\n 1 - Call family and friends \n 2 - Find a gun \n 3 - Stay home: ";
		// A string that holds the players choice in this function
		string playersChoice;
		// Gets the whole line for what the players choice is 
		getline(cin, playersChoice);
		// If statment for choice one
		if (playersChoice == "1")
		{
			// Displays text to tell the player what happens when they choose the fist option 
			cout << "\nYou called everyone, but no one seemed to answer. The calls went to voice mail or didn't ring at all.\n";
			cout << "\nYou start to worry and decide to keep trying. Until someone answers. Your dad final answers.\n";
			cout << "\nHe tells you not to worry about anyone else and that everything on the news is real.\n";
			cout << "\nHe tells you to prepare for the worst by barricading your house and getting supplies to your car in the garage.\n";
			cout << "\nHe also mentions not to answer the door to anyone. If someones been bit there's no saving them.\n";
			cout << "\nThe line suddenly disconnects. You start barricading the house and gathering supplies.\n";
			// System pause just to slow down the way the program processes
			// Makes you press any button to continue 
			system("pause");
			cout << "\nSuddenly your neighbor Jane knocks on the door. What do you do answer it or let her knock until she leaves?\n";
			// Asks player by name what they want to do next
			cout << playerName << "\n 1 - Answer the door \n 2 - Don't answer the door: ";
			// A string that holds the players choice in this if statment
			string playersChoice1;
			// Gets the whole line for what the players choice is
			getline(cin, playersChoice1);
			// If statment for players choice # one if they orginal chose option 1
			if (playersChoice1 == "1")
			{
				// Displays text to tell the player what happens when they choose their fist option
				cout << "\nYou answer the door and invite her in. She doesn't look infected.\n";
				// Jane Talks
				Jane.Talk("She asks, have you seen what's been going on?.");
				cout << "\n You reply by saying, you've seen everything reported on the news.\n";
				// Jane Talks
				Jane.Talk("She tells you everything she experienced, I was taking a jog and I was being chased by this person that didn't even look human.");
				// Jane Talks
				Jane.Talk("At one point he was able to knock me to the ground, but I picked myself up and kept running until I got here.");
				cout << "\nAfter hearing her story you decide it's best for her to stay with you.\n";
				cout << "\nEventually when night comes around both of you fall asleep. Suddenly you hear a noise.\n";
				// System pause just to slow down the way the program processes
			   // Makes you press any button to continue 
				system("pause");
				system("color 40");
				// Jane Talks
				Jane.Talk("It's Jane. She says I don't feel well I think I'm ");
				// Jane is Infected!
				Jane.Talk(Jane.Infected());
				// Display text to tell you what happens
				cout << "\nThen suddenly she turns and bites you.\n";

			}
			// Else if statment for choice # 2 if the orginaly choose option was 1
			else if (playersChoice1 == "2")
			{
				// Displays text to tell the player what happens when they choose the Second option
				cout << "\nYou decide not to answer the door. But she kept knocking. Soon there was a whole group of zombies heading for her.\n";
				cout << "\nShe refused to stop knocking until you answered. But you never did. Soon the zombies caught up to her at the door\n";
				cout << "\nand she passed away. The rest of the night you had to be quite because the group of zombies we're still outside.\n";
				// System pause just to slow down the way the program processes
			    // Makes you press any button to continue 
				system("pause");
				system("color 20");
				cout << "\nBut you survived to live another night.\n";
			}

		}
		// Else if statment for choice 2
		else if (playersChoice == "2")
		{
			// Displays text to tell the player what happens when they choose their Second option 
			cout << "\nYou head to your garage where there's a safe and you obtain a hand gun.\n";
			cout << "\nYou then decide to start packing items needed for survival. So when the sistuation gets worse you have an escape plan.\n";
			cout << "\nAfter you're done packing you barricade the house so you don't have to worry when you're sleeping.\n";
			// System pause just to slow down the way the program processes
			// Makes you press any button to continue 
			system("pause");
			system("color 20");
			cout << "\nThe rest of the night is quite and you survive for another day.\n";
		}
		// Else if statment to for choice 3
		else if (playersChoice == "3")
		{
			// Displays text to tell the player what happens when they choose the third option 
			cout << "\nYou don't move from where you are sitting and wait.\n";
			cout << "\nAfter some time you hear loud knocking on the door, so you decide to get up and see who it is\n";
			cout << "\nThe person at the door doesn't look normal. They're covered in blood and their clothing is ripped\n";
			cout << "\nalmost as if he'd been mauled by an animal. You move in a quick manner away from the door and he heard it.\n";
			cout << "\nSuddenly he keeps knocking his body on the door. You begin thinking fast, it seems as if the door is going to bust open soon.\n";
			cout << "\nDo you run and lock yourself in the bathroom upsairs or do you find something to defend yourself quickly?\n";
			cout << playerName << "\n 1 - Run and lock yourself in the bathroom \n 2 - Find something to defend yourself with: ";
			// A string that holds the players choice in this else if statment
			string playersChoice3;
			// Gets the whole line for what the players choice is
			getline(cin, playersChoice3);
			// If statment for players choice # one if they orginal chose option 3
			if (playersChoice3 == "1")
			{
				// Displays text to tell the player what happens when they choose their fist option
				cout << "\nYou run and lock yourself in the bathroom upstairs.\n";
				cout << "\nThe man then busts the front door open. And soon the whole house is filled with zombies.\n";
				cout << "\nYou have no choice but to wait for them to clear out. One wrong move and they'll know where you are.\n";
				cout << "\nAfter a while of waiting you don't hear anything. So you unlock the bathroom and walk out.\n";
				cout << "\nyou're able to reach downstairs. But then you heard something from the kitchen. A zombie then runs at you.\n";
				// System pause just to slow down the way the program processes
			   // Makes you press any button to continue 
				system("pause");
				system("color 40");
				cout << "\nAnd you have nothing to defend yourself with. So you atempt to out run it, but you aren't able to.\n";
			}
			// Else if statment for choice # 2 if the orginaly chose option 3
			else if (playersChoice3 == "2")
			{
				// Displays text to tell the player what happens when they choose their Second option
				cout << "\nYou find a baseball bat.\n";
				cout << "\nYou then wait for the zombie to bust through the door. And when he does you hit him in the head with it twice.\n";
				// System pause just to slow down the way the program processes
			    // Makes you press any button to continue 
				system("pause");
				system("color 20");
				cout << "\nYou then decide to barricade the house and you survive for another day.\n";
			}
		}
}