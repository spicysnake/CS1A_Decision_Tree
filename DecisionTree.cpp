#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;

//Function initialization; basically states that these functions exist just are defined later in the code
void Start();
int Intro();
int Path1(int weapon);
void Forest(int weapon);
void BearSneak(int weapon);
void BearAttack(int weapon);
void BearEnding(int weapon);
void Town(int weapon);
void DragonIgnore();
void DragonFight(int weapon);
void DragonEnding(int weapon);
void GameOver();

int main()
{
	//variables for chooses
	int weapon, location;

	Start();
	weapon = Intro();
	location = Path1(weapon);
	//Takes either forest tree or town tree
	if (location == 1)
	{
		Forest(weapon);
	}
	else
	{
		Town(weapon);
	}
		
}

//Starting screen of the game
void Start()
{
	string input;

	//Formatting still needs work :(
	cout << setfill('-') << setw(80) << "-";
	cout << "\n\nDecision Tree Adventure" << "\n\n\n\nBy: Christian Caparroso, Benthany Tooley, Garret Weitz, and Ben Northroup";
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

//Function to play incase of a game over
void GameOver()
{
	cout << setfill('-') << setw(80) << "-" << endl << endl;
	cout << "The world around becomes dark before a bright light shines in front of you. This " << endl;
	cout << "is the end..." << endl << endl;
	cout << "GAME OVER." << endl << endl;
	cout << "You're adventure has ended, next time your decisions shall be wiser." << endl;
	cout << setfill('-') << setw(80) << "-" << endl << endl;
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
	cout << "Between the fork there's a sign pointing to each spliting road. The one on the \nright says 'Danger: Grizzly Forest', and to the left a signt that read 'Softdew Town'.";

	cout << "\n\nWhat do you decide to do?\n";
	cout << "1. Take the right path. (Grizzly Forest)\n";
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

//User enters the forest
void Forest(int weapon)
{
	char decision;
	bool invalid = true;

	cout << setfill('-') << setw(80) << "-" << endl << endl;
	cout << "As you enter deep into the forest, the light gets darker as the density of trees \ngrow. The path, once made from cobblestone becomes dirt, and soon you find \nyourself aimlessly walking in the forest. ";
	cout << "Before you can turn around and find \nwhere you came from, a loud sound can be heard. 'It almost sounds like someone \nsnoring' you think to yourself. Then you see it, not someone but something.\n";
	cout << "A large black bear, larger than anything you've ever seen. Upon closer inspection \nyou see something else, a girl! She seems to be tied up next the bear, and \nas you look over the two of you make eye ";;
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
			break;
		case '2': invalid = false;
			system("CLS");
			BearAttack(weapon);
			break;
		default: cout << "Invalid input, please try again.";
			break;
		}
	}
}

//User chooses to sneak through the bear
void BearSneak(int weapon)
{
	string input;
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

		cout << "Press Enter to Continue. . .\n\n" << endl;
		cout << setfill('-') << setw(80) << "-" << endl;


		getline(cin, input);
		cin.ignore();
		system("CLS");
		GameOver();
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
			cout << "Press Enter to Continue. . .\n" << endl;
			cout << setfill('-') << setw(80) << "-" << endl;


			getline(cin, input);
			cin.ignore();
			system("CLS");
			BearEnding(weapon);
			break;
		case 2: cout << "Using the sharp tip of one of your arrows, you free the tied girl. She " << endl;
			cout << "silently thanks you before gesturing you to immediately leave from where you came " << endl;
			cout << "from. The two of you know attempt to get past the bear again no big deal...\n\n";

			cout << "Today must be your lucky day, the bear doesn't seem to notice you as you both " << endl;
			cout << "your escape from the forest!\n\n";
			cout << "Press Enter to Continue. . .\n" << endl;
			cout << setfill('-') << setw(80) << "-" << endl;


			getline(cin, input);
			cin.ignore();
			system("CLS");
			BearEnding(weapon);
			break;
		case 3: cout << "Looking for anything to cut the rope you think back to the two weapons on the " << endl;
			cout << "tree stump. It would be great if you had either one to use right now. In that " << endl;
			cout << "instant you accidently step on a tree branch snappping it...\n\n";

			cout << "The bear awakes and grabs you by the waist before throwing you against a nearby " << endl;
			cout << "tree. 'This was a terrible idea' you think to yourself. As you hit the tree " << endl;
			cout << "behind you, you almost instantly pass out, your body immediately giving out...\n\n";

			cout << "Press Enter to Continue. . .\n" << endl;
			cout << setfill('-') << setw(80) << "-" << endl;


			getline(cin, input);
			cin.ignore();
			system("CLS");
			GameOver();
			break;
		}
	}
}

//User chooses to fight the bear
void BearAttack(int weapon)
{
	string input;

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

	cout << "Press Enter to Continue. . .\n";
	cout << setfill('-') << setw(80) << "-" << endl;

	getline(cin, input);
	cin.ignore();
	system("CLS");
	GameOver();
}

//Sucessful ending to bear encounter
void BearEnding(int weapon)
{
	cout << setfill('-') << setw(80) << "-" << endl << endl;

	cout << "You both make your way out of the forest constantly looking back to " << endl;
	cout << "make sure the bear had woken up and chased you. You finally reach the " << endl;
	cout << "divide in the path from earlier when the girl speaks up. \"That way\" " << endl;
	cout << "she then points toward the direction of the town. You both make your " << endl;
	cout << "way into the town, before anything further can be said, a crowd of " << endl;
	cout << "cheer as the rush over to lift you and the girl up." << endl << endl;

	cout << "\"AN ADVENTURER HAS SAVED THE PRINCESS!!!\"" << endl << endl;

	cout << "As it turns out, the small town has a king! And his daughter was taken " << endl;
	cout << "by a local bear who usually prowls the town at night for any left out " << endl;
	cout << "shiny objects. \"My dear daughter, are you okay? Furthermore thank you! " << endl;
	cout << "Many fear the Dire Bear, so that's why we usually allow it to take any " << endl;
	cout << "metallic garbage it may find.\" A short and chubby man wearing an " << endl;
	cout << "elegant crown exclaims." << endl << endl;

	cout << "Using your ";
	switch (weapon)
	{
	case 1: cout << "sword and shield ";
		break;
	case 2: cout << "bow and arrows ";
		break;
	case 3: cout << "bare hands alone ";
		break;
	}
	cout << " you escaped the bear and saved the princess of Softdew!" << endl;
	cout << "Congratulations you have beaten the game!" << endl << endl;
	cout << setfill('-') << setw(80) << "-" << endl << endl;
}

//User chooses to go into the town
void Town(int weapon)
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
			DragonFight(weapon);
			break;
		case '2': invalid = false;
			system("CLS");
			DragonIgnore();
			break;
		default: cout << "Invalid input, please try again.";
			break;
		}
	}
}

//User chooses to fight dragon
void DragonFight(int weapon)
{
	string input;

	cout << setfill('-') << setw(80) << "-" << endl << endl;

	cout << "Mustering up the courage to go head to head with this magical beast you " << endl;
	cout << "grab your ";
	switch (weapon)
	{
	case 1: cout << "sword and shield, ";
		break;
	case 2: cout << "bow and arrows, ";
		break;
	case 3: cout << "well uh, nothing, ";
		break;
	}
	cout << "you attempt to attack the hulking beast from behind!" << endl << endl;

	switch (weapon)
	{
	case 1: cout << "Rushing the flying monster from the behind you hack and slash, but the skin " << endl;
		cout << "is clearly too tough. All of the sudden, the guards and knights follow right " << endl;
		cout << "behind you hitting with all their might to no avail. The dragon in an act of " << endl;
		cout << "retaliation throws everyone of their feet, breathing fire to more buildings. " << endl;
		cout << "That's when you see it. " << endl << endl;

		cout << "A large scar is present on the base of its neck. 'A weak point' " << endl;
		cout << "you think to yourself. You take a deep breathe and get up. You rush forward." << endl << endl;

		cout << "Hit! The dragon shrieks in pain, immediately ceasing its barrage of flames. " << endl;
		cout << "The now lifeless beast falls. People around shocked to see it fall so quick. " << endl << endl;

		cout << "Press Enter to Continue. . .\n" << endl;
		cout << setfill('-') << setw(80) << "-" << endl;

		getline(cin, input);
		cin.ignore();
		system("CLS");
		DragonEnding(weapon);
		break;
	case 2: cout << "You see multiple knights and guards fighting the mighty dragon head on to no " << endl;
		cout << "avail. Placing an arrow into your bow you search for an area to shoot. You " << endl;
		cout << "notice something. The weapons of the people fighting the dragon seem to be " << endl;
		cout << "bouncing right off the skin of the beast. All of the attacks except for one..." << endl << endl;

		cout << "A large scar is present on the base of the back of its neck. 'A weak point' " << endl;
		cout << "you think to yourself. You take a deep breathe and aim. Then release." << endl << endl;

		cout << "Hit! The dragon shrieks in pain, immediately ceasing its barrage of flames. " << endl;
		cout << "The now lifeless beast falls. People around shocked to see it fall so quick. " << endl << endl;

		cout << "Press Enter to Continue. . .\n" << endl;
		cout << setfill('-') << setw(80) << "-" << endl;

		getline(cin, input);
		cin.ignore();
		system("CLS");
		DragonEnding(weapon);
		break;
	case 3: cout << "Honestly, I don't know what you expect. This is a dragon. You are equipped" << endl;
		cout << "equipped with nothing. You chose nothing. Well let's see how this goes..." << endl << endl;
		cout << "You jump on the back of the dragon and don't last a minute before being " << endl;
		cout << "thrown and landing on your back. The dragon now places all attention on you. " << endl;
		cout << "I don't want to describe the rest." << endl << endl;

		cout << "Press Enter to Continue. . .\n";
		cout << setfill('-') << setw(80) << "-" << endl;

		getline(cin, input);
		cin.ignore();
		system("CLS");
		GameOver();
		break;
	}
}

//User chooses to ignore the dragon
void DragonIgnore()
{
	string input;

	cout << setfill('-') << setw(80) << "-" << endl;
	cout << "'Screw this!' you think to yourself, running towards the closest area " << endl;
	cout << "for cover. You are now hiding behind a wagon, a wagon full of hay. Before " << endl;
	cout << "any thought can pass through your head, you feel warmth behind you. It " << endl;
	cout << "gets hotter and hotter. You turn around and the whole wagon is on fire! " << endl << endl;
	cout << "As you attempt to get away and quickly turn your head to see the head of " << endl;
	cout << "Followed by a bright red and orange spire light" << endl << endl;

	cout << "Press Enter to Continue. . .\n";
	cout << setfill('-') << setw(80) << "-" << endl;

	getline(cin, input);
	cin.ignore();
	system("CLS");
	GameOver();
}

//Sucessfull ending to dragon encounter
void DragonEnding(int weapon)
{
	cout << setfill('-') << setw(80) << "-" << endl << endl;

	cout << "You get up from where you were and look around. Some building around " << endl;
	cout << "are still on fire, but it seems that the villagers are being quick to " << endl;
	cout << "clean up the mess, using buckets of water. \"The villain has fallen!\" " << endl;
	cout << "a villager shouts before rushing to the aid of some of the other guards. " << endl;
	cout << "Then a group of them come over to you as well of some of those who " << endl;
	cout << "fought picking you up and celebrating in mass." << endl << endl;

	cout << "\"AN ADVENTURER HAS SAVED THE TOWN AND BEATEN THE DRAGON!!!\"" << endl << endl;

	cout << "As it turns out, the small town has a king! A short and stock man comes " << endl;
	cout << "from out of the a large building resembling that of a town hall followed " << endl;
	cout << "by a set of guards. \"My, my how can we ever repay you! Our kingdom has " << endl;
	cout << "has had to relocate time and time again because of the dreaded dragon " << endl;
	cout << "attacks we'd experienced.\" He raises his arms as the crowd begins " << endl;
	cout << "cheering again." << endl << endl;

	cout << "Using your ";
	switch (weapon)
	{
	case 1: cout << "sword and shield ";
		break;
	case 2: cout << "bow and arrows ";
		break;
	}
	cout << " you slayed the dragon attacked Softdew town!" << endl;
	cout << "Congratulations you have beaten the game!" << endl << endl;
	cout << setfill('-') << setw(80) << "-" << endl << endl;
}