#ifndef __PAGE17_SCENE_H__
#define __PAGE17_SCENE_H__

#include "ResourceDefinitions.h"

class Page17 : public cocos2d::Layer {
public:
	static Scene* createScene();
	virtual bool init();
	void gotoNextScene(float dt);
	CREATE_FUNC(Page17);
};
#endif // __PAGE17_SCENE_H__
