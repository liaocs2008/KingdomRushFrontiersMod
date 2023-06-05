#include "MyAnimation.h"

MyAnimation* MyAnimation::instance;


MyAnimation* MyAnimation::getInstance()
{
	if (instance == NULL)
		instance = new MyAnimation();
	return instance;
}

void MyAnimation::init_desert()
{
	// add by leo
	init_HSL_soldier();


	init_Thug();
	init_Raider();
	init_Wolf();
	init_Immortal();
	init_Fallen();
	init_Munra();
	init_Scorpion();
	init_Wasp_Hornet();
	init_Wasp_Queen();
	init_Executioner();
	init_Tremor();
}

void MyAnimation::init_jungle()
{
	init_Canibal();
	init_Hunter();
	init_Shaman();
	init_Priest();
	init_Shield();
	init_WingRider();
	init_Gorilla();
}

void MyAnimation::init()
{
	init_ArtilleryTower();
	init_ArcherTower();
	init_monster_blood();
	init_reinforce();
	init_BarracksTower();
	init_MageTower();
	init_ArchMageTower();
	init_earthquakeTower();
	init_NecromancerTower();
	init_mechsTower();
	init_CossbowHunterTower();
	init_TotemTower();
	init_others();
}

void MyAnimation::init_others()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("freeze_creep_00%02d.png",1,7, 0.05f), "freeze_creep");
	AnimationCache::getInstance()->addAnimation(createAnimation("freeze_creep_00%02d.png",8,23, 0.05f), "refreeze_creep");
	AnimationCache::getInstance()->addAnimation(createAnimation("freeze_creepFlying_00%02d.png",1,7, 0.05f), "freeze_creepFlying");
	AnimationCache::getInstance()->addAnimation(createAnimation("freeze_creepFlying_00%02d.png",10,21, 0.05f), "refreeze_creepFlying");

	AnimationCache::getInstance()->addAnimation(createAnimation("small_freeze_explosion_00%02d.png",1,20, 0.04f), "freeze_explosion");

	AnimationCache::getInstance()->addAnimation(createAnimation("fireball_explosion_00%02d.png",1,15, 0.06f), "fireBall_explosion");
	AnimationCache::getInstance()->addAnimation(createAnimation("fireball_proyectile_00%02d.png",1,5, 0.04f), "fireBall_fire");
	AnimationCache::getInstance()->addAnimation(createAnimation("fireball_particle_00%02d.png",1,4, 0.04f), "fireBall_smoke");

	AnimationCache::getInstance()->addAnimation(createAnimation("effect_sellSmoke_00%02d.png",1,11, 0.04f), "sell_smoke");
	AnimationCache::getInstance()->addAnimation(createAnimation("effect_buildSmoke_00%02d.png",1,10, 0.04f), "build_smoke");

	AnimationCache::getInstance()->addAnimation(createAnimation("mapFlag_star_00%02d.png",1,18, 0.04f), "shine");
	AnimationCache::getInstance()->addAnimation(createAnimation("mapFlag_0%03d.png",23,95, 0.04f), "succeed");
}

void MyAnimation::init_MageTower()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("mage_lvl1_00%02d.png",1,12, 0.04f), "level1_mage_shine");
	AnimationCache::getInstance()->addAnimation(createAnimation("mage_lvl2_00%02d.png",1,12, 0.04f), "level2_mage_shine");
	AnimationCache::getInstance()->addAnimation(createAnimation("mage_lvl3_00%02d.png",1,12, 0.04f), "level3_mage_shine");

	AnimationCache::getInstance()->addAnimation(createAnimation("mage_shooter_00%02d.png",17,29, 0.04f,"mage_shooter_0001.png"), "mage_shoot_up");
	AnimationCache::getInstance()->addAnimation(createAnimation("mage_shooter_00%02d.png",3,16, 0.04f,"mage_shooter_0001.png"), "mage_shoot_down");
}

void MyAnimation::init_NecromancerTower()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("NecomancerMage_00%02d.png",32,62, 0.04f,"NecomancerMage_0002.png"), "NecomancerMage_shoot_up");
	AnimationCache::getInstance()->addAnimation(createAnimation("NecomancerMage_00%02d.png",3,31, 0.04f,"NecomancerMage_0003.png"), "NecomancerMage_shoot_down");

	AnimationCache::getInstance()->addAnimation(createAnimation("NecromancerDeathKnight_00%02d.png",1,6, 0.04f,"NecromancerDeathKnight_0001.png"), "DK_run");
	AnimationCache::getInstance()->addAnimation(createAnimation("NecromancerDeathKnight_00%02d.png",7,23, 0.04f,"NecromancerDeathKnight_0001.png"), "DK_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("NecromancerDeathKnight_00%02d.png",25,46, 0.04f,"NecromancerDeathKnight_0001.png"), "DK_birth");
	AnimationCache::getInstance()->addAnimation(createAnimation("NecromancerDeathKnight_00%02d.png",48,63, 0.04f), "DK_death");

	AnimationCache::getInstance()->addAnimation(createAnimation("skeleton_00%02d.png",36,54, 0.04f), "skeleton_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("skeleton_00%02d.png",60,92, 0.04f,"skeleton_0001.png"), "skeleton_birth");
	AnimationCache::getInstance()->addAnimation(createAnimation("skeleton_00%02d.png",17,33, 0.04f), "skeleton_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("skeleton_00%02d.png",1,16, 0.04f), "skeleton_run");

	AnimationCache::getInstance()->addAnimation(createAnimation("NecromancerTowerEffect_00%02d.png",1,15, 0.04f), "NecromancerTower_Effect");
}

void MyAnimation::init_ArchMageTower()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("ArchMageGuy_00%02d.png",3,30, 0.04f,"ArchMageGuy_0001.png"), "ArchMageGuy_up");
	AnimationCache::getInstance()->addAnimation(createAnimation("ArchMageGuy_00%02d.png",31,60, 0.04f,"ArchMageGuy_0002.png"), "ArchMageGuy_down");

	AnimationCache::getInstance()->addAnimation(createAnimation("ArchMageTwister_00%02d.png",1,9, 0.04f), "ArchMageTwister_create");
	AnimationCache::getInstance()->addAnimation(createAnimation("ArchMageTwister_00%02d.png",9,15, 0.04f), "ArchMageTwister_twist");
	AnimationCache::getInstance()->addAnimation(createAnimation("ArchMageTwister_00%02d.png",16,24, 0.04f), "ArchMageTwister_end");

	AnimationCache::getInstance()->addAnimation(createAnimation("proy_archbolt_00%02d.png",1,10, 0.04f), "proy_archbolt");
}

void MyAnimation::init_HSL_soldier()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_soldier_death_%4d.png", 1755, 1760, 0.08f), "HSL_soldier_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_soldier_runup_%4d.png", 1773, 1778, 0.08f), "HSL_soldier_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_soldier_runright_%4d.png", 1767, 1772, 0.08f), "HSL_soldier_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_soldier_rundown_%4d.png", 1761, 1766, 0.08f), "HSL_soldier_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_soldier_runleft_%4d.png", 1779, 1784, 0.08f), "HSL_soldier_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_soldier_attack_%4d.png", 1875, 1880, 0.08f), "HSL_soldier_attack");
}


void MyAnimation::init_Thug()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("desertThug_0%03d.png",89,106, 0.04f), "Thug_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertThug_0%03d.png",23,44, 0.04f), "Thug_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertThug_0%03d.png",45,66, 0.04f), "Thug_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertThug_0%03d.png",1,22, 0.04f), "Thug_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertThug_0%03d.png",1,22, 0.04f), "Thug_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertThug_0%03d.png",67,88, 0.04f), "Thug_attack");
}

void MyAnimation::init_Raider()
{
	/*
	AnimationCache::getInstance()->addAnimation(createAnimation("desertRaider_0%03d.png",89,106, 0.04f), "Raider_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertRaider_0%03d.png",23,44, 0.04f), "Raider_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertRaider_0%03d.png",45,66, 0.04f), "Raider_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertRaider_0%03d.png",1,22, 0.04f), "Raider_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertRaider_0%03d.png",1,22, 0.04f), "Raider_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertRaider_0%03d.png",67,88, 0.04f), "Raider_attack");
	*/

	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_bandit_death_%4d.png", 2210, 2215, 0.08f), "Raider_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_bandit_runup_%4d.png", 2198, 2203, 0.08f), "Raider_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_bandit_runright_%4d.png", 2192, 2197, 0.08f), "Raider_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_bandit_rundown_%4d.png", 2186, 2191, 0.08f), "Raider_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_bandit_runleft_%4d.png", 2204, 2209, 0.08f), "Raider_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_bandit_attack_%4d.png", 2216, 2221, 0.08f), "Raider_attack");
}

void MyAnimation::init_Wolf()
{
	/*
	AnimationCache::getInstance()->addAnimation(createAnimation("desertWolf_0%03d.png",69,86, 0.04f), "Wolf_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertWolf_0%03d.png",11,30, 0.04f), "Wolf_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertWolf_0%03d.png",1,10, 0.04f), "Wolf_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertWolf_0%03d.png",1,10, 0.04f), "Wolf_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertWolf_0%03d.png",1,10, 0.04f), "Wolf_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertWolf_0%03d.png",31,43, 0.04f), "Wolf_attack");
	*/

	
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_wolf_death_%4d.png", 2246, 2251, 0.08f), "Wolf_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_wolf_runup_%4d.png", 2234, 2239, 0.08f), "Wolf_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_wolf_runleft_%4d.png", 2240, 2245, 0.08f), "Wolf_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_wolf_rundown_%4d.png", 2222, 2227, 0.08f), "Wolf_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_wolf_runright_%4d.png", 2228, 2233, 0.08f), "Wolf_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_wolf_attack_%4d.png", 2252, 2257, 0.08f), "Wolf_attack");
	
}

void MyAnimation::init_ArcherTower()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_archer_lvl1_shooter_00%02d.png",3,10, 0.04f,"tower_archer_lvl1_shooter_0001.png"), "level1_shoot_down");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_archer_lvl2_shooter_00%02d.png",3,10, 0.04f,"tower_archer_lvl2_shooter_0001.png"), "level2_shoot_down");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_archer_lvl3_shooter_00%02d.png",3,10, 0.04f,"tower_archer_lvl3_shooter_0001.png"), "level3_shoot_down");

	AnimationCache::getInstance()->addAnimation(createAnimation("tower_archer_lvl3_shooter_00%02d.png",11,18, 0.04f,"tower_archer_lvl3_shooter_0002.png"), "level1_shoot_top");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_archer_lvl3_shooter_00%02d.png",11,18, 0.04f,"tower_archer_lvl3_shooter_0002.png"), "level2_shoot_top");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_archer_lvl3_shooter_00%02d.png",11,18, 0.04f,"tower_archer_lvl3_shooter_0002.png"), "level3_shoot_top");

}

void MyAnimation::init_Tremor()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("tremor_0%03d.png",1,14, 0.04f), "Tremor_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("tremor_0%03d.png",1,14, 0.04f), "Tremor_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("tremor_0%03d.png",15,28, 0.04f), "Tremor_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("tremor_0%03d.png",29,42, 0.04f), "Tremor_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("tremor_0%03d.png",83,95, 0.04f), "Tremor_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("tremor_0%03d.png",43,61, 0.04f), "Tremor_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("tremor_0%03d.png",64,75, 0.04f), "Tremor_out");
	AnimationCache::getInstance()->addAnimation(createAnimation("tremor_0%03d.png",75,82, 0.04f), "Tremor_in");
}

Animation* MyAnimation::createAnimation(const char* prefixName, int start,int end, float delay,std::string lastFrame)
{
    Vector<SpriteFrame*> animFrames;
    
	for (int i = start; i <= end; i++)
    {
        auto frame = SpriteFrameCache::getInstance()->getSpriteFrameByName(StringUtils::format(prefixName,i));
		if(frame!=nullptr)
			animFrames.pushBack(frame);
    }
	animFrames.pushBack(SpriteFrameCache::getInstance()->getSpriteFrameByName(lastFrame));
    return Animation::createWithSpriteFrames(animFrames, delay);
}


Animation* MyAnimation::createAnimation(const char* prefixName, int start,int end, float delay)
{
    Vector<SpriteFrame*> animFrames;
    
	for (int i = start; i <= end; i++)
    {
        auto frame = SpriteFrameCache::getInstance()->getSpriteFrameByName(StringUtils::format(prefixName,i));
		if(frame!=nullptr)
			animFrames.pushBack(frame);
    }
    return Animation::createWithSpriteFrames(animFrames, delay);
}

Animation* MyAnimation::createAnimationR(const char* prefixName, int start,int end, float delay)
{
    Vector<SpriteFrame*> animFrames;
    
	for (int i = start; i >= end; i--)
    {
        auto frame = SpriteFrameCache::getInstance()->getSpriteFrameByName(StringUtils::format(prefixName,i));
		if(frame!=nullptr)
			animFrames.pushBack(frame);
    }
    return Animation::createWithSpriteFrames(animFrames, delay);
}

void MyAnimation::init_monster_blood()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("fx_blood_splat_red_00%02d.png",1,9, 0.04f), "blood_red");
}

void MyAnimation::init_ArtilleryTower()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl1_layer1_00%02d.png",1,35, 0.04f), "level1_Artillery_towerBase");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl2_layer1_00%02d.png",1,35, 0.04f), "level2_Artillery_towerBase");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl3_layer1_00%02d.png",1,35, 0.04f), "level3_Artillery_towerBase");

	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl1_layer2_00%02d.png",1,17, 0.04f), "level1_Artillery_leftShooter_hold");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl2_layer2_00%02d.png",1,17, 0.04f), "level2_Artillery_leftShooter_hold");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl3_layer2_00%02d.png",1,17, 0.04f), "level3_Artillery_leftShooter_hold");

	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl1_layer3_00%02d.png",1,35, 0.04f,"tower_artillery_lvl1_layer3_0001.png"), "level1_Artillery_rightShooter");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl2_layer3_00%02d.png",1,35, 0.04f,"tower_artillery_lvl2_layer3_0001.png"), "level2_Artillery_rightShooter");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl3_layer3_00%02d.png",1,35, 0.04f,"tower_artillery_lvl3_layer3_0001.png"), "level3_Artillery_rightShooter");
	
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl1_layer4_00%02d.png",1,35, 0.04f), "level1_Artillery_barrel");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl2_layer4_00%02d.png",1,35, 0.04f), "level2_Artillery_barrel");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl3_layer4_00%02d.png",1,35, 0.04f), "level3_Artillery_barrel");

	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl1_layer5_00%02d.png",1,35, 0.04f), "level1_Artillery_smoke");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl2_layer5_00%02d.png",1,35, 0.04f), "level2_Artillery_smoke");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl3_layer5_00%02d.png",1,35, 0.04f), "level3_Artillery_smoke");

	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl1_layer6_00%02d.png",18,35, 0.04f,"tower_artillery_lvl1_layer6_0001.png"), "level1_Artillery_c4");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl2_layer6_00%02d.png",18,35, 0.04f,"tower_artillery_lvl2_layer6_0001.png"), "level2_Artillery_c4");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl3_layer6_00%02d.png",18,35, 0.04f,"tower_artillery_lvl3_layer6_0001.png"), "level3_Artillery_c4");

	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl1_layer2_00%02d.png",18,35, 0.04f,"tower_artillery_lvl1_layer2_0001.png"), "level1_Artillery_leftShooter_throw");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl2_layer2_00%02d.png",18,35, 0.04f,"tower_artillery_lvl2_layer2_0001.png"), "level2_Artillery_leftShooter_throw");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl3_layer2_00%02d.png",18,35, 0.04f,"tower_artillery_lvl3_layer2_0001.png"), "level3_Artillery_leftShooter_throw");

	AnimationCache::getInstance()->addAnimation(createAnimation("explosion_air_00%02d.png",1,17, 0.04f), "bomb");
	AnimationCache::getInstance()->addAnimation(createAnimation("states_small_00%02d.png",22,32, 0.04f), "explosion_Artillery");
}

