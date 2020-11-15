#ifndef __MAIN_SCENE_H__
#define __MAIN_SCENE_H__
#include "cocos-ext.h"
#include "cocos2d.h"


USING_NS_CC;
USING_NS_CC_EXT;

class MainScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    virtual bool init();
	CREATE_FUNC(MainScene);
};

#endif // __MAIN_SCENE_H__
