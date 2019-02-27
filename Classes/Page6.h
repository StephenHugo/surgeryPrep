#ifndef __PAGE6_SCENE_H__
#define __PAGE6_SCENE_H__

#include "ResourceDefinitions.h"

class Page6 : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Page6);
};
#endif // __PAGE6_SCENE_H__
