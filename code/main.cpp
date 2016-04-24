#include "stdafx.h"
#include "Sabrewulf.hpp"
#include "Game.hpp"

// ---
int _tmain (int argc, _TCHAR* argv[])
{
	SabreWulfMaze::_data.initialize ();

	// The game has no parameters inside...
	SabreWulfGame game;
	// The normal thing is to draw at the same pace than the frame rate...
	game.setLinkDrawToFrameRate (true);
	// The normal thing is to preload all components...
	game.setPreLoad (true); 
	game.exec ();

	return (0);
}
