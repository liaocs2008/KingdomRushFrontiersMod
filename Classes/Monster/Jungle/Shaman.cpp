#include "Shaman.h"

USING_NS_CC;


Shaman* Shaman::createMonster(std::vector<Point> points)
{
    auto monster = new Shaman();
    if (monster && monster->init())
    {

        monster->setPointsVector(points);
		monster->setMaxHp(480);
		monster->setCurrHp(480);
		monster->setMoney(50);
		monster->setForce(30);
		monster->setArmor(0);
		monster->setAttackBySoldier(true);
		monster->setRunSpeed(35);
        monster->runNextPoint();       
        monster->autorelease();
        return monster;
    }
    CC_SAFE_DELETE(monster);
    return NULL;
}

bool Shaman::init()
{
	if (!BaseMonster::init())
	{
		return false;
	}
	setMonsterType(SHAMAN);
	setName("Shaman_");
	//baseSprite = Sprite::createWithSpriteFrameName("CanibalShamanMagic_0001.png");
	baseSprite = Sprite::createWithSpriteFrameName("HSL_cleve_death_3308.png");
	from_HSL = true;
	addChild(baseSprite);
	createAndSetHpBar();
	blood = Sprite::createWithSpriteFrameName("fx_blood_splat_green_0001.png");
	blood->setPosition(Point(baseSprite->getContentSize().width/2,baseSprite->getContentSize().height/2));
	baseSprite->addChild(blood);
	blood->setVisible(false);
	lastState = stateNone;
	scheduleUpdate();
	setListener();
	return true;
}