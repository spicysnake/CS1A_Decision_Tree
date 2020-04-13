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
			system("CLS");
			return 1;
		case '2': invalid = false;
			system("CLS");
			return 2;
		case '3': invalid = false;
			system("CLS");
			return 3;
		default: cout << "Invalid input, please try again.";
			break;
		}	
	}
}

//User begins to go on the path
int Path1(int weapon)
{
	char decision;
	bool invalid = true;

	cout << setfill('-') << setw(80) << "-" << endl << endl;
	switch (weapon)
	{
	case 1: cout << "You hold your newly found sword up in the air, inspecting its reflective surface, \nbefore tapping your shield with it...\n\n";
		break;
	case 2: cout << "After slinging the quiver over your back, you pick up the bow and draw the \nbowstring, testing its elasticity...\n\n";
		break;
	case 3: cout << "Ignoring the tools of violence in front of you, you decide to move on...\n\n";
		break;
	}

	cout << "You look around before walking on the path, it seems like these trees go out for \nmiles. The path in front of you looks man made, which relieves you.\n";
	cout << "Going this way seem like a good idea. The sounds of nature and wildlife entertain \nyou for some time, but after 10 minutes of traveling a fork in the road \npresents itself.\n\n";
	cout << "Between the fork there's a sign pointing to each spliting road. The one on the \nright says 'Danger: Wolf Forest', and to the left a signt that read 'Softdew Town'.";

	cout << "\n\nWhat do you decide to do?\n";
	cout << "1. Take the right path. (Wolf Forest)\n";
	cout << "2. Take the left path. (Softdew Town)\n\n";
	cout << setfill('-') << setw(80) << "-";

	while (invalid)
	{
		cout << "\nInput your decision: ";
		cin >> decision;

		switch (decision)
		{
		case '1': invalid = false;
			system("CLS");
			return 1;
		case '2': invalid = false;
			system("CLS");
			return 2;
		default: cout << "Invalid input, please try again.";
			break;
		}
	}
}

int main()
{
	int weapon, location;

	Start();
	weapon = Intro();
	location = Path1(weapon);
}