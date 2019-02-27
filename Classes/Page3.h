#ifndef __PAGE3_SCENE_H__
#define __PAGE3_SCENE_H__

#include "ResourceDefinitions.h"

class Page3 : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Page3);
};
#endif // __PAGE3_SCENE_H__
