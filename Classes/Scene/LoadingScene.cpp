#include "LoadingScene.h"
#include "WelcomeScene.h"
#include "Data/MyAnimation.h"
#include "AudioEngine.h"

USING_NS_CC;


Scene* LoadingScene::createScene()
{
    auto scene = Scene::create();
    
    auto layer = LoadingScene::create();

    scene->addChild(layer);

    return scene;
}

bool LoadingScene::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
	numberOfLoadedRes = 0;
	auto visibleSize = Director::getInstance()->getVisibleSize();
	auto back = Sprite::create("Default@2x.png");
	back->setRotation(-90.0f);
	back->setPosition(Point(visibleSize.width/2,visibleSize.height/2));
	addChild(back);
	schedule(CC_SCHEDULE_SELECTOR(LoadingScene::logic));
	return true;
}

void LoadingScene::loadSouce()
{
	AudioEngine::lazyInit();

	AudioEngine::preload("sound/savage_music_theme.wav");
	AudioEngine::preload("sound/savage_music_desert_battle.wav");
	AudioEngine::preload("sound/Map_Theme_1.wav");

	AudioEngine::preload("sound/Sound_GUIButtonCommon.wav");
	AudioEngine::preload("sound/Sound_GUIOpenTowerMenu.wav");

	AudioEngine::preload("sound/GUITransitionClose.wav");
	AudioEngine::preload("sound/GUITransitionOpen.wav");

	AudioEngine::preload("sound/Archer_Ready.wav");
	AudioEngine::preload("sound/Artillery_Ready.wav");
	AudioEngine::preload("sound/Mage_Ready.wav");
	AudioEngine::preload("sound/Barrack_Ready.wav");

	AudioEngine::preload("sound/Sound_WaveIncoming.wav");
	AudioEngine::preload("sound/Sound_WinStars.wav");
	AudioEngine::preload("sound/Sound_LooseLife.wav");
	AudioEngine::preload("sound/Sound_NextWaveReady.wav");
	AudioEngine::preload("sound/Sound_TowerBuilding.wav");
	AudioEngine::preload("sound/Sound_TowerOpenDoor.wav");
	AudioEngine::preload("sound/Sound_TowerSell.wav");
	AudioEngine::preload("sound/Sound_TowerUpgrade.wav");
	AudioEngine::preload("sound/Sound_VictoryCheer.wav");

	AudioEngine::preload("sound/Sound_ArrowHit2.wav");
	AudioEngine::preload("sound/Sound_ArrowHit3.wav");
	AudioEngine::preload("sound/Sound_ArrowRelease3.wav");
	AudioEngine::preload("sound/Sound_ArrowRelease2.wav");
	AudioEngine::preload("sound/Sound_Bomb1.wav");
	AudioEngine::preload("sound/Sound_MageShot.wav");
	
	AudioEngine::preload("sound/Sound_QuestCompleted.wav");
	AudioEngine::preload("sound/Sound_QuestFailed.wav");

	AudioEngine::preload("sound/Sound_FireballUnleash.wav");
	AudioEngine::preload("sound/Sound_FireballHit.wav");

	AudioEngine::preload("sound/Archer_Taunt1.wav");
	AudioEngine::preload("sound/Archer_Taunt2.wav");
	AudioEngine::preload("sound/Barrack_Taunt1.wav");
	AudioEngine::preload("sound/Barrack_Taunt2.wav");
	AudioEngine::preload("sound/Mage_Taunt1.wav");
	AudioEngine::preload("sound/Mage_Taunt2.wav");
	AudioEngine::preload("sound/Barrack_Move.wav");
	AudioEngine::preload("sound/Artillery_Taunt1.wav");
	AudioEngine::preload("sound/Artillery_Taunt2.wav");

	AudioEngine::preload("sound/crossbow_eagle.wav");
	AudioEngine::preload("sound/crossbow_multishot.wav");
	AudioEngine::preload("sound/crossbow_taunt_ready.wav");

	AudioEngine::preload("sound/axlethrower_totem_vanish.wav");
	AudioEngine::preload("sound/axlethrower_totem_weakness.wav");
	AudioEngine::preload("sound/axlethrower_totem_spirits.wav");
	AudioEngine::preload("sound/axlethrower_taunt_totem1.wav");

	AudioEngine::preload("sound/dwaarp_attack.wav");
	AudioEngine::preload("sound/dwaarp_drillIn.wav");
	AudioEngine::preload("sound/dwaarp_drillOut.wav");
	AudioEngine::preload("sound/dwaarp_lavaSmash.wav");

	AudioEngine::preload("sound/mecha_dropoil.wav");
	AudioEngine::preload("sound/mecha_spawn.wav");
	AudioEngine::preload("sound/mecha_taunt_ready.wav");
	AudioEngine::preload("sound/mecha_walk.wav");

	AudioEngine::preload("sound/archmage_attack.wav");
	AudioEngine::preload("sound/archmage_precharge.wav");
	AudioEngine::preload("sound/archmage_taunt_ready.wav");
	AudioEngine::preload("sound/archmage_twister.wav");

	AudioEngine::preload("sound/necromancer_attack.wav");
	AudioEngine::preload("sound/necromancer_deathknight_taunt_2.wav");
	AudioEngine::preload("sound/necromancer_taunt_dknight.wav");
	AudioEngine::preload("sound/necromancer_taunt_ready.wav");

	AudioEngine::preload("sound/assassin_taunt_ready.wav");

	AudioEngine::preload("sound/Reinforcements_Event2.wav");

	AudioEngine::preload("sound/inapp_cash.wav");
	AudioEngine::preload("sound/inapp_freeze.wav");
	AudioEngine::preload("sound/inapp_hearts.wav");

	AudioEngine::preload("sound/Sound_RallyPointPlaced.wav");

	AudioEngine::preload("sound/earthquake_taunt_ready.wav");

	AudioEngine::preload("sound/boss_efreeti_clapping.wav");
	AudioEngine::preload("sound/boss_efreeti_death.wav");
	AudioEngine::preload("sound/boss_efreeti_evillaugh.wav");

	AudioEngine::preload("sound/boss_mono_chestdrum.wav");
	AudioEngine::preload("sound/boss_mono_chimps_1.wav");
	AudioEngine::preload("sound/boss_mono_chimps_2.wav");
	AudioEngine::preload("sound/boss_mono_chimps_3.wav");
	AudioEngine::preload("sound/boss_mono_death.wav");

	numberOfLoadedRes++;
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("mainmenu_spritesheet_32_1-hd.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("mainmenu_spritesheet_32_2-hd.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("map_spritesheet_16_a-hd.plist"); 
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("ingame_gui-hd.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("common_spritesheet_16_a_2-hd.plist"); 
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("map_spritesheet_16_a_3-hd.plist"); 
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("map_spritesheet_32_2-hd.plist");  
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("map_spritesheet_16_na-hd.plist"); 
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("map_spritesheet_32-hd.plist"); 
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("towers-hd.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("common_spritesheet_16_na_2_IPAD2-hd.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("common_spritesheet_32-hd.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("gui_menu_sprite_campaign_32-hd.plist"); 
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("gui_menu_sprite_iron_32-hd.plist"); 
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("gui_menu_sprite_heroic_32-hd.plist"); 
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("gui_menu_sprite_master_32-hd.plist"); 
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("common_spritesheet_16_na-hd.plist"); 
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("map_spritesheet_16_na_2-hd.plist"); 
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("cinematics_comic1-hd.plist"); 
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("enemies_desert_3-hd.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("enemies_desert-hd.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("enemies_jungle-hd.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("enemies_jungle_2-hd.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("enemies_underground-hd.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("enemies_underground_2-hd.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("enemies_underground_3-hd.plist");

	// add by leo
	MyAnimation::getInstance()->init_Quetza();
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("HSL_enemies.plist");
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("HSL_hero.plist");



	MyAnimation::getInstance()->init_jungle();
	MyAnimation::getInstance()->init_desert();
	MyAnimation::getInstance()->init_underground();
	MyAnimation::getInstance()->init();
	numberOfLoadedRes++;
}

void LoadingScene::logic(float dt)
{
	if(numberOfLoadedRes == 0)
	{
		loadSouce();
	}
    if (numberOfLoadedRes == 2)
    {
      auto scene = WelcomeScene::createScene();
      Director::getInstance()->replaceScene(scene);
    }
}