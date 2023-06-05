#include "BarrackHSLSoldier.h"
#include "Data/GameManager.h"



void BarrackHSLSoldier::updateHSLSoldierInfo() 
{
	if (hslSoldierType == HSL_TENA) {
		if (level <= 2) {   // this is set from TowerLevel
			setForce(3 * level);
			soldierAnimationPrefix = "HSL_tena1";
			soldierFrameName = soldierAnimationPrefix + "_death_3524.png";
		}
		else if (level == 3) {
			setForce(15);
			soldierAnimationPrefix = "HSL_tena2";
			soldierFrameName = soldierAnimationPrefix + "_death_1815.png";
		}
		else if (level == 4) {
			setForce(999);
			setMaxHp(999);
			soldierAnimationPrefix = "HSL_tena3";
			soldierFrameName = soldierAnimationPrefix + "_death_1552.png";
		}
		else {
			setForce(999);
			setMaxHp(999);
			soldierAnimationPrefix = "HSL_tena4";
			soldierFrameName = soldierAnimationPrefix + "_death_2078.png";
		}
	}
	else if (hslSoldierType == HSL_HANDS) {
		if (level <= 3) {
			setForce(6 * level);
			soldierAnimationPrefix = "HSL_hands1";
			soldierFrameName = soldierAnimationPrefix + "_death_1534.png";
		}
		else {
			setForce(25);
			setMaxHp(200);
			soldierAnimationPrefix = "HSL_hands2";
			soldierFrameName = soldierAnimationPrefix + "_death_1624.png";
		}
	} 
	else if (hslSoldierType == HSL_FRANK) {
		setForce(3 * level);
		soldierAnimationPrefix = "HSL_frank";
		soldierFrameName = soldierAnimationPrefix + "_death_1682.png";
	}
}




bool BarrackHSLSoldier::initSoldier(int level, HSLSoldierType s)
{
	if (!BarrackHSLSoldier::init())
	{
		return false;
	}
	setLevel(level);
	//setForce(3 * level);
	
	// add by leo
	hslSoldierType = s;
	updateHSLSoldierInfo();
	setState(SoldierStateWait);

	baseSprite = Sprite::createWithSpriteFrameName(soldierFrameName.c_str());
	addChild(baseSprite);
	createAndSetHpBar();
	lastState = SoldierStateNone;
	return true;
}

BarrackHSLSoldier* BarrackHSLSoldier::createSoldier(Point point, int level, HSLSoldierType s)
{
	auto barrackSoldier = new BarrackHSLSoldier();
	if (barrackSoldier && barrackSoldier->initSoldier(level, s))
	{
		barrackSoldier->setLocation(point);
		barrackSoldier->setMaxHp(50);
		barrackSoldier->setCurrHp(50);
		barrackSoldier->runToLocation(point);
		barrackSoldier->autorelease();
		return barrackSoldier;
	}
	CC_SAFE_DELETE(barrackSoldier);
	return NULL;
}

void BarrackHSLSoldier::update(float dt)
{
	if (lastState != getState()) {
		switch (getState())
		{
		case(SoldierStateRunLeft): {
			lastState = SoldierStateRunLeft;
			stopSoldierAnimation();
			auto action = RepeatForever::create(Animate::create(AnimationCache::getInstance()->getAnimation(StringUtils::format("%s_runleft", soldierAnimationPrefix.c_str()))));
			action->setTag(SoldierStateRun);
			baseSprite->runAction(action); }
							   break;

		case(SoldierStateRunRight): {
			lastState = SoldierStateRunRight;
			stopSoldierAnimation();
			auto action = RepeatForever::create(Animate::create(AnimationCache::getInstance()->getAnimation(StringUtils::format("%s_runright", soldierAnimationPrefix.c_str()))));
			action->setTag(SoldierStateRun);
			baseSprite->runAction(action); }
								   break;
		case(SoldierStateHit): {
			lastState = SoldierStateHit;
			stopSoldierAnimation();
			auto action = RepeatForever::create(Animate::create(AnimationCache::getInstance()->getAnimation(StringUtils::format("%s_attack", soldierAnimationPrefix.c_str()))));
			action->setTag(SoldierStateHit);
			baseSprite->runAction(action); }
							   break;
		case(SoldierStateWait): {
			lastState = SoldierStateWait;
			stopSoldierAnimation();
			//baseSprite->setSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName(StringUtils::format("HSL_tena%d_death", level))); 


			auto action = RepeatForever::create(Animate::create(AnimationCache::getInstance()->getAnimation(StringUtils::format("%s_death", soldierAnimationPrefix.c_str()))));
			action->setTag(SoldierStateDeath);
			baseSprite->runAction(action);
			}
							   break;
		case(SoldierStateDeath): {
			lastState = SoldierStateDeath; }
								 break;
		}
	}
}



void BarrackHSLSoldier::updateSoldier(int level)
{
	setLevel(level);
	setForce(4 * level);
	setMaxHp(40 * level);
	
	// add by leo, following will update force and maxhp
	updateHSLSoldierInfo();

	stopSoldierAnimation();
	this->setCurrHp(this->getMaxHp());
	this->setHpPercentage(100);
	this->getHpBar()->setPercentage(100);
	baseSprite->setSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName(soldierFrameName.c_str()));
	lastState = SoldierStateNone;
}

void BarrackHSLSoldier::attackMonster(float dt)
{
	if (nearestMonster != NULL && nearestMonster->getCurrHp()>0) {
		if (!checkDirectionForMonster()) {
			nearestMonster->setState(stateAttackLeft);
		}
		else {
			nearestMonster->setState(stateAttackRight);
		}
		setState(SoldierStateHit);
		auto monsterCurrHp = nearestMonster->getCurrHp();
		auto SoldierHp = this->getCurrHp();

		monsterCurrHp = monsterCurrHp - this->getForce();
		if (nearestMonster->getState() != stateFrozen)
			SoldierHp = SoldierHp - nearestMonster->getForce();

		if (monsterCurrHp <= 0) {
			monsterCurrHp = 0;
		}
		if (SoldierHp <= 0) {
			SoldierHp = 0;
		}
		nearestMonster->setCurrHp(monsterCurrHp);
		this->setCurrHp(SoldierHp);

		nearestMonster->getHpBar()->setPercentage((monsterCurrHp / nearestMonster->getMaxHp()) * 100);
		this->getHpBar()->setPercentage((SoldierHp / this->getMaxHp()) * 100);

		if (monsterCurrHp == 0) {
			unschedule(CC_SCHEDULE_SELECTOR(BarrackHSLSoldier::attackMonster));
			//GameManager::getInstance()->monsterVector.eraseObject(nearestMonster);
			nearestMonster->death();
			if (this->getCurrHp()>0)
				runToLocation(location);
		}
		if (SoldierHp == 0) {
			lastState = SoldierStateDeath;
			setState(SoldierStateDeath);
			unscheduleAllCallbacks();
			stopAllActions();
			baseSprite->stopAllActions();
			hpBgSprite->setVisible(false);
			if (nearestMonster != NULL && nearestMonster->getCurrHp()>0) {
				nearestMonster->restartWalking();
				nearestMonster->setIsAttacking(false);
			}
			
			//baseSprite->runAction(Sequence::create(
			//	Animate::create(AnimationCache::getInstance()->getAnimation(StringUtils::format("HSL_tena%d_death", level))),
			//	FadeOut::create(1.0f)
			//	, NULL));

			// add by leo
			auto action = RepeatForever::create(Animate::create(AnimationCache::getInstance()->getAnimation(StringUtils::format("%s_death", soldierAnimationPrefix.c_str()))));
			action->setTag(SoldierStateDeath);
			baseSprite->runAction(Sequence::create(action, FadeOut::create(1.0f), NULL));
		}
	}
	else {
		unschedule(CC_SCHEDULE_SELECTOR(BarrackHSLSoldier::attackMonster));
		if (this->getCurrHp()>0)
			runToLocation(location);
	}
}