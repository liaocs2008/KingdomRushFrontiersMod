#ifndef _HSL_SOLDIER_H_
#define _HSL_SOLDIER_H_

#include "Monster/BaseMonster.h"
#include "cocos2d.h"
USING_NS_CC;

class HSL_soldier : public BaseMonster
{
public:
	virtual bool init() override;
	static HSL_soldier* createMonster(std::vector<Point> points, int hp, int value);
	static HSL_soldier* createMonster(std::vector<Point> points);
};

#endif
