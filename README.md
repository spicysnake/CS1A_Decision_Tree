# CS1A_Decision_Tree

Decision Tree 5 Minute Story Plot (User Choice)
Group Members: Benjamin Northroup, Garret Weitz, Christian Caparosso, Bethany Tooley

Team Lead: Christian

2-3 Page documentation: Bethany

Algorithm: Ben

PPT Presentation: Garret, Bethany, Christian

Code: Christian

APA Work Cited: Bethany 



Documentation
Written By: Bethany Tooley


Introduction:
The program will take the user through different scenarios pertaining to each choice they make. The story takes place in a forest where your survival is imminent, and your fate is concealed by the choices that you make leading up to the end. Giving the user full control over their fate, this program creates an engaging and fun experience for that reason.  Getting to choose your own adventure as the protagonist who chooses their own fate through the plot that leads to many options that will then lead to one of many endings.
In this game, the user starts off as an unaccompanied protagonist who is given a specific number of choices that will set him off onto his path.  Each choice develops a new and unseen path as the last choice.  

General Walkthrough:
Program begins with a user prompt that creates a starting point where they can choose what to do next.  It describes the user waking up  in a forest with nothing except a sword and shield, a bow and  arrows.  The user will choose which weapon to choose, or neither, if they so wish.  This decision will greatly impact their future encounters that will be present within the storyline.  The next part of the story will describe a pathway that has been encountered with a sign that warns “Danger: Wolf Forest''.  It will then prompt to choose the “right path”, leading to a place called Wolf Forest, or take the “left path” leading to Softdew Town.  If the user enters to go towards the path on the right, it will lead you to the next story.  The description states the user has walked down a long pathway only to meet a sleeping bear keeping guard of a girl who is tied up, begging for help. Given two choices, you can either sneak past the bear without awakening it, or attack the bear head on.  Depending on your weapon choices, this will greatly affect if you will survive and free the girl and win the game or continue to the next part of the story, or if you will die and it is game over.  If you pass on taking the right path and take the left path to Softdew forest, you will run into a dragon attacking a village. The user is given two choices; run for safety, or protect the villagers against the dragon. With your weapon choice in mind, picking the right decision is imminent for your survival.  Picking the first choice, a scenario will pop up where the user will aggress the dragon with whatever weapon they have(or don’t have).  Choosing a sword, for example, will help a lot more than bearing no weapons.  If you choose to run away from the scene, it may end badly no matter what weapon you have.  But one of these plots that the user chooses will ultimately end up with beating the game. 

Features Within the Code(How it works):
The code uses conditional and switch statements to shape the story and create a user-choice interface. Creating multiple functions for each section of the story(ie. int Intro () and int Path1()), it clearly defines each section of the storyline with each of its own input and outputs.  Within these functions contains boolean, switch statements, and while loops. In most functions, bool invalid = true is initialized to true, having the object invalid, standing for invalid user input, giving a true value. There is also switch statements (identified as switch(weapon) ) used throughout the code, which changes the initial value of the inputted variable that the user chose as a way to identify the specific scenario that correlates to that choice. 

How To Use:
Choosing your adventure is the main purpose of this game.  User is given a cue to choose what decision they want to make.  The game will give two to three options labeled by number.  If, for example, the user wants to pick choice number one, they will simply input 1 and press enter to apply the choice. Beware that decisions cannot be taken back and the story will proceed, so choose carefully!  After the choice is inputted, a new story will be stated, and it may or may not be the end of your adventure depending on your decision.  If you have another list of choices, repeat the first step by inputting the number that is given with the option.  If there are no choices given, there will be a description stating that you have died due to the consequence of the choice you made.  The goal of this game is to stay alive as long as possible through each scenario given. There are scenarios where you can beat the game, but the chances are slim.   Make one wrong choice, and your fate will be determined.
