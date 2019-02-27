#ifndef __PAGE25_SCENE_H__
#define __PAGE25_SCENE_H__

#include "ResourceDefinitions.h"

class Page25 : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Page25);
};
#endif // __PAGE25_SCENE_H__
