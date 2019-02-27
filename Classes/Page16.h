#ifndef __PAGE16_SCENE_H__
#define __PAGE16_SCENE_H__

#include "ResourceDefinitions.h"

class Page16 : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Page16);
};
#endif // __PAGE16_SCENE_H__
