#pragma once
#include "cocos2d.h"

USING_NS_CC;

class GameScene : public Scene
{
public:

	static Scene* createScene();

	virtual bool init();

	void back(Ref* pSender);

	CREATE_FUNC(GameScene);
};

