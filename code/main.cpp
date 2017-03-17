#include "stdafx.h"
#include "Sabrewulf.hpp"
#include "Game.hpp"

#ifndef _CONSOLE
#include <SDL.h>
#ifdef __cplusplus
#define C_LINKAGE "C"
#else
#define C_LINKAGE
#endif /* __cplusplus */
extern C_LINKAGE int main (int argc, char *argv [])
#else
int _tmain (int argc, char *argv [])
#endif /* _CONSOLE */
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
