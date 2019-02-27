#ifndef __PAGE10_SCENE_H__
#define __PAGE10_SCENE_H__

#include "ResourceDefinitions.h"

class Page10 : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Page10);
};
#endif // __PAGE10_SCENE_H__
