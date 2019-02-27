#include "FrameNav.h"

// Defining Constructor
FrameNav::FrameNav() {}

// Defining Destructor
FrameNav::~FrameNav() {}

void FrameNav::addFrameNav(Layer* layer) {

	// Get size of the window being displayed to
	auto visibleSize = Director::getInstance()->getVisibleSize();

	// Get drawing origin of screen for sprites
	Vec2 origin = Director::getInstance()->getVisibleOrigin();

	// ************ Create menu items for the frame ************

	// Menu Item to go to main menu
	auto mainMenuButton = MenuItemImage::create(
		HOMEBUTTON,
		HOMEBUTTON,
		CC_CALLBACK_0(FrameNav::gotoMainMenu, this, layer)
	);

	// Set position and scale of main menu button
	mainMenuButton->setPosition(Vec2(visibleSize.width * SCALEX1 + origin.x, visibleSize.height * SCALEY2 + origin.y));
    mainMenuButton->setScale(0.1*visibleSize.width / mainMenuButton->getContentSize().width, 0.14*visibleSize.height / mainMenuButton->getContentSize().height);

	// Create the menu (it's an autorelease object) <----IDK meaning but it is
	auto menu = Menu::create(mainMenuButton, NULL);
	menu->setPosition(Vec2::ANCHOR_MIDDLE);
	layer->addChild(menu, 1); // Please note that the one must be there
}

// Callback function to return to main menu
void FrameNav::gotoMainMenu(Ref* pSender) {
	SimpleAudioEngine::getInstance()->stopBackgroundMusic();
	SimpleAudioEngine::getInstance()->stopAllEffects();

	auto mainMenuScene = MainMenu::createScene();
	Director::getInstance()->pushScene(TransitionFade::create(2, mainMenuScene));
}

// Ghost hint hand to know what you can touch on the scene
void FrameNav::tapScreen(cocos2d::Layer *chapterLayer)
{
	auto tapSprite = Sprite::create(TAPTHESCREEN);
	auto visibleSize = Director::getInstance()->getVisibleSize();
	auto origin = Director::getInstance()->getVisibleOrigin();

	tapSprite->setPosition(Vec2(visibleSize.width*0.5 + origin.x, visibleSize.height*0.5 + origin.y));
	tapSprite->setScale(0.05*visibleSize.width / tapSprite->getContentSize().width, 0.05*visibleSize.width / tapSprite->getContentSize().height);
	chapterLayer->addChild(tapSprite, 5);
	tapSprite->setOpacity(0);
	tapSprite->runAction(Sequence::create(FadeIn::create(0.4), DelayTime::create(0.2), FadeOut::create(0.4), FadeIn::create(0.4), DelayTime::create(0.2), FadeOut::create(0.4), FadeIn::create(0.4), DelayTime::create(0.2), FadeOut::create(0.4), RemoveSelf::create(), nullptr));
}
