#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;

//Starting screen of the game
void Start()
{
	string input;

	//Formatting still needs work :(
	cout << setfill('-') << setw(80) << "-";
	cout << "\n\nDecision Tree Adventure"  << "\n\n\n\nBy: Christian Caparroso, Benthany Tooley, Garret Weitz, and Ben";
	cout << "\n\n\nPress Enter to Start.\n\n";
	cout << setfill('-') << setw(80) << "-" << endl;

	//Uses getline to take input incase user types anything
	getline(cin, input);

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

void BearSneak(int weapon)
{
	int chance = rand() % 20;

	cout << setfill('-') << setw(80) << "-" << endl << endl;
	cout << "You take a deep breath before slowly trying to sneak pass the enormous beast in " << endl;
	cout << "front of you. As you get closer, you get a better look at it. It must be at " << endl;
	cout << "10 feet tall, and for some reason its wearing a crown..." << endl << endl;

	if (chance == 19)
	{
		cout << "A branch snaps as you step on it. 'Damn'. The bear's eyes snap open, giving you " << endl;
		cout << "only one option, fight up close and personal.\n";
		switch (weapon)
		{
		case 1: cout << "You rush the bear at full speed, sword raised in the air, shield to your \nside. This bear is getting a beating...\n\n";
			cout << "You barely get a swing with your sword before the bear wakes up angered, throwing " << endl;
			cout << "your sword to the side.\n\n";
			break;
		case 2: cout << "You rush the bear at full speed, arrow knocked in your bow. This bear is \ngetting a beating...\n\n";
			cout << "You barely get to shoot an arrow at the bear before it wakes up angered taking and " << endl;
			cout << "snapping your bow in half.\n\n";
			break;
		case 3: cout << "You rush the bear at full speed, fists at the ready. This bear is getting a \nbeating...\n\n";
			cout << "You barely get a hit on the bear before it wakes up angered and ready to destroy " << endl;
			cout << "you.\n\n";
			break;
		}

		cout << "The bear grabs you and shakes you around before throwing you against a nearby " << endl;
		cout << "tree. 'This was a terrible idea' you think to yourself. As you hit the tree " << endl;
		cout << "behind you, you almost instantly pass out, your body immediately giving out...\n\n";

		cout << setfill('-') << setw(80) << "-" << endl << endl;
	}
	else
	{
		cout << "Luckily you make it past the bear!" << endl;
		switch (weapon)
		{
		case 1: cout << "Using the sharp tip of the blade, you free the tied girl. She silently thanks " << endl;
			cout << "you before gesturing you to immediately leave from where you came from. The two of " << endl;
			cout << "you know attempt to get past the bear again no big deal...\n\n";

			cout << "Today must be your lucky day, the bear doesn't seem to notice you as you both " << endl;
			cout << "your escape from the forest!\n\n";
			cout << setfill('-') << setw(80) << "-" << endl << endl;
			break;
		case 2: cout << "Using the sharp tip of one of your arrows, you free the tied girl. She " << endl;
			cout << "silently thanks you before gesturing you to immediately leave from where you came " << endl;
			cout << "from. The two of you know attempt to get past the bear again no big deal...\n\n";

			cout << "Today must be your lucky day, the bear doesn't seem to notice you as you both " << endl;
			cout << "your escape from the forest!\n\n";
			cout << setfill('-') << setw(80) << "-" << endl << endl;
			break;
		case 3: cout << "Looking for anything to cut the rope you think back to the two weapons on the " << endl;
			cout << "tree stump. It would be great if you had either one to use right now. In that " << endl;
			cout << "instant you accidently step on a tree branch snappping it...\n\n";

			cout << "The bear awakes and grabs you by the waist before throwing you against a nearby " << endl;
			cout << "tree. 'This was a terrible idea' you think to yourself. As you hit the tree " << endl;
			cout << "behind you, you almost instantly pass out, your body immediately giving out...\n\n";

			cout << setfill('-') << setw(80) << "-" << endl << endl;
			break;
		}
	}
}

void BearAttack(int weapon)
{
	cout << setfill('-') << setw(80) << "-" << endl << endl;
	switch (weapon)
	{
	case 1: cout << "You rush the bear at full speed, sword raised in the air, shield to your \nside. This bear is getting a beating...\n\n";
		cout << "You barely get a swing with your sword before the bear wakes up angered, throwing " << endl;
		cout << "your sword to the side.\n\n";
		break;
	case 2: cout << "You rush the bear at full speed, arrow knocked in your bow. This bear is \ngetting a beating...\n\n";
		cout << "You barely get to shoot an arrow at the bear before it wakes up angered taking and " << endl;
		cout << "snapping your bow in half.\n\n";
		break;
	case 3: cout << "You rush the bear at full speed, fists at the ready. This bear is getting a \nbeating...\n\n";
		cout << "You barely get a hit on the bear before it wakes up angered and ready to destroy " << endl;
		cout << "you.\n\n";
		break;
	}

	cout << "The bear grabs you and shakes you around before throwing you against a nearby " << endl;
	cout << "tree. 'This was a terrible idea' you think to yourself. As you hit the tree " << endl;
	cout << "behind you, you almost instantly pass out, your body immediately giving out...\n\n";

	cout << setfill('-') << setw(80) << "-" << endl << endl;
}

int Forest(int weapon)
{
	char decision;
	bool invalid = true;

	cout << setfill('-') << setw(80) << "-" << endl << endl;
	cout << "As you enter deep into the forest, the light gets darker as the density of trees \ngrow. The path, once made from cobblestone becomes dirt, and soon you find \nyourself aimlessly walking in the forest. ";
	cout << "Before you can turn around and find \nwhere you came from, a loud sound can be heard. 'It almost sounds like someone \nsnoring' you think to yourself. Then you see it, not someone but something.\n";
	cout << "A large black bear, larger than anything you've ever seen. Upon closer inspection \nyou see something else, a girl! She seems to be tied up next the bear, and \n as you look over the two of you make eye ";;
	cout << "contact, and she begins to call \nyou over for help.\n\n";

	cout << "It seems like there are only two options:\n";
	cout << "1. Attempt to sneak past the sleeping bear.\n";
	cout << "2. Attack the bear head on.\n\n";
	cout << setfill('-') << setw(80) << "-";

	while (invalid)
	{
		cout << "\nInput your decision: ";
		cin >> decision;

		switch (decision)
		{
		case '1': invalid = false;
			system("CLS");
			BearSneak(weapon);
			return 1;
		case '2': invalid = false;
			system("CLS");
			BearAttack(weapon);
			return 2;
		default: cout << "Invalid input, please try again.";
			break;
		}
	}
}

int Town(int weapon)
{
	char decision;
	bool invalid = true;

	cout << setfill('-') << setw(80) << "-" << endl << endl;
	cout << "After walking for a few more minutes the trees to your sides clear up as you're \npresented with the sight of a cozy town, followed by the screams of villagers \nwho are running by. You rush to see what ";
	cout << "the ruckus is all about when there \nthere it is, a large red dragon breathing fire on the homes of this village. You \nnotice the local guard attempting to fight back against the fiery beast.\n";
	cout << "It does seem like they could use some help, but then again why not just run for \nsafety!\n\n";

	cout << "It seems like there are only two options:\n";
	cout << "1. Help the town against the dragon.\n";
	cout << "2. Ignore and run towards safety.\n\n";
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
	int weapon, location, bear1;

	Start();
	weapon = Intro();
	location = Path1(weapon);
	if (location == 1)
	{
		bear1 = Forest(weapon);
	}
	else
	{
		Town(weapon);
	}
		
}