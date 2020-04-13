#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;

//Starting screen of the game
void Start()
{
	//Formatting still needs work :(
	cout << setfill('-') << setw(80) << "-";
	cout << "\n\nDecision Tree Adventure"  << "\n\n\n\nBy: Christian Caparroso, Benthany Tooley, Garret Weitz, and Ben";
	cout << "\n\n\nPress Enter to Start.\n\n";
	cout << setfill('-') << setw(80) << "-" << endl;

	//Allows user to input enter key, immediately ignores it to not mess with any future inputs
	cin;
	cin.ignore();

	//Clears the screen (will be used very often)
	system("CLS");
}

//Initial scene of story
int Intro()
{
	char decision;
	bool invalid = true;

	//Random story text
	cout << setfill('-') << setw(80) << "-" << endl << endl;
	cout << "You wake up in the middle of a dense forest. When getting up from where you laid \nyou see a stump of one of the large trees. On top of the stump lays a sword and \nshield";
	cout << ", on the side is a bow and a quiver of arrows. It looks like you'll only \nbe able to carry one or the other. Beyond the stump there seems to be the \nbeginning of a path.";
	cout << "\n\nWhat do you decide to do?\n";
	cout << "1. Pick up the sword and shield.\n";
	cout << "2. Pick up the bow and quiver of arrows.\n";
	cout << "3. Pick up neither of two and go on the path.\n\n";
	cout << setfill('-') << setw(80) << "-";

	//Loops until valid choice is given
	while (invalid)
	{
		cout << "\nInput your decision: ";
		cin >> decision;

		//Switch states outputs different return based on output
		switch (decision)
		{
		case '1': invalid = false;
			return 1;
		case '2': invalid = false;
			return 2;
		case '3': invalid = false;
			return 3;
		default: cout << "Invalid input, please try again.";
		}	
	}

	system("CLS");
}

//User begins to go on the path
void Path1(int weapon)
{
	cout << setfill('-') << setw(80) << "-" << endl << endl;
	switch (weapon)
	{
	case 1: cout << "You hold your newly found sword up in the air, inspecting its reflective surface, before tapping your shield with it.";
		break;
	case 2: cout << "After slinging the quiver over your back, you pick up the bow and draw the bowstring, testing its elasticity.";
		break;
	case 3: cout << "Ignoring the tools of violence in front of you, you decide to move on.";
		break;
	}


}

int main()
{
	int weapon;
	Start();
	weapon = Intro();
	Path1(weapon);
}