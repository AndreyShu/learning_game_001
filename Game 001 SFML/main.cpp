#include <iostream>

#include "Game.h"

//using namespace sf;

int main()
{
	//Init game engine
	Game game;


	//Game loop
	while (game.running())
	{
		//Update
		game.update();

		//Render
		game.render();

		//Draw your game

	}

	//End of application
	return 0;
}
