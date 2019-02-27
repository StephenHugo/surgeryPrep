#ifndef __LAUNCH_SCENE_H__
#define __LAUNCH_SCENE_H__

#include "ResourceDefinitions.h"

class Launch : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Launch);
};
#endif // __LAUNCH_SCENE_H__