void MyAnimation::init_BarracksTower()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("soldier_lvl1_00%02d.png",2,6, 0.04f), "level1_barracksSoilder_run");
	AnimationCache::getInstance()->addAnimation(createAnimation("soldier_lvl2_00%02d.png",2,6, 0.04f), "level2_barracksSoilder_run");
	AnimationCache::getInstance()->addAnimation(createAnimation("soldier_lvl3_00%02d.png",2,6, 0.04f), "level3_barracksSoilder_run");
	AnimationCache::getInstance()->addAnimation(createAnimation("Soldier_Assassin_00%02d.png",2,6, 0.04f), "Assassin_run");
	AnimationCache::getInstance()->addAnimation(createAnimation("Templar_00%02d.png",3,7, 0.04f), "Templar_run");

	AnimationCache::getInstance()->addAnimation(createAnimation("soldier_lvl1_00%02d.png",7,17, 0.04f), "level1_barracksSoilder_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("soldier_lvl2_00%02d.png",7,17, 0.04f), "level2_barracksSoilder_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("soldier_lvl3_00%02d.png",7,17, 0.04f), "level3_barracksSoilder_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("Soldier_Assassin_00%02d.png",7,17, 0.04f), "Assassin_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("Templar_00%02d.png",7,36, 0.04f), "Templar_attack");

	AnimationCache::getInstance()->addAnimation(createAnimation("soldier_lvl1_00%02d.png",18,23, 0.04f), "level1_barracksSoilder_dead");
	AnimationCache::getInstance()->addAnimation(createAnimation("soldier_lvl2_00%02d.png",18,23, 0.04f), "level2_barracksSoilder_dead");
	AnimationCache::getInstance()->addAnimation(createAnimation("soldier_lvl3_00%02d.png",18,23, 0.04f), "level3_barracksSoilder_dead");
	AnimationCache::getInstance()->addAnimation(createAnimation("Soldier_Assassin_00%02d.png",69,76, 0.04f), "Assassin_dead");
	AnimationCache::getInstance()->addAnimation(createAnimation("Templar_00%02d.png",94,103, 0.04f), "Templar_dead");

	AnimationCache::getInstance()->addAnimation(createAnimation("Soldier_Assassin_00%02d.png",19,43, 0.04f), "Assassin_skill1");
	AnimationCache::getInstance()->addAnimation(createAnimation("Soldier_Assassin_00%02d.png",44,69, 0.04f), "Assassin_skill2");
	
	AnimationCache::getInstance()->addAnimation(createAnimation("Templar_00%02d.png",61,94, 0.04f), "Templar_skill1");
	AnimationCache::getInstance()->addAnimation(createAnimation("Templar_00%02d.png",36,60, 0.04f), "Templar_skill2");


	AnimationCache::getInstance()->addAnimation(createAnimation("tower_barracks_lvl1_layer2_00%02d.png",1,25,0.04f),"level1_barracks_opendoor");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_barracks_lvl2_layer2_00%02d.png",1,25,0.04f),"level2_barracks_opendoor");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_barracks_lvl3_layer2_00%02d.png",1,25,0.04f),"level3_barracks_opendoor");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_assasins_layer2_00%02d.png",1,24,0.04f),"level4_barracks_opendoor");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_templars_layer2_00%02d.png",1,4,0.04f),"level5_barracks_opendoor");

	AnimationCache::getInstance()->addAnimation(createAnimation("TemplarTower_Fire_00%02d.png",1,11,0.04f),"level5_barracks_fire");


	// add by leo
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_tena1_death_%4d.png", 3524, 3529, 0.08f), "HSL_tena1_death");
	//AnimationCache::getInstance()->addAnimation(createAnimation("HSL_tena1_runup_%4d.png", 3542, 3547, 0.08f), "HSL_tena1_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_tena1_runleft_%4d.png", 3548, 3553, 0.08f), "HSL_tena1_runleft");
	//AnimationCache::getInstance()->addAnimation(createAnimation("HSL_tena1_rundown_%4d.png", 3530, 3535, 0.08f), "HSL_tena1_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_tena1_runright_%4d.png", 3536, 3541, 0.08f), "HSL_tena1_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_tena1_attack_%4d.png", 3554, 3559, 0.08f), "HSL_tena1_attack");


	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_tena2_death_%4d.png", 1815, 1820, 0.08f), "HSL_tena2_death");
	//AnimationCache::getInstance()->addAnimation(createAnimation("HSL_tena2_runup_%4d.png", 1833, 1838, 0.08f), "HSL_tena2_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_tena2_runleft_%4d.png", 1839, 1844, 0.08f), "HSL_tena2_runleft");
	//AnimationCache::getInstance()->addAnimation(createAnimation("HSL_tena2_rundown_%4d.png", 1821, 1826, 0.08f), "HSL_tena2_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_tena2_runright_%4d.png", 1827, 1832, 0.08f), "HSL_tena2_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_tena2_attack_%4d.png", 1869, 1874, 0.08f), "HSL_tena2_attack");


	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_tena3_death_%4d.png", 1552, 1557, 0.08f), "HSL_tena3_death");
	//AnimationCache::getInstance()->addAnimation(createAnimation("HSL_tena3_runup_%4d.png", 1570, 1575, 0.08f), "HSL_tena3_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_tena3_runleft_%4d.png", 1576, 1581, 0.08f), "HSL_tena3_runleft");
	//AnimationCache::getInstance()->addAnimation(createAnimation("HSL_tena3_rundown_%4d.png", 1558, 1563, 0.08f), "HSL_tena3_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_tena3_runright_%4d.png", 1564, 1569, 0.08f), "HSL_tena3_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_tena3_attack_%4d.png", 1582, 1587, 0.08f), "HSL_tena3_attack");


	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_tena4_death_%4d.png", 2078, 2083, 0.08f), "HSL_tena4_death");
	//AnimationCache::getInstance()->addAnimation(createAnimation("HSL_tena4_runup_%4d.png", 2096, 2101, 0.08f), "HSL_tena4_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_tena4_runleft_%4d.png", 2102, 2107, 0.08f), "HSL_tena4_runleft");
	//AnimationCache::getInstance()->addAnimation(createAnimation("HSL_tena4_rundown_%4d.png", 2084, 2089, 0.08f), "HSL_tena4_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_tena4_runright_%4d.png", 2090, 2095, 0.08f), "HSL_tena4_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_tena4_attack_%4d.png", 2108, 2113, 0.08f), "HSL_tena4_attack");


	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_hands2_death_%4d.png", 1624, 1629, 0.08f), "HSL_hands2_death");
	//AnimationCache::getInstance()->addAnimation(createAnimation("HSL_hands2_runup_%4d.png", 1642, 1647, 0.08f), "HSL_hands2_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_hands2_runleft_%4d.png", 2529, 2534, 0.08f), "HSL_hands2_runleft");
	//AnimationCache::getInstance()->addAnimation(createAnimation("HSL_hands2_rundown_%4d.png", 1630, 1635, 0.08f), "HSL_hands2_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_hands2_runright_%4d.png", 1636, 1641, 0.08f), "HSL_hands2_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_hands2_attack_%4d.png", 2535, 2540, 0.08f), "HSL_hands2_attack");


	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_hands1_death_%4d.png", 1534, 1539, 0.08f), "HSL_hands1_death");
	//AnimationCache::getInstance()->addAnimation(createAnimation("HSL_hands1_runup_%4d.png", 2295, 2300, 0.08f), "HSL_hands1_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_hands1_runleft_%4d.png", 2301, 2306, 0.08f), "HSL_hands1_runleft");
	//AnimationCache::getInstance()->addAnimation(createAnimation("HSL_hands1_rundown_%4d.png", 1540, 1545, 0.08f), "HSL_hands1_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_hands1_runright_%4d.png", 1546, 1551, 0.08f), "HSL_hands1_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_hands1_attack_%4d.png", 2307, 2312, 0.08f), "HSL_hands1_attack");


	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_frank_death_%4d.png", 1682, 1687, 0.08f), "HSL_frank_death");
	//AnimationCache::getInstance()->addAnimation(createAnimation("HSL_frank_runup_%4d.png", 1670, 1675, 0.08f), "HSL_frank_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_frank_runleft_%4d.png", 1676, 1681, 0.08f), "HSL_frank_runleft");
	//AnimationCache::getInstance()->addAnimation(createAnimation("HSL_frank_rundown_%4d.png", 1658, 1663, 0.08f), "HSL_frank_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_frank_runright_%4d.png", 1664, 1669, 0.08f), "HSL_frank_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_frank_attack_%4d.png", 1851, 1856, 0.08f), "HSL_frank_attack");

}

void MyAnimation::init_earthquakeTower()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("EarthquakeTower_00%02d.png",1,25, 0.04f), "EarthquakeTower_operation_down");
	AnimationCache::getInstance()->addAnimation(createAnimation("EarthquakeTower_00%02d.png",26,50, 0.04f), "EarthquakeTower_operation_up");
	AnimationCache::getInstance()->addAnimation(createAnimation("EarthquakeTower_00%02d.png",67,102, 0.04f), "EarthquakeTower_drilling");

	AnimationCache::getInstance()->addAnimation(createAnimation("EarthquakeTower_Glow_00%02d.png",1,25, 0.04f), "EarthquakeTower_glow");
	AnimationCache::getInstance()->addAnimation(createAnimation("EarthquakeTower_lights_00%02d.png",1,8, 0.04f,"EarthquakeTower_lights_0001.png"), "EarthquakeTower_light");
	AnimationCache::getInstance()->addAnimation(createAnimation("EarthquakeTower_drill_00%02d.png",1,25, 0.04f), "EarthquakeTower_drill");
	AnimationCache::getInstance()->addAnimation(createAnimation("EarthquakeTower_HitSmoke_00%02d.png",1,15, 0.04f), "EarthquakeTower_hitsmoke");
}

void MyAnimation::init_mechsTower()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_mechs_layer2_00%02d.png",1,45, 0.04f), "MechsTower_layer2");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_mechs_layer3_00%02d.png",1,8, 0.04f), "MechsTower_layer3");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_mechs_layer4_00%02d.png",1,8, 0.04f), "MechsTower_layer4");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_mechs_layer4_00%02d.png",1,27, 0.04f), "MechsTower_layer6");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_mechs_layer7_00%02d.png",1,27, 0.04f), "MechsTower_layer7");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_mechs_layer8_00%02d.png",1,42, 0.04f), "MechsTower_layer8");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_mechs_layer9_00%02d.png",1,23, 0.04f,"tower_mechs_layer9_0001.png"), "MechsTower_layer9");

	AnimationCache::getInstance()->addAnimation(createAnimationR("tower_mechs_layer3_00%02d.png",8,1, 0.04f), "MechsTower_layer3_r");
	AnimationCache::getInstance()->addAnimation(createAnimationR("tower_mechs_layer4_00%02d.png",8,1, 0.04f), "MechsTower_layer4_r");

	AnimationCache::getInstance()->addAnimation(createAnimation("Mecha_00%02d.png",1,21, 0.03f), "Mecha_walk");
	AnimationCache::getInstance()->addAnimation(createAnimation("Mecha_00%02d.png",24,68, 0.03f,"Mecha_0001.png"), "Mecha_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("Mecha_0%03d.png",75,105, 0.03f), "Mecha_shoot");
	AnimationCache::getInstance()->addAnimation(createAnimation("Mecha_0%03d.png",106,143, 0.03f), "Mecha_shit");
	AnimationCache::getInstance()->addAnimation(createAnimation("Mecha_Shitting_0%03d.png",122,143, 0.03f,"Mecha_Shitting_0001.png"), "Mecha_shitting");
	AnimationCache::getInstance()->addAnimation(createAnimation("mech_missile_0%03d.png",106,143, 0.03f), "Mecha_missile");
}

void MyAnimation::init_CossbowHunterTower()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("CossbowHunter_shooter_0%03d.png",2,14, 0.02f,"CossbowHunter_shooter_0001.png"), "CossbowHunter_shooter_down");
	AnimationCache::getInstance()->addAnimation(createAnimation("CossbowHunter_shooter_0%03d.png",17,31, 0.02f,"CossbowHunter_shooter_0017.png"), "CossbowHunter_shooter_up");

	AnimationCache::getInstance()->addAnimation(createAnimation("CossbowHunter_shooter_0%03d.png",56,71, 0.02f,"CossbowHunter_shooter_0017.png"), "CossbowHunter_shooter_skill_up");
	AnimationCache::getInstance()->addAnimation(createAnimation("CossbowHunter_shooter_0%03d.png",34,53, 0.02f), "CossbowHunter_shooter_skill_down");

	AnimationCache::getInstance()->addAnimation(createAnimation("CossbowHunter_hawk_0%03d.png",1,145, 0.05f), "CossbowHunter_hawk");
}

void MyAnimation::init_TotemTower()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("TotemTower_EyesDown_0%03d.png",1,25, 0.04f), "TotemTower_EyesDown");

	AnimationCache::getInstance()->addAnimation(createAnimation("TotemTower_Shooter_0%03d.png",1,16, 0.04f,"TotemTower_Shooter_0001.png"), "TotemTower_Shooter_down");
	AnimationCache::getInstance()->addAnimation(createAnimation("TotemTower_Shooter_0%03d.png",23,44, 0.04f,"TotemTower_Shooter_0023.png"), "TotemTower_Shooter_up");

	AnimationCache::getInstance()->addAnimation(createAnimation("TotemTower_RedTotem_0%03d.png",1,29, 0.04f), "TotemTower_RedTotem");
	AnimationCache::getInstance()->addAnimation(createAnimation("TotemTower_VioletTotem_0%03d.png",1,29, 0.1f), "TotemTower_VioletTotem");
}

