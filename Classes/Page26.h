#ifndef __PAGE26_SCENE_H__
#define __PAGE26_SCENE_H__

#include "ResourceDefinitions.h"

class Page26 : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Page26);
};
#endif // __PAGE26_SCENE_H__
