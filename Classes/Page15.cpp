#include "Page15.h"
#include "Page16.h"

#include "ResourceDefinitions.h"


Scene* Page15::createScene() {
	auto scene = Scene::create();
	auto layer = Page15::create();
	scene->addChild(layer);
	return scene;
}

// on "init" you need to initialize your instance
bool Page15::init() {
	if (!Layer::init()) {
		return false;
	}

	// Get size of the window being displayed to
	auto visibleSize = Director::getInstance()->getVisibleSize();

	// Get drawing origin of screen for sprites
	Vec2 origin = Director::getInstance()->getVisibleOrigin();

	// Play That Funky Music
    if (!CocosDenshion::SimpleAudioEngine::getInstance()->isBackgroundMusicPlaying())
	{
        CocosDenshion::SimpleAudioEngine::getInstance()->pauseBackgroundMusic();
        CocosDenshion::SimpleAudioEngine::getInstance()->preloadBackgroundMusic(BCKMUSIC);
        CocosDenshion::SimpleAudioEngine::getInstance()->playBackgroundMusic(BCKMUSIC, true);
	}
    
	// add splash screen"
	auto sprite = Sprite::create(PAGE15);

	// position the sprite on the center of the screen
	sprite->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));
	sprite->setScale(visibleSize.width / sprite->getContentSize().width, visibleSize.height / sprite->getContentSize().height);

	// add the sprite as a child to this layer
	this->addChild(sprite, 0);

	// start the music for the application from here
	if (!CocosDenshion::SimpleAudioEngine::getInstance()->isBackgroundMusicPlaying()) {

		CocosDenshion::SimpleAudioEngine::getInstance()->preloadBackgroundMusic(BCKMUSIC);

		CocosDenshion::SimpleAudioEngine::getInstance()->playBackgroundMusic(BCKMUSIC, true);
	}

	// Go to the next scene
	this->scheduleOnce(schedule_selector(Page15::gotoNextScene), LAUNCHTRANSITIONTIME);

	return true;

}

// ******** Next Several Function(s) are callbacks to move between scenes ********

void Page15::gotoNextScene(float dt)
{
	auto nextScene = Page16::createScene();
    Director::getInstance()->pushScene(TransitionFade::create(SCENETRANSITIONTIME, nextScene));
}