void MyAnimation::init_Executioner()
{
	/*
	AnimationCache::getInstance()->addAnimation(createAnimation("desertExecutioner_0%003d.png",73,98, 0.04f), "Executioner_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertExecutioner_0%003d.png",99,118, 0.04f), "Executioner_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertExecutioner_0%003d.png",49,72, 0.05f), "Executioner_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertExecutioner_0%003d.png",25,48, 0.05f), "Executioner_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertExecutioner_0%003d.png",1,24, 0.05f), "Executioner_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertExecutioner_0%003d.png",1,24, 0.05f), "Executioner_runright");
	*/

	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_doubleax_death_%4d.png", 2900, 2905, 0.08f), "Executioner_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_doubleax_runup_%4d.png", 2918, 2923, 0.08f), "Executioner_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_doubleax_runleft_%4d.png", 2924, 2929, 0.08f), "Executioner_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_doubleax_rundown_%4d.png", 2906, 2911, 0.08f), "Executioner_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_doubleax_runright_%4d.png", 2912, 2917, 0.08f), "Executioner_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_doubleax_attack_%4d.png", 2930, 2935, 0.08f), "Executioner_attack");
}

void MyAnimation::init_Wasp_Queen()
{
	/*
	AnimationCache::getInstance()->addAnimation(createAnimation("wasp_queen_0%003d.png",43,53, 0.1f), "WaspQueen_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("wasp_queen_0%003d.png",15,29, 0.04f), "WaspQueen_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("wasp_queen_0%003d.png",30,42, 0.04f), "WaspQueen_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("wasp_queen_0%003d.png",1,14, 0.04f), "WaspQueen_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("wasp_queen_0%003d.png",1,14, 0.04f), "WaspQueen_runright");
	*/

	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_gulu_death_%4d.png", 2421, 2426, 0.08f), "WaspQueen_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_gulu_runup_%4d.png", 2439, 2444, 0.08f), "WaspQueen_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_gulu_runleft_%4d.png", 2445, 2450, 0.08f), "WaspQueen_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_gulu_rundown_%4d.png", 2427, 2432, 0.08f), "WaspQueen_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_gulu_runright_%4d.png", 2433, 2438, 0.08f), "WaspQueen_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_gulu_attack_%4d.png", 2451, 2456, 0.08f), "WaspQueen_attack");
}

void MyAnimation::init_Wasp_Hornet()
{
	/*
	AnimationCache::getInstance()->addAnimation(createAnimation("wasp_hornet_0%003d.png",43,52, 0.1f), "WaspHornet_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("wasp_hornet_0%003d.png",15,29, 0.04f), "WaspHornet_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("wasp_hornet_0%003d.png",30,42, 0.04f), "WaspHornet_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("wasp_hornet_0%003d.png",1,14, 0.04f), "WaspHornet_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("wasp_hornet_0%003d.png",1,14, 0.04f), "WaspHornet_runright");
	*/

	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_gulu_death_%4d.png", 2421, 2426, 0.08f), "WaspHornet_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_gulu_runup_%4d.png", 2439, 2444, 0.08f), "WaspHornet_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_gulu_runleft_%4d.png", 2445, 2450, 0.08f), "WaspHornet_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_gulu_rundown_%4d.png", 2427, 2432, 0.08f), "WaspHornet_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_gulu_runright_%4d.png", 2433, 2438, 0.08f), "WaspHornet_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_gulu_attack_%4d.png", 2451, 2456, 0.08f), "WaspHornet_attack");
}
void MyAnimation::init_Scorpion()
{
	/*
	AnimationCache::getInstance()->addAnimation(createAnimation("scorpion_0%003d.png",27,69, 0.04f), "Scorpion_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("scorpion_0%003d.png",70,99, 0.04f), "Scorpion_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("scorpion_0%003d.png",10,18, 0.04f), "Scorpion_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("scorpion_0%003d.png",19,27, 0.04f), "Scorpion_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("scorpion_0%003d.png",1,9, 0.04f), "Scorpion_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("scorpion_0%003d.png",1,9, 0.04f), "Scorpion_runright");
	*/

	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_flyingghost_death_%4d.png", 3260, 3265, 0.08f), "Scorpion_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_flyingghost_runup_%4d.png", 3248, 3253, 0.08f), "Scorpion_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_flyingghost_runleft_%4d.png", 3254, 3259, 0.08f), "Scorpion_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_flyingghost_rundown_%4d.png", 3236, 3241, 0.08f), "Scorpion_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_flyingghost_runright_%4d.png", 3242, 3247, 0.08f), "Scorpion_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_flyingghost_attack_%4d.png", 3266, 3271, 0.08f), "Scorpion_attack");
}

void MyAnimation::init_Munra()
{
	/*
	AnimationCache::getInstance()->addAnimation(createAnimation("desertMunra_0%03d.png",122,163, 0.04f), "Munra_skill");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertMunra_0%03d.png",73,120, 0.04f), "Munra_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertMunra_0%03d.png",165,200, 0.04f), "Munra_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertMunra_0%03d.png",25,47, 0.04f), "Munra_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertMunra_0%03d.png",49,71, 0.04f), "Munra_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertMunra_0%03d.png",1,23, 0.04f), "Munra_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertMunra_0%03d.png",1,23, 0.04f), "Munra_runright");
	*/

	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_empirewitch_death_%4d.png", 2493, 2498, 0.08f), "Munra_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_empirewitch_runup_%4d.png", 2511, 2516, 0.08f), "Munra_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_empirewitch_runleft_%4d.png", 2517, 2522, 0.08f), "Munra_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_empirewitch_rundown_%4d.png", 2499, 2504, 0.08f), "Munra_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_empirewitch_runright_%4d.png", 2505, 2510, 0.08f), "Munra_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_empirewitch_attack_%4d.png", 2523, 2528, 0.08f), "Munra_attack");

	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_empirewitch_attack_%4d.png", 2523, 2528, 0.08f), "Munra_skill");
}

void MyAnimation::init_Fallen()
{
	/*
	AnimationCache::getInstance()->addAnimation(createAnimation("fallen_0%03d.png",48,69, 0.04f), "Fallen_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("fallen_0%03d.png",70,110, 0.04f), "Fallen_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("fallen_0%03d.png",17,32, 0.04f), "Fallen_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("fallen_0%03d.png",32,47, 0.04f), "Fallen_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("fallen_0%03d.png",1,16, 0.04f), "Fallen_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("fallen_0%03d.png",1,16, 0.04f), "Fallen_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("fallen_0%03d.png",114,146, 0.04f), "Fallen_birth");
	*/

	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_zombie_death_%4d.png", 2936, 2941, 0.08f), "Fallen_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_zombie_runup_%4d.png", 2954, 2959, 0.08f), "Fallen_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_zombie_runleft_%4d.png", 2960, 2965, 0.08f), "Fallen_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_zombie_rundown_%4d.png", 2942, 2947, 0.08f), "Fallen_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_zombie_runright_%4d.png", 2948, 2953, 0.08f), "Fallen_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_zombie_attack_%4d.png", 2966, 2971, 0.08f), "Fallen_attack");
	
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_zombie_death_%4d.png", 2936, 2941, 0.08f), "Fallen_birth");
}

