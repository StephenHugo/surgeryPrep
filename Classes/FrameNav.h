#ifndef __FRAME_NAV_H__
#define __FRAME_NAV_H__

#include "ResourceDefinitions.h"
#include "MainMenuScene.h"

class FrameNav : public Layer {
public:
	FrameNav();
	virtual ~FrameNav();
	void addFrameNav(Layer* layer); // Fades in over 0.2 seconds
	void gotoMainMenu(Ref* pSender);
	void tapScreen(cocos2d::Layer *chapterLayer);
};

#endif // __FRAME_NAV_H__