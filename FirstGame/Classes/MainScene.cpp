#include "MainScene.h"
#include <iostream>
#include <string.h>
#include "CCFileUtils.h"
#include <sstream>
using namespace cocos2d::ui;

Scene* MainScene::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = MainScene::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool MainScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    /////////////////////////////
    // 2. add a menu item with "X" image, which is clicked to quit the program
    //    you may modify it.

    // add a "close" icon to exit the progress. it's an autorelease object
 //   auto closeItem = MenuItemImage::create(
 //                                          "CloseNormal.png",
 //                                          "CloseSelected.png",
 //                                          CC_CALLBACK_1(MainScene::menuCloseCallback, this));
 //   
	//closeItem->setPosition(Vec2(origin.x + visibleSize.width - closeItem->getContentSize().width/2 ,
 //                               origin.y + closeItem->getContentSize().height/2));

 //   // create menu, it's an autorelease object
 //   auto menu = Menu::create(closeItem, NULL);
 //   menu->setPosition(Vec2::ZERO);
 //   this->addChild(menu, 1);

    /////////////////////////////
    // 3. add your codes below...

    // add a label shows "Hello World"
    // create and initialize a label
    
    //auto label = Label::createWithTTF("Hello World", "fonts/Marker Felt.ttf", 24);
    //
    //// position the label on the center of the screen
    //label->setPosition(Vec2(origin.x + visibleSize.width/2,
    //                        origin.y + visibleSize.height - label->getContentSize().height));

    //// add the label as a child to this layer
    //this->addChild(label, 1);
	
	FileUtils::getInstance()->addSearchPath("a");
    // add "MainScene" splash screen"
    //auto sprite = Sprite::create("MainScene.png");

    // position the sprite on the center of the screen
    //sprite->setPosition(Vec2(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));

    // add the sprite as a child to this layer
    //this->addChild(sprite, 0);

	//FileUtils::getInstance()->addSearchPath("b");
	//auto sprite1 = Sprite::create("MainScene.png");

	// position the sprite on the center of the screen
	//sprite1->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));

	// add the sprite as a child to this layer
	//this->addChild(sprite1, 0);


	FileUtils::getInstance()->addSearchPath("c");
	auto sprite2 = Sprite::create("MainScene.png");

	// position the sprite on the center of the screen
	sprite2->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));

	// add the sprite as a child to this layer
	//sprite2->runAction(CCRepeatForever::create(SkewBy::create(1.0,0,30)));

	//sprite2->runAction(SkewBy::create(1.0, 0, 45));
	//sprite2->runAction(OrbitCamera::create(1.0,20,2,0,0,360,60));

	//sprite2->runAction(OrbitCamera::create(1.0, 2, 0, 0, 180, 0, 0));
	//sprite2->setSkewX(90);
	this->addChild(sprite2, 0);
	//extension::TableView * table;
	
	/*TableView* a = TableView::create(this, Size(200, 40));
	a->setDirection(TableView::Direction::HORIZONTAL);
	a->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));
	this->addChild(a);
	a->reloadData();
	a->setDelegate(this);


	
    return true;
}