void MyAnimation::init_Immortal()
{
	/*
	AnimationCache::getInstance()->addAnimation(createAnimation("desertImmortal_0%03d.png",67,88, 0.04f), "Immortal_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertImmortal_0%03d.png",89,124, 0.04f), "Immortal_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertImmortal_0%03d.png",23,44, 0.04f), "Immortal_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertImmortal_0%03d.png",45,66, 0.04f), "Immortal_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertImmortal_0%03d.png",1,22, 0.04f), "Immortal_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertImmortal_0%03d.png",1,22, 0.04f), "Immortal_runright");
	*/

	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_pikemen_death_%4d.png", 1785, 1790, 0.08f), "Immortal_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_pikemen_runup_%4d.png", 1803, 1808, 0.08f), "Immortal_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_pikemen_runleft_%4d.png", 1809, 1814, 0.08f), "Immortal_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_pikemen_rundown_%4d.png", 1791, 1796, 0.08f), "Immortal_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_pikemen_runright_%4d.png", 1797, 1802, 0.08f), "Immortal_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_pikemen_attack_%4d.png", 1881, 1886, 0.08f), "Immortal_attack");
}

void MyAnimation::init_reinforce()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("reinforce_C0_0%03d.png",1,6, 0.04f), "reinforce1_run");
	AnimationCache::getInstance()->addAnimation(createAnimation("reinforce_C0_0%03d.png",7,17, 0.04f), "reinforce1_attack");

	AnimationCache::getInstance()->addAnimation(createAnimation("reinforce_B0_0%03d.png",1,6, 0.04f,"reinforce_B0_0001.png"), "reinforce2_run");
	AnimationCache::getInstance()->addAnimation(createAnimation("reinforce_B0_0%03d.png",7,14, 0.04f,"reinforce_B0_0001.png"), "reinforce2_attack");
}

void MyAnimation::init_Gorilla()
{
	/*
	AnimationCache::getInstance()->addAnimation(createAnimation("Gorilla_0%03d.png",73,126, 0.04f), "Gorilla_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("Gorilla_0%03d.png",127,160, 0.04f), "Gorilla_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("Gorilla_0%03d.png",26,49, 0.04f), "Gorilla_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("Gorilla_0%03d.png",50,72, 0.04f), "Gorilla_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("Gorilla_0%03d.png",1,25, 0.04f), "Gorilla_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("Gorilla_0%03d.png",1,25, 0.04f), "Gorilla_runright");
	*/

	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_wolfsoldier_death_%4d.png", 2864, 2869, 0.08f), "Gorilla_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_wolfsoldier_runup_%4d.png", 2882, 2887, 0.08f), "Gorilla_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_wolfsoldier_runleft_%4d.png", 2888, 2893, 0.08f), "Gorilla_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_wolfsoldier_rundown_%4d.png", 2870, 2875, 0.08f), "Gorilla_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_wolfsoldier_runright_%4d.png", 2876, 2881, 0.08f), "Gorilla_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_wolfsoldier_attack_%4d.png", 2894, 2899, 0.08f), "Gorilla_attack");
}

void MyAnimation::init_Shaman()
{
	/*
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalShamanMagic_0%03d.png",127,150, 0.04f), "Shaman_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalShamanMagic_0%03d.png",171,177, 0.04f), "Shaman_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalShamanMagic_0%03d.png",23,44, 0.04f), "Shaman_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalShamanMagic_0%03d.png",45,66, 0.04f), "Shaman_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalShamanMagic_0%03d.png",1,22, 0.04f), "Shaman_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalShamanMagic_0%03d.png",1,22, 0.04f), "Shaman_runright");
	*/

	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_cleve_death_%4d.png", 3308, 3313, 0.08f), "Shaman_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_cleve_runup_%4d.png", 3326, 3331, 0.08f), "Shaman_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_cleve_runleft_%4d.png", 3332, 3337, 0.08f), "Shaman_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_cleve_rundown_%4d.png", 3314, 3319, 0.08f), "Shaman_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_cleve_runright_%4d.png", 3320, 3325, 0.08f), "Shaman_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_cleve_attack_%4d.png", 3338, 3343, 0.08f), "Shaman_attack");
}
void MyAnimation::init_Hunter()
{
	/*
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalHunter_0%03d.png",67,89, 0.04f), "Hunter_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalHunter_0%03d.png",106,138, 0.04f), "Hunter_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalHunter_0%03d.png",23,44, 0.04f), "Hunter_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalHunter_0%03d.png",45,66, 0.04f), "Hunter_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalHunter_0%03d.png",1,22, 0.04f), "Hunter_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalHunter_0%03d.png",1,22, 0.04f), "Hunter_runright");
	*/

	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_archer_death_%4d.png", 3374, 3379, 0.08f), "Hunter_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_archer_runup_%4d.png", 3356, 3361, 0.08f), "Hunter_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_archer_runleft_%4d.png", 3362, 3367, 0.08f), "Hunter_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_archer_rundown_%4d.png", 3344, 3349, 0.08f), "Hunter_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_archer_runright_%4d.png", 3350, 3355, 0.08f), "Hunter_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_archer_attack_%4d.png", 3380, 3385, 0.08f), "Hunter_attack");
}
void MyAnimation::init_Shield()
{
	/*
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalShamanShield_0%03d.png",67,90, 0.02f), "Shield_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalShamanShield_0%03d.png",100,118, 0.04f), "Shield_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalShamanShield_0%03d.png",23,44, 0.04f), "Shield_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalShamanShield_0%03d.png",45,66, 0.04f), "Shield_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalShamanShield_0%03d.png",1,22, 0.04f), "Shield_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalShamanShield_0%03d.png",1,22, 0.04f), "Shield_runright");
	*/

	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_flyingarcher_death_%4d.png", 3302, 3307, 0.08f), "Shield_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_flyingarcher_runup_%4d.png", 3284, 3289, 0.08f), "Shield_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_flyingarcher_runleft_%4d.png", 3290, 3295, 0.08f), "Shield_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_flyingarcher_rundown_%4d.png", 3272, 3277, 0.08f), "Shield_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_flyingarcher_runright_%4d.png", 3278, 3283, 0.08f), "Shield_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_flyingarcher_attack_%4d.png", 3296, 3301, 0.08f), "Shield_attack");
}
void MyAnimation::init_WingRider()
{
	/*
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalWingRider_0%03d.png",43,53, 0.02f), "WingRider_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalWingRider_0%03d.png",57,67, 0.04f), "WingRider_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalWingRider_0%03d.png",15,28, 0.04f), "WingRider_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalWingRider_0%03d.png",29,42, 0.04f), "WingRider_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalWingRider_0%03d.png",1,14, 0.04f), "WingRider_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalWingRider_0%03d.png",1,14, 0.04f), "WingRider_runright");
	*/

	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_flyingpikemen_death_%4d.png", 1928, 1933, 0.08f), "WingRider_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_flyingpikemen_runup_%4d.png", 1910, 1915, 0.08f), "WingRider_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_flyingpikemen_runleft_%4d.png", 1904, 1909, 0.08f), "WingRider_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_flyingpikemen_rundown_%4d.png", 1898, 1903, 0.08f), "WingRider_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_flyingpikemen_runright_%4d.png", 1916, 1921, 0.08f), "WingRider_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_flyingpikemen_attack_%4d.png", 1922, 1927, 0.08f), "WingRider_attack");

}

void MyAnimation::init_Priest()
{
	/*
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalShamanPriest_0%03d.png",67,150, 0.02f), "Priest_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalShamanPriest_0%03d.png",160,176, 0.04f), "Priest_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalShamanPriest_0%03d.png",23,44, 0.04f), "Priest_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalShamanPriest_0%03d.png",45,66, 0.04f), "Priest_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalShamanPriest_0%03d.png",1,22, 0.04f), "Priest_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalShamanPriest_0%03d.png",1,22, 0.04f), "Priest_runright");
	*/

	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_empiresoldier_death_%4d.png", 1719, 1724, 0.08f), "Priest_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_empiresoldier_runup_%4d.png", 1707, 1712, 0.08f), "Priest_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_empiresoldier_runleft_%4d.png", 1713, 1718, 0.08f), "Priest_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_empiresoldier_rundown_%4d.png", 1695, 1700, 0.08f), "Priest_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_empiresoldier_runright_%4d.png", 1701, 1706, 0.08f), "Priest_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_empiresoldier_attack_%4d.png", 1845, 1850, 0.08f), "Priest_attack");
}

void MyAnimation::init_Canibal()
{
	/*
	AnimationCache::getInstance()->addAnimation(createAnimation("Canibal_0%03d.png",67,77, 0.04f), "Canibal_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("Canibal_0%03d.png",78,130, 0.04f), "Canibal_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("Canibal_0%03d.png",23,44, 0.04f), "Canibal_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("Canibal_0%03d.png",45,66, 0.04f), "Canibal_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("Canibal_0%03d.png",1,22, 0.04f), "Canibal_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("Canibal_0%03d.png",1,22, 0.04f), "Canibal_runright");
	*/

	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_empirewizard_death_%4d.png", 1749, 1754, 0.08f), "Canibal_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_empirewizard_runup_%4d.png", 1737, 1742, 0.08f), "Canibal_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_empirewizard_runleft_%4d.png", 1743, 1748, 0.08f), "Canibal_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_empirewizard_rundown_%4d.png", 1725, 1730, 0.08f), "Canibal_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_empirewizard_runright_%4d.png", 1731, 1736, 0.08f), "Canibal_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_empirewizard_attack_%4d.png", 1857, 1862, 0.08f), "Canibal_attack");
}

void MyAnimation::init_BossEfreeti()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("Boss_Efreeti_0%03d.png",1,25, 0.04f), "Boss_Efreeti_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("Boss_Efreeti_0%03d.png",1,25, 0.04f), "Boss_Efreeti_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("Boss_Efreeti_0%03d.png",1,25, 0.04f), "Boss_Efreeti_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("Boss_Efreeti_0%03d.png",26,50, 0.04f), "Boss_Efreeti_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("Boss_Efreeti_0%03d.png",53,89, 0.04f), "Boss_Efreeti_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("Boss_Efreeti_0%03d.png",91,127, 0.1f), "Boss_Efreeti_skill");
	AnimationCache::getInstance()->addAnimation(createAnimation("Boss_Efreeti_0%03d.png",130,211, 0.04f), "Boss_Efreeti_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("Boss_Efreeti_Cloud_0%03d.png",1,11, 0.04f), "Boss_Efreeti_cloud");

	AnimationCache::getInstance()->addAnimation(createAnimation("desertEfreeti_0%03d.png",1,11, 0.04f), "Efreeti_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertEfreeti_0%03d.png",13,23, 0.04f), "Efreeti_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertEfreeti_0%03d.png",1,11, 0.04f), "Efreeti_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertEfreeti_0%03d.png",1,11, 0.04f), "Efreeti_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertEfreeti_0%03d.png",47,61, 0.04f), "Efreeti_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertEfreeti_0%03d.png",25,46, 0.04f), "Efreeti_attack");
}

void MyAnimation::release_BossEfreeti()
{
	AnimationCache::getInstance()->removeAnimation("Boss_Efreeti_runleft");
	AnimationCache::getInstance()->removeAnimation("Boss_Efreeti_runright");
	AnimationCache::getInstance()->removeAnimation("Boss_Efreeti_runup");
	AnimationCache::getInstance()->removeAnimation("Boss_Efreeti_rundown");
	AnimationCache::getInstance()->removeAnimation("Boss_Efreeti_attack");
	AnimationCache::getInstance()->removeAnimation("Boss_Efreeti_skill");
	AnimationCache::getInstance()->removeAnimation("Boss_Efreeti_death");
	AnimationCache::getInstance()->removeAnimation("Boss_Efreeti_cloud");

	AnimationCache::getInstance()->removeAnimation("Efreeti_runleft");
	AnimationCache::getInstance()->removeAnimation("Efreeti_rundown");
	AnimationCache::getInstance()->removeAnimation("Efreeti_runup");
	AnimationCache::getInstance()->removeAnimation("Efreeti_runright");
	AnimationCache::getInstance()->removeAnimation("Efreeti_death");
	AnimationCache::getInstance()->removeAnimation("Efreeti_attack");
}

void MyAnimation::release_BossCanibal()
{
	AnimationCache::getInstance()->removeAnimation("Boss_Canibal_runleft");
	AnimationCache::getInstance()->removeAnimation("Boss_Canibal_runright");
	AnimationCache::getInstance()->removeAnimation("Boss_Canibal_runup");
	AnimationCache::getInstance()->removeAnimation("Boss_Canibal_rundown");
	AnimationCache::getInstance()->removeAnimation("Boss_Canibal_attack");
	AnimationCache::getInstance()->removeAnimation("Boss_Canibal_skill_before");
	AnimationCache::getInstance()->removeAnimation("Boss_Canibal_skill");
	AnimationCache::getInstance()->removeAnimation("Boss_Canibal_skill_after");
	AnimationCache::getInstance()->removeAnimation("Boss_Canibal_death");

	AnimationCache::getInstance()->removeAnimation("CanibalBoos_Offspring_runleft");
	AnimationCache::getInstance()->removeAnimation("CanibalBoos_Offspring_rundown");
	AnimationCache::getInstance()->removeAnimation("CanibalBoos_Offspring_runup");
	AnimationCache::getInstance()->removeAnimation("CanibalBoos_Offspring_runright");
	AnimationCache::getInstance()->removeAnimation("CanibalBoos_Offspring_attack");
	AnimationCache::getInstance()->removeAnimation("CanibalBoos_Offspring_death");
}

void MyAnimation::init_BossCanibal()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalBoos_0%03d.png",1,31, 0.04f), "Boss_Canibal_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalBoos_0%03d.png",1,31, 0.04f), "Boss_Canibal_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalBoos_0%03d.png",1,31, 0.04f), "Boss_Canibal_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalBoos_0%03d.png",33,62, 0.04f), "Boss_Canibal_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalBoos_0%03d.png",65,91, 0.04f), "Boss_Canibal_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalBoos_0%03d.png",92,143, 0.1f), "Boss_Canibal_skill_before");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalBoos_0%03d.png",197,242, 0.04f), "Boss_Canibal_skill");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalBoos_0%03d.png",244,252, 0.04f), "Boss_Canibal_skill_after");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalBoos_0%03d.png",251,292, 0.04f), "Boss_Canibal_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalBoos_0%03d.png",184,197, 0.04f), "Boss_Canibal_jump");

	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalBoos_Offspring_0%03d.png",1,13, 0.04f), "CanibalBoos_Offspring_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalBoos_Offspring_0%03d.png",15,27, 0.04f), "CanibalBoos_Offspring_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalBoos_Offspring_0%03d.png",1,13, 0.04f), "CanibalBoos_Offspring_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalBoos_Offspring_0%03d.png",1,13, 0.04f), "CanibalBoos_Offspring_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalBoos_Offspring_0%03d.png",29,53, 0.04f), "CanibalBoos_Offspring_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("CanibalBoos_Offspring_0%03d.png",56,70, 0.04f), "CanibalBoos_Offspring_death");
}

