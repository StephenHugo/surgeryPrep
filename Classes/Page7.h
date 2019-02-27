#ifndef __PAGE7_SCENE_H__
#define __PAGE7_SCENE_H__

#include "ResourceDefinitions.h"

class Page7 : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Page7);
};
#endif // __PAGE7_SCENE_H__
