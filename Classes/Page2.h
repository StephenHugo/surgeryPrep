#ifndef __PAGE2_SCENE_H__
#define __PAGE2_SCENE_H__

#include "ResourceDefinitions.h"

class Page2 : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Page2);
};
#endif // __PAGE2_SCENE_H__
