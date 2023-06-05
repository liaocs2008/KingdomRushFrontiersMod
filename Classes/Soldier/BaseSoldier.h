#ifndef _BASE_Soldier_H_
#define _BASE_Soldier_H_

#include "Data/SoundManager.h"
#include "Monster/BaseMonster.h"
#include "cocos2d.h"
USING_NS_CC;


typedef enum {
	HSL_NA=0, // not applicable
	HSL_TENA, 
	HSL_HANDS,
	HSL_FRANK
} HSLSoldierType;


typedef enum{
    SoldierStateNone = 0, //��״̬
    SoldierStateRun,//����
	SoldierStateHit, //����
	SoldierStateDeath,//����
	SoldierStateWait,//Ѱ�ҵ���
	SoldierStateSkill1,
	SoldierStateSkill2,

	// add by leo
	SoldierStateRunLeft,
	SoldierStateRunRight
}SoldierState;


class BaseSoldier : public Sprite
{
public:
	CC_SYNTHESIZE(float, maxHp, MaxHp);
    CC_SYNTHESIZE(float, currHp, CurrHp);
	CC_SYNTHESIZE(float, force, Force);
	CC_SYNTHESIZE(float, armor, Armor);
	CC_SYNTHESIZE(float, hpPercentage, HpPercentage);
	CC_SYNTHESIZE(SoldierState, state, State);
    CC_SYNTHESIZE_READONLY(ProgressTimer*, hpBar, HpBar);
	CC_SYNTHESIZE(Point, location, Location);
	Sprite* baseSprite;
	virtual void runToLocation(Point point);
	bool init() override;
	BaseMonster* nearestMonster;  
	virtual void updateSoldier(int level){};


	// add by leo
	HSLSoldierType getHSLSoldierType() { return hslSoldierType; }

protected:
	virtual void createAndSetHpBar();
	Sprite* hpBgSprite;
	virtual void lookingForMonsters(float dt);
	
	virtual void checkNearestMonster();
	virtual void attack();
	void update(float dt) override {};
	
	virtual void runToDestination(Point destination,bool isAttacking){};
	SoldierState lastState;
	virtual void stopSoldierAnimation();
	void checkDirection(Point point);
	//false�ұ�true���
	virtual bool checkDirectionForMonster();
	float caculateTime(Point point);
	virtual void runToMonster();
	virtual void attackMonster(float dt){};
	int attackCount;

	// add by leo
	HSLSoldierType hslSoldierType;
};

#endif