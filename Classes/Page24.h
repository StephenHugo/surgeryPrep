#ifndef __PAGE24_SCENE_H__
#define __PAGE24_SCENE_H__

#include "ResourceDefinitions.h"

class Page24 : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Page24);
};
#endif // __PAGE24_SCENE_H__
