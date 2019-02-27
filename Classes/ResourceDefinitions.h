#ifndef __RESOURCE_DEFINITIONS_H__
#define __RESOURCE_DEFINITIONS_H__

#include "cocos2d.h"
#include "SimpleAudioEngine.h"

// A macro that does the same as "using namespace cocos2d;"
USING_NS_CC;

// Namespace for using cocos simple audio engine
using namespace CocosDenshion;

/*
//////////////////////////////////////////////////////////////
****** Static variables for general app usage******
//////////////////////////////////////////////////////////////
*/
const std::string FELTFONT = "fonts/Marker Felt.ttf";
const float TEXTSIZE = 1.0f / 20;
const float TEMPO = 1.0f / 1.0f; // works inversely to control app speed: 1/10 == 10x faster
const float SCENETRANSITIONTIME = 1.5f*TEMPO; // times for screen wipes

/*
//////////////////////////////////////////////////////////////
	****** Static variables for launch screen behavior******
//////////////////////////////////////////////////////////////
*/

const float LAUNCHTRANSITIONTIME = 9.0f*TEMPO;

const std::string LAUNCHIMAGE = "res/pages/1.png";
const std::string PAGE2 = "res/pages/2.png";
const std::string PAGE3 = "res/pages/3.png";
const std::string PAGE4 = "res/pages/4.png";
const std::string PAGE5 = "res/pages/5.png";

const std::string PAGE6 = "res/pages/6.png";
const std::string PAGE7 = "res/pages/7.png";
const std::string PAGE8 = "res/pages/8.png";
const std::string PAGE9 = "res/pages/9.png";
const std::string PAGE10 = "res/pages/10.png";

const std::string PAGE11 = "res/pages/11.png";
const std::string PAGE12 = "res/pages/12.png";
const std::string PAGE13 = "res/pages/13.png";
const std::string PAGE14 = "res/pages/14.png";
const std::string PAGE15 = "res/pages/15.png";

const std::string PAGE16 = "res/pages/16.png";
const std::string PAGE17 = "res/pages/17.png";
const std::string PAGE18 = "res/pages/18.png";
const std::string PAGE19 = "res/pages/19.png";
const std::string PAGE20 = "res/pages/20.png";

const std::string PAGE21 = "res/pages/21.png";
const std::string PAGE22 = "res/pages/22.png";
const std::string PAGE23 = "res/pages/23.png";
const std::string PAGE24 = "res/pages/24.png";
const std::string PAGE25 = "res/pages/25.png";

const std::string PAGE26 = "res/pages/26.png";

const char BCKMUSIC[19] = "audio/bckmusic.wav"; // App Music

#endif // __RESOURCE_DEFINITIONS_H__
