#ifndef __PAGE14_SCENE_H__
#define __PAGE14_SCENE_H__

#include "ResourceDefinitions.h"

class Page14 : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Page14);
};
#endif // __PAGE14_SCENE_H__
