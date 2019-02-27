#ifndef __PAGE21_SCENE_H__
#define __PAGE21_SCENE_H__

#include "ResourceDefinitions.h"

class Page21 : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Page21);
};
#endif // __PAGE21_SCENE_H__
