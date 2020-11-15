#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__
#include "cocos-ext.h"
#include "cocos2d.h"


USING_NS_CC;
USING_NS_CC_EXT;

class HelloWorld : public cocos2d::Layer,public TableViewDataSource,public TableViewDelegate
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
	TableViewCell* tableCellAtIndex(TableView *table, ssize_t idx);
	ssize_t numberOfCellsInTableView(TableView *table);
	void tableCellTouched(TableView* table, TableViewCell* cell);
	Size cellSizeForTable(TableView *table);
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
};

#endif // __HELLOWORLD_SCENE_H__
