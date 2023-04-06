#include<iostream>
#include "FPlayer.h"
#include "Fgoblin.h"
#include "Fslime.h"


using namespace std;

int main()
{
	FPlayer* Player = new FPlayer();
	FGoblin* Goblin = new FGoblin();
	FSlime* Slime = new FSlime();

	Player->Move();
	Goblin->Move();
	Slime->Move();


	delete Player;
	delete Goblin;
	delete Slime;

	return 0;
}