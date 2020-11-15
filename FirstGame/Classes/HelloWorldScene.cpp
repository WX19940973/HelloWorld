#include "HelloWorldScene.h"
#include <iostream>
#include <string.h>
#include "CCFileUtils.h"
#include "ui\UIListView.h"
#include <sstream>
using namespace cocos2d::ui;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
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
 //                                          CC_CALLBACK_1(HelloWorld::menuCloseCallback, this));
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
    // add "HelloWorld" splash screen"
    //auto sprite = Sprite::create("HelloWorld.png");

    // position the sprite on the center of the screen
    //sprite->setPosition(Vec2(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));

    // add the sprite as a child to this layer
    //this->addChild(sprite, 0);

	//FileUtils::getInstance()->addSearchPath("b");
	//auto sprite1 = Sprite::create("HelloWorld.png");

	// position the sprite on the center of the screen
	//sprite1->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));

	// add the sprite as a child to this layer
	//this->addChild(sprite1, 0);


	FileUtils::getInstance()->addSearchPath("c");
	auto sprite2 = Sprite::create("HelloWorld.png");

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


	int x = 9999;
	int count = 0;
	while (x){
		count++;
		x = x&(x-1);
	}

	int allcount = count;*/

	//ListView* list = ListView::create();
	//list->setContentSize(Size(200,200));
	//list->setBackGroundColorType(ui::Layout::BackGroundColorType::SOLID);
	//list->setBackGroundColor(Color3B(255,0,0));
	//list->setDirection(ui::ScrollView::Direction::HORIZONTAL);
	//list->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));
	//this->addChild(list);

	//int witdh = 0;
	//for (size_t i = 0; i < 5; i++)
	//{	
	//	auto aa = Layout::create();
	//	aa->setContentSize(Size(85,200));
	//	Label* a = Label::create();
	//	
	//	char des[10];
	//	sprintf(des,"hhh%d",i);
	//	CCLOG("----zzzz-----,%s", des);
	//	a->setString(des);
	//	a->setAnchorPoint(Vec2(0,0));
	//	a->setSystemFontSize(40);
	//	//aa->addChild(a);
	//	//->pushBackCustomItem(aa);
	//	list->addChild(a);
	//	a->setPosition(Vec2(a->getContentSize().width*i, list->getContentSize().height/2));
	//	witdh += a->getContentSize().width;
	//}
	//list->doLayout();
	//list->setInnerContainerSize(Size(witdh,200));


	//list->setBounceEnabled(true);
	//list->scrollToRight(0.3,false);
	//list->getInnerContainer()->setPositionX();
	/*CCLOG("-----AAAA------%f",list->getInnerContainerPosition().x);
	auto posx = list->getInnerContainer()->getContentSize().width - list->getContentSize().width;
	list->getInnerContainer()->setPositionX(-posx);
	CCLOG("-----AAAA------%f", list->getInnerContainerPosition().x);*/

    return true;
}

TableViewCell* HelloWorld::tableCellAtIndex(TableView *table, ssize_t idx)
{

	auto cell = table->dequeueCell();
	if (!cell){
		cell = TableViewCell::create();
		//cell->autorelease();
		auto sprite = Sprite::create("CloseNormal.png");
		sprite->setAnchorPoint(Point(0,0));
		//sprite->setContentSize(Size(60,60));
		cell->addChild(sprite);
	}
	return cell;
}

ssize_t HelloWorld::numberOfCellsInTableView(TableView *table)
{
	return 10;
}


void HelloWorld::tableCellTouched(TableView* table, TableViewCell* cell)
{
	CCLOG("TOUCH %i",cell->getIdx());
}

Size HelloWorld::cellSizeForTable(TableView *table){
	return Size(40,40);
}

void HelloWorld::menuCloseCallback(Ref* pSender)
{
    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
