#ifndef __PAGE9_SCENE_H__
#define __PAGE9_SCENE_H__

#include "ResourceDefinitions.h"

class Page9 : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Page9);
};
#endif // __PAGE9_SCENE_H__
