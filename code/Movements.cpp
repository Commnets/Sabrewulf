#include "Movements.hpp"
#include <Common/entity.hpp>
#include <iostream>

// ---
QGAMES::Movement* SabreWulfArtistMovement::clone ()
{
	QGAMES::Movement* result = new SabreWulfArtistMovement (_id, _variables); 
	result -> initialize (); 
	return (result); 
}

// ---
void SabreWulfArtistMovement::initialize ()
{
	QGAMES::MovementOneByOne::initialize ();

	// Faster than none at the begging...
	// Other speeds are i.e double when the yellow orchild affects him...
	_speed = 4 * _baseSpeed;
}

// ---
void SabreWulfArtistMovement::moveOne (const QGAMES::Vector& d, const QGAMES::Vector& a, 
			QGAMES::Entity* e)
{
	e -> setPosition (e -> position () + d);
	e -> setOrientation (d);
}
