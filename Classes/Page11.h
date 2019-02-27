#ifndef __PAGE11_SCENE_H__
#define __PAGE11_SCENE_H__

#include "ResourceDefinitions.h"

class Page11 : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Page11);
};
#endif // __PAGE11_SCENE_H__
