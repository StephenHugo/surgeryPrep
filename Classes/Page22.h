#ifndef __PAGE22_SCENE_H__
#define __PAGE22_SCENE_H__

#include "ResourceDefinitions.h"

class Page22 : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Page22);
};
#endif // __PAGE22_SCENE_H__
