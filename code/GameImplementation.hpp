/** \addtogroup SabreWulf */
/*@{*/

#ifndef __GAMEIMPLEMENTATION_HPP__
#define __GAMEIMPLEMENTATION_HPP__

#include <SDL/sdlgame.hpp>

/** Just a class to define the input handler that is needed in this game. */
class GameImplementation : public SDLGame
{
	public:
	GameImplementation ()
		: SDLGame ()
							{ }

	virtual QGAMES::InputHandler* createInputHandler ();
};

#endif
  
// End of the file
/*@}*/