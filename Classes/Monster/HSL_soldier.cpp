#include "HSL_soldier.h"

USING_NS_CC;


HSL_soldier* HSL_soldier::createMonster(std::vector<Point> points)
{
	auto monster = new HSL_soldier();
	if (monster && monster->init())
	{
		monster->setPointsVector(points);
		monster->setMaxHp(35);
		monster->setCurrHp(35);
		monster->setMoney(10);
		monster->setForce(4);
		monster->setArmor(0);
		monster->setForce(8);
		monster->setAttackBySoldier(true);
		monster->setRunSpeed(40);
		monster->runNextPoint();
		monster->autorelease();
		return monster;
	}
	CC_SAFE_DELETE(monster);
	return NULL;
}

bool HSL_soldier::init()
{
	if (!BaseMonster::init())
	{
		return false;
	}
	setMonsterType(HSL_SOLDIER);
	setName("HSL_soldier_");
	from_HSL = true;
	baseSprite = Sprite::createWithSpriteFrameName("HSL_soldier_death_1755.png");
	addChild(baseSprite);
	createAndSetHpBar();
	blood = Sprite::createWithSpriteFrameName("fx_blood_splat_red_0001.png");
	blood->setPosition(Point(baseSprite->getContentSize().width / 2, baseSprite->getContentSize().height / 2));
	baseSprite->addChild(blood);
	blood->setVisible(false);
	lastState = stateNone;
	scheduleUpdate();
	setListener();
	return true;
}