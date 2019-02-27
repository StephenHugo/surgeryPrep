#ifndef __PAGE23_SCENE_H__
#define __PAGE23_SCENE_H__

#include "ResourceDefinitions.h"

class Page23 : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Page23);
};
#endif // __PAGE23_SCENE_H__
