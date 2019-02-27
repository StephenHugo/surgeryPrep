#ifndef __PAGE18_SCENE_H__
#define __PAGE18_SCENE_H__

#include "ResourceDefinitions.h"

class Page18 : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Page18);
};
#endif // __PAGE18_SCENE_H__
