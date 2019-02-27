#ifndef __PAGE5_SCENE_H__
#define __PAGE5_SCENE_H__

#include "ResourceDefinitions.h"

class Page5 : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Page5);
};
#endif // __PAGE5_SCENE_H__