void MyAnimation::init_blazefang()
{
	/*
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianBlazefang_0%03d.png",1,21, 0.04f), "Blazefang_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianBlazefang_0%03d.png",1,21, 0.04f), "Blazefang_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianBlazefang_0%03d.png",23,43, 0.04f), "Blazefang_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianBlazefang_0%03d.png",45,65, 0.04f), "Blazefang_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianBlazefang_0%03d.png",67,95, 0.04f), "Blazefang_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianBlazefang_0%03d.png",187,203, 0.04f), "Blazefang_death");
	*/


	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_bronzesoldier_death_%4d.png", 1993, 1998, 0.08f), "Blazefang_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_bronzesoldier_runup_%4d.png", 1981, 1986, 0.08f), "Blazefang_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_bronzesoldier_runleft_%4d.png", 1987, 1992, 0.08f), "Blazefang_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_bronzesoldier_rundown_%4d.png", 1969, 1974, 0.08f), "Blazefang_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_bronzesoldier_runright_%4d.png", 1975, 1980, 0.08f), "Blazefang_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_bronzesoldier_attack_%4d.png", 1999, 2004, 0.08f), "Blazefang_attack");
}

void MyAnimation::init_broodguard()
{
	/*
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianBroodguard_0%03d.png",1,21, 0.04f), "Broodguard_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianBroodguard_0%03d.png",1,21, 0.04f), "Broodguard_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianBroodguard_0%03d.png",23,43, 0.04f), "Broodguard_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianBroodguard_0%03d.png",45,65, 0.04f), "Broodguard_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianBroodguard_0%03d.png",67,95, 0.04f), "Broodguard_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianBroodguard_0%03d.png",97,114, 0.04f), "Broodguard_death");
	*/

	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_wolfswordsman_death_%4d.png", 2828, 2833, 0.08f), "Broodguard_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_wolfswordsman_runup_%4d.png", 2846, 2851, 0.08f), "Broodguard_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_wolfswordsman_runleft_%4d.png", 2852, 2857, 0.08f), "Broodguard_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_wolfswordsman_rundown_%4d.png", 2834, 2839, 0.08f), "Broodguard_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_wolfswordsman_runright_%4d.png", 2840, 2845, 0.08f), "Broodguard_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_wolfswordsman_attack_%4d.png", 2858, 2863, 0.08f), "Broodguard_attack");
}

void MyAnimation::init_elite()
{
	/*
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianElite_0%03d.png",1,21, 0.04f), "Elite_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianElite_0%03d.png",1,21, 0.04f), "Elite_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianElite_0%03d.png",23,43, 0.04f), "Elite_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianElite_0%03d.png",45,65, 0.04f), "Elite_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianElite_0%03d.png",67,123, 0.04f), "Elite_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianElite_0%03d.png",126,143, 0.04f), "Elite_death");
	*/

	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_skeleton_death_%4d.png", 3440, 3445, 0.08f), "Elite_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_skeleton_runup_%4d.png", 3428, 3433, 0.08f), "Elite_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_skeleton_runleft_%4d.png", 3434, 3439, 0.08f), "Elite_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_skeleton_rundown_%4d.png", 3416, 3421, 0.08f), "Elite_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_skeleton_runright_%4d.png", 3422, 3427, 0.08f), "Elite_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_skeleton_attack_%4d.png", 3446, 3451, 0.08f), "Elite_attack");
}

void MyAnimation::init_myrmidon()
{
	/*
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianMyrmidon_0%03d.png",1,21, 0.04f), "Myrmidon_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianMyrmidon_0%03d.png",1,21, 0.04f), "Myrmidon_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianMyrmidon_0%03d.png",23,43, 0.04f), "Myrmidon_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianMyrmidon_0%03d.png",45,65, 0.04f), "Myrmidon_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianMyrmidon_0%03d.png",67,85, 0.04f), "Myrmidon_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianMyrmidon_0%03d.png",87,104, 0.04f), "Myrmidon_death");
	*/

	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_darksoldier_death_%4d.png", 3020, 3025, 0.08f), "Myrmidon_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_darksoldier_runup_%4d.png", 3038, 3043, 0.08f), "Myrmidon_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_darksoldier_runleft_%4d.png", 3044, 3049, 0.08f), "Myrmidon_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_darksoldier_rundown_%4d.png", 3026, 3031, 0.08f), "Myrmidon_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_darksoldier_runright_%4d.png", 3032, 3037, 0.08f), "Myrmidon_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_darksoldier_attack_%4d.png", 3050, 3055, 0.08f), "Myrmidon_attack");
}

void MyAnimation::init_nightscale()
{
	/*
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianNightscale_0%03d.png",1,21, 0.04f), "Nightscale_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianNightscale_0%03d.png",1,21, 0.04f), "Nightscale_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianNightscale_0%03d.png",23,43, 0.04f), "Nightscale_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianNightscale_0%03d.png",45,65, 0.04f), "Nightscale_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianNightscale_0%03d.png",67,98, 0.04f), "Nightscale_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianNightscale_0%03d.png",125,144, 0.04f), "Nightscale_death");
	*/

	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_statue_death_%4d.png", 3056, 3061, 0.08f), "Nightscale_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_statue_runup_%4d.png", 3074, 3079, 0.08f), "Nightscale_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_statue_runleft_%4d.png", 3080, 3085, 0.08f), "Nightscale_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_statue_rundown_%4d.png", 3062, 3067, 0.08f), "Nightscale_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_statue_runright_%4d.png", 3068, 3073, 0.08f), "Nightscale_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_statue_attack_%4d.png", 3086, 3091, 0.08f), "Nightscale_attack");
}

void MyAnimation::init_Quetza()
{
	/*
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianQuetzal_0%03d.png",1,13, 0.04f), "Quetzal_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianQuetzal_0%03d.png",1,21, 0.04f), "Quetzal_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianQuetzal_0%03d.png",15,27, 0.04f), "Quetzal_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianQuetzal_0%03d.png",28,41, 0.04f), "Quetzal_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianQuetzal_0%03d.png",43,65, 0.04f), "Quetzal_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("SaurianQuetzal_0%03d.png",65,83, 0.04f), "Quetzal_death");
	*/

	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_amphibian_death_%4d.png", 3404, 3409, 0.08f), "Quetzal_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_amphibian_runup_%4d.png", 3392, 3397, 0.08f), "Quetzal_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_amphibian_runleft_%4d.png", 3398, 3403, 0.08f), "Quetzal_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_amphibian_rundown_%4d.png", 3380, 3385, 0.08f), "Quetzal_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_amphibian_runright_%4d.png", 3386, 3391, 0.08f), "Quetzal_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("HSL_amphibian_attack_%4d.png", 3410, 3415, 0.08f), "Quetzal_attack");
}

void MyAnimation::init_underground()
{
	init_blazefang();
	init_broodguard();
	init_elite();
	init_myrmidon();
	init_nightscale();
}