#ifndef __PAGE15_SCENE_H__
#define __PAGE15_SCENE_H__

#include "ResourceDefinitions.h"

class Page15 : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Page15);
};
#endif // __PAGE15_SCENE_H__
