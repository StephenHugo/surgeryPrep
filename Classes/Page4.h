#ifndef __PAGE4_SCENE_H__
#define __PAGE4_SCENE_H__

#include "ResourceDefinitions.h"

class Page4 : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Page4);
};
#endif // __PAGE4_SCENE_H__
