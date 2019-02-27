#ifndef __PAGE12_SCENE_H__
#define __PAGE12_SCENE_H__

#include "ResourceDefinitions.h"

class Page12 : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Page12);
};
#endif // __PAGE12_SCENE_H__
