#ifndef __PAGE20_SCENE_H__
#define __PAGE20_SCENE_H__

#include "ResourceDefinitions.h"

class Page20 : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Page20);
};
#endif // __PAGE20_SCENE_H__
