#ifndef __PAGE19_SCENE_H__
#define __PAGE19_SCENE_H__

#include "ResourceDefinitions.h"

class Page19 : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Page19);
};
#endif // __PAGE19_SCENE_H__
