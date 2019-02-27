#ifndef __PAGE13_SCENE_H__
#define __PAGE13_SCENE_H__

#include "ResourceDefinitions.h"

class Page13 : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Page13);
};
#endif // __PAGE13_SCENE_H__
