#ifndef FREECELLGAMEOBJECTFACTORY
#define FREECELLGAMEOBJECTFACTORY

#include "TEGameObject.h"
#include <string>
#include <map>

class TEGameObject;
class PlayingCard;

class FreeCellGameObjectFactory {
private:
    std::map<std::string, const char*> mCardMap;

public:
    FreeCellGameObjectFactory();
    TEGameObject* createBackground();
    TEGameObject* createFreeCell(TEPoint position);
    TEGameObject* createAceCellStack(TEPoint position);
	TEGameObject* createTableCellStack(TEPoint position);
    TEGameObject* createPlayingCard(PlayingCard* card);
};
#endif
