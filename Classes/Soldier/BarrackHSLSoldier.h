#ifndef _BARRACK_HSLSoldier_H_
#define _BARRACK_HSLSoldier_H_

#include "BaseSoldier.h"


class BarrackHSLSoldier : public BaseSoldier
{
public:
	bool initSoldier(int level, HSLSoldierType s);
	CREATE_FUNC(BarrackHSLSoldier);
	static BarrackHSLSoldier* createSoldier(Point point, int level, HSLSoldierType s);
	CC_SYNTHESIZE(int, level, Level);
	void update(float dt) override;
	//void runToMonster();
	void attackMonster(float dt) override;
	void updateSoldier(int level) override;

	// add by leo
protected:
	std::string soldierFrameName;
	std::string soldierAnimationPrefix;
	void updateHSLSoldierInfo();
};

#endif

