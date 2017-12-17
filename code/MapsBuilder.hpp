/** \addtogroup SabreWulf */
/*@{*/

#ifndef __MAPSBUILDER_HPP__
#define __MAPSBUILDER_HPP__

#include <Arcade/arcadeinclude.hpp>

/** An adds on to the map builder for sabrewulf. */
class MapsBuilderAddsOn : public QGAMES::ObjectMapBuilderAddsOn
{
	public:
	MapsBuilderAddsOn (QGAMES::ObjectBuilder* oB)
		: QGAMES::ObjectMapBuilderAddsOn (oB)
							{ }

	private:
	virtual QGAMES::Map* createMap (int id, int w, int h, int d,
		const QGAMES::Layers& l, const QGAMES::MapProperties& pties);
};

#endif
  
// End of the file
/*@}*/