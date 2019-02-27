#ifndef __PAGE8_SCENE_H__
#define __PAGE8_SCENE_H__

#include "ResourceDefinitions.h"

class Page8 : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Page8);
};
#endif // __PAGE8_SCENE_H__
