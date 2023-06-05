#include "ChooseDifficulty.h"
#include "Scene/GameScene.h"
#include "Scene/TransitionGame.h"
#include "Data/GameManager.h"
#include "Data/SoundManager.h"

USING_NS_CC;


Scene* ChooseDifficulty::createSceneWithLevel(int level)
{
    //����һ�����ͷŵĳ�������
    auto scene = Scene::create();
    auto layer = ChooseDifficulty::create();
	layer->initWithLevel(level);
    scene->addChild(layer);
    return scene;
}

// // ������ʼ������
bool ChooseDifficulty::init()
{

    if ( !Layer::init() )
    {
        return false;
    }
	visibleSize = Director::getInstance()->getVisibleSize();
	difficulty = 0;
	 //��ȡ�����ֻ�������Ļ�ߴ�
    

	/***********************************************************************************************/
	for(int i = 0;i<4;i++){
		for(int j =0;j<5;j++){
			auto sprite = Sprite::createWithSpriteFrameName("encyclopedia_bgTile.png");
			sprite->setPosition(Point(i*320,j*160));
			sprite->setAnchorPoint(Point(0,0));
			addChild(sprite);
		}
	}
	/***********************************************************************************************/
	//�ڶ��㱳��ͼƬ ��ͼ

	auto bgSprite2 = Sprite::createWithSpriteFrameName("LevelSelect_Bg.png");
	bgSprite2->setPosition(Point(visibleSize.width*0.5,visibleSize.height*0.5));//����������Ļ���м�λ��
	//bgSprite2->setScaleX(scaleX);
	this->addChild(bgSprite2,1);

	/***********************************************************************************************/
	//�����㱳��ͼƬ 
	//�Ŵ�
	auto loupeSprite = Sprite::createWithSpriteFrameName("LevelSelect_loupe.png");
	loupeSprite->setPosition(Point(visibleSize.width*0.21,390));
	//loupeSprite->setScale(scaleX);
	this->addChild(loupeSprite,2);

	//�رհ�ť
	auto closeSprite =MenuItemSprite::create(Sprite::createWithSpriteFrameName("LevelSelect_Back_0001.png"),
	Sprite::createWithSpriteFrameName("LevelSelect_Back_0002.png"),CC_CALLBACK_1(ChooseDifficulty::menuCallback,this));  
    Menu *closeMenu = Menu::create(closeSprite,NULL);  //ʵ������֮���˳���л�  
    closeSprite->setPosition(Point(visibleSize.width*0.87,580));  
	closeMenu->setPosition(Vec2::ZERO);
    this->addChild(closeMenu,2);  

	//����ս���İ�ť
	auto startModeSprite =MenuItemSprite::create(Sprite::createWithSpriteFrameName("levelSelect_startMode_0001.png"),
	Sprite::createWithSpriteFrameName("levelSelect_startMode_0002.png"),CC_CALLBACK_1(ChooseDifficulty::menuCallnext,this));  
    Menu *startModeMenu = Menu::create(startModeSprite,NULL);  //ʵ������֮���˳���л�  
    startModeSprite->setPosition(Point(visibleSize.width*0.8,100));  
	startModeMenu->setPosition(Vec2::ZERO);
    this->addChild(startModeMenu,2); 

 
 //=======================�Ŵ���С���ǵȵ�����======================================================================================//
	//��һ��С����
	 star1 = Sprite::createWithSpriteFrameName("levelSelect_badges_0002.png");
	 star1->setPosition(Point(210,580));
	 //star1->setScale(scaleX);
	 star1->setRotation(-30.0f);
	 addChild(star1,9);

//--------------------------//�ڶ���С����-----------------------------------------------------------------------------------------------------------//

	 star2 = Sprite::createWithSpriteFrameName("levelSelect_badges_0002.png");
	 star2->setPosition(Point(260,600));
	 //star2->setScale(scaleX);
	 star2->setRotation(-15.0f);
	 addChild(star2,9);

//-------------------------------//������С����------------------------------------------------------------------------------------------------------//

	 star3 = Sprite::createWithSpriteFrameName("levelSelect_badges_0002.png");
	 star3->setPosition(Point(310,605));
	// star3->setScale(scaleX);
	 addChild(star3,9);
//-------------------------------//����------------------------------------------------------------------------------------------------------//
	 star4 = Sprite::createWithSpriteFrameName("levelSelect_badges_0004.png");
	 star4->setPosition(Point(360,600));
	// star4->setScale(scaleX);
	 star4->setRotation(15.0f);
	 addChild(star4,9);

//-------------------------------//ȭͷ------------------------------------------------------------------------------------------------------//

	star5 = Sprite::createWithSpriteFrameName("levelSelect_badges_0006.png");
	star5->setPosition(Point(410,580));
	//star5->setScale(scaleX);
	star5->setRotation(30.0f);
	addChild(star5,9);

   /**********************************************************************************************************/

	/*****************************
	**����ؿ�ǰ����-��ʼ
	**��ɫ���壨λ����ɫ����֮�£�
	******************************/
	
	//��ȡxml�ĵ�,����ValueVector��
	

	/*****************************
	**����ؿ�ǰ����-����
	*****************************/

	/**********************************ɳĮ���ޣ����������*******************************************************************/

	

////////////---------------------------��ť1--------------------------------------------------------------------------------
	auto imgNormal1 = MenuItemSprite::create(Sprite::createWithSpriteFrameName("levelSelect_butModes_0005.png"),Sprite::createWithSpriteFrameName("levelSelect_butModes_0001.png"));  
    auto imgSelect1 = MenuItemSprite::create(Sprite::createWithSpriteFrameName("levelSelect_butModes_0001.png"),Sprite::createWithSpriteFrameName("levelSelect_butModes_0005.png"));  


	toggleItem1 = MenuItemToggle::createWithCallback(
		                                                 CC_CALLBACK_1(ChooseDifficulty::starMenuCallback1,this), 
		                                                 imgNormal1,
														 imgSelect1,NULL); 
	
	toggleItem1->setTag(1); 
    toggleItem1->setPosition(Point(visibleSize.width*0.12,20)); 
    toggleItem1->setSelectedIndex(0);   // ���Ǹս����ʱ��������ǩ�Ǳ�ѡ�е�  
    toggleItem1->setEnabled(false); // ѡ�еı�ǩ�����ٵ��  
   //////////////////////////----------------------------��ť2------------------------------------------------
    auto imgNormal2 = MenuItemSprite::create(Sprite::createWithSpriteFrameName("levelSelect_butModes_0006.png"),Sprite::createWithSpriteFrameName("levelSelect_butModes_0006.png"));  
    auto imgSelect2 = MenuItemSprite::create(Sprite::createWithSpriteFrameName("levelSelect_butModes_0002.png"),Sprite::createWithSpriteFrameName("levelSelect_butModes_0002.png")); 
	auto imgDisable2 =MenuItemSprite::create(Sprite::createWithSpriteFrameName("levelSelect_butModes_0004.png"),Sprite::createWithSpriteFrameName("levelSelect_butModes_0004.png"));


	toggleItem2 = MenuItemToggle::createWithCallback(
		                                                 CC_CALLBACK_1(ChooseDifficulty::starMenuCallback2,this), 
		                                                 imgNormal2,
														 imgSelect2,
														 imgDisable2,NULL);    //	CCMenuItemFont::create("ccc")
	toggleItem2->setSelectedIndex(2);
	toggleItem2->setEnabled(false);
	toggleItem2->setPosition(Point(visibleSize.width*0.24,20)); 
 
	 //////////////----------------------��ť3--------------------------------------------------------------------------
	auto imgNormal3 = MenuItemSprite::create(Sprite::createWithSpriteFrameName("levelSelect_butModes_0007.png"),Sprite::createWithSpriteFrameName("levelSelect_butModes_0007.png"));  
	auto imgSelect3 = MenuItemSprite::create(Sprite::createWithSpriteFrameName("levelSelect_butModes_0003.png"),Sprite::createWithSpriteFrameName("levelSelect_butModes_0003.png"));  
	auto imgDisable3 =MenuItemSprite::create(Sprite::createWithSpriteFrameName("levelSelect_butModes_0004.png"),Sprite::createWithSpriteFrameName("levelSelect_butModes_0004.png"));

	toggleItem3=MenuItemToggle::createWithCallback(
		                                                 CC_CALLBACK_1(ChooseDifficulty::starMenuCallback3,this), 
		                                                 imgNormal3,
														 imgSelect3,
														 imgDisable3,NULL);    //	CCMenuItemFont::create("ccc")

	toggleItem3->setSelectedIndex(2);
	toggleItem3->setEnabled(false);
    toggleItem3->setPosition(Point(visibleSize.width*0.36,20));
     
    auto toggleMenu = Menu::create(toggleItem1,toggleItem2,toggleItem3, NULL);  
    toggleMenu->setPosition(Point(0,0));  
    this->addChild(toggleMenu, 2);  
	auto listenerkeyPad = EventListenerKeyboard::create();  
	listenerkeyPad->onKeyReleased = CC_CALLBACK_2(ChooseDifficulty::onKeyReleased, this);  
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listenerkeyPad, this); 

	return true;
}

void ChooseDifficulty::initWithLevel(int level)
{
	ValueVector txt_description = 
		FileUtils::getInstance()->getValueVectorFromFile(StringUtils::format("level%d_description.xml",level));
	int i = 0;
	for( auto& e : txt_description){
		auto txt_map = txt_description.at(i).asValueMap();//����ֵת����Map��ʽ������txt_map��
		int id_int = txt_map.at("id").asInt();//��ȡid
		if(id_int == i){
			blueStrTop = txt_map.at("blueStrTop").asString();
			blackStr[0] = txt_map.at("blackStr1").asString();
			blackStr[1] = txt_map.at("blackStr2").asString();
			blackStr[2] = txt_map.at("blackStr3").asString();
			blueStr[0] = txt_map.at("blueStr1").asString();
			blueStr[1] = txt_map.at("blueStr2").asString();
			blueStr[2] = txt_map.at("blueStr3").asString();
		}
		i++;//next description
	}
	auto label1 = Label::createWithTTF(blueStrTop, "Marker Felt.ttf", 40);
    label1->setPosition(Point(visibleSize.width*0.5, 620));
	label1->setColor(Color3B(0,0,0));
	label1->setRotation(3.0f);
	label1->setAnchorPoint(Point(0,1));
    this->addChild(label1, 1);

	/**********************************��ɫ����:��ս��Ӣ��ģʽ������ģʽ********************************************************/

	blueLabel = Label::createWithTTF(blueStr[0], "Marker Felt.ttf", 30);
	blueLabel->setPosition(Point(visibleSize.width*0.5, 570));
	blueLabel->setRotation(3.0f);
	blueLabel->setColor(Color3B(65,94,241));
	blueLabel->setAnchorPoint(Point(0,1));
    this->addChild(blueLabel, 1);




	blackLabel = Label::createWithTTF(blackStr[0], "Marker Felt.ttf", 21);
	blackLabel->setPosition(Point(visibleSize.width*0.50, 525));
	blackLabel->setRotation(3.0f);
	blackLabel->setColor(Color3B(0,0,0));
	blackLabel->setAnchorPoint(Point(0,1));

    this->addChild(blackLabel, 1);
	this->level = level;
	int star = UserDefault::getInstance()->getIntegerForKey(StringUtils::format(GameManager::getInstance()->LEVELX_STARNUM,level).c_str(),0);
	toggleItem1->setPosition(toggleItem1->getPosition()+Point(0,20));

	setBadges(star);
	auto thumb = Sprite::createWithSpriteFrameName(StringUtils::format("thumb_stage%d.png",level+1));
	thumb->setPosition(Point(260,400));
	addChild(thumb,1);
}

void ChooseDifficulty::onKeyReleased(EventKeyboard::KeyCode keycode, Event* event)
{
    switch (keycode)
    {
	case EventKeyboard::KeyCode::KEY_BACK:   //���ؼ���
		Director::getInstance()->popScene();
        break;
    case EventKeyboard::KeyCode::KEY_MENU:      //�˵�����
        break;
    case::EventKeyboard::KeyCode::KEY_HOME:
        break;
    default:
        break;
    }
}

void ChooseDifficulty::setBadges(int star)
{
	switch(star)
	{
	case(0):
		toggleItem1->setSelectedIndex(0);       
		toggleItem2->setSelectedIndex(2);      
		toggleItem3->setSelectedIndex(2);  
		toggleItem1->setPosition(toggleItem1->getPosition()+Point(0,20));

		toggleItem1->setEnabled(false);
		break;
	case 1:
		toggleItem1->setSelectedIndex(0);       
		toggleItem2->setSelectedIndex(2);      
		toggleItem3->setSelectedIndex(2);      
		star1->setSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("levelSelect_badges_0001.png"));

		toggleItem1->setEnabled(false);
		break;
	case 2:
		toggleItem1->setSelectedIndex(0);       
		toggleItem2->setSelectedIndex(2);      
		toggleItem3->setSelectedIndex(2);  
		toggleItem1->setEnabled(false);
		star1->setSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("levelSelect_badges_0001.png"));
		star2->setSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("levelSelect_badges_0001.png"));
		break;
	case 3:
		toggleItem1->setSelectedIndex(0);     
		toggleItem2->setSelectedIndex(1);      
		toggleItem3->setSelectedIndex(1);  
		toggleItem1->setEnabled(false);
		toggleItem2->setEnabled(true);
		toggleItem3->setEnabled(true);
		star1->setSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("levelSelect_badges_0001.png"));
		star2->setSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("levelSelect_badges_0001.png"));
		star3->setSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("levelSelect_badges_0001.png"));
		break;
	case 4:
		toggleItem1->setSelectedIndex(0);     
		toggleItem2->setSelectedIndex(1);      
		toggleItem3->setSelectedIndex(1);  
		toggleItem1->setEnabled(false);
		toggleItem2->setEnabled(true);
		toggleItem3->setEnabled(true);
		star1->setSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("levelSelect_badges_0001.png"));
		star2->setSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("levelSelect_badges_0001.png"));
		star3->setSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("levelSelect_badges_0001.png"));
		star4->setSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("levelSelect_badges_0003.png"));
		break;
	case 5:
		toggleItem1->setSelectedIndex(0);     
		toggleItem2->setSelectedIndex(1);      
		toggleItem3->setSelectedIndex(1);  
		toggleItem1->setEnabled(false);
		toggleItem2->setEnabled(true);
		toggleItem3->setEnabled(true);
		star1->setSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("levelSelect_badges_0001.png"));
		star2->setSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("levelSelect_badges_0001.png"));
		star3->setSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("levelSelect_badges_0001.png"));
		star4->setSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("levelSelect_badges_0003.png"));
		star5->setSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("levelSelect_badges_0005.png"));
		break;
	default:
		break;
	}

}


//�رհ�ť������һ����
void ChooseDifficulty::menuCallback(Ref* pSpender){

	SoundManager::playClickEffect();
	Director::getInstance()->popScene();
}

//��ʼս����ť������һ����
void ChooseDifficulty::menuCallnext(Ref* pSpender)
{     
	SoundManager::playClickEffect();

	// add by leo
	//if (level > 0)
	//	return;

	Director::getInstance()->replaceScene(TransitionGame::create(2.0f, GameScene::playGame(level,difficulty)));      
}

//����1
void ChooseDifficulty::starMenuCallback1(Ref* pSpender)
{
	SoundManager::playClickEffect();
	difficulty = 0;
	toggleItem1->runAction(MoveBy::create(0.1f,Point(0,20)));
	if(toggleItem2->getSelectedIndex() == 0)
		toggleItem2->runAction(MoveBy::create(0.1f,Point(0,-20)));
	if(toggleItem3->getSelectedIndex() == 0)
		toggleItem3->runAction(MoveBy::create(0.1f,Point(0,-20)));

	toggleItem1->setEnabled(false); 
	toggleItem1->setSelectedIndex(0); 
	toggleItem2->setSelectedIndex(1);       
	toggleItem2->setEnabled(true);
	toggleItem3->setSelectedIndex(1);       
	toggleItem3->setEnabled(true);  

	blueLabel->setString(blueStr[0]);
	blackLabel->setString(blackStr[0]);
}

void ChooseDifficulty::starMenuCallback2(Ref* pSpender)
{
	SoundManager::playClickEffect();
	difficulty = 1;
	toggleItem2->runAction(MoveBy::create(0.1f,Point(0,20)));
	if(toggleItem1->getSelectedIndex() == 0)
		toggleItem1->runAction(MoveBy::create(0.1f,Point(0,-20)));
	if(toggleItem3->getSelectedIndex() == 0)
		toggleItem3->runAction(MoveBy::create(0.1f,Point(0,-20)));
	toggleItem2->setSelectedIndex(0);       
	toggleItem2->setEnabled(false);
	toggleItem1->setSelectedIndex(1);       
	toggleItem1->setEnabled(true);
	toggleItem3->setSelectedIndex(1);       
	toggleItem3->setEnabled(true); 



	blueLabel->setString(blueStr[1]);
	blackLabel->setString(blackStr[1]); 
}

void ChooseDifficulty::starMenuCallback3(Ref* pSpender)//////////
{
	SoundManager::playClickEffect();
	difficulty = 2;
	toggleItem3->runAction(MoveBy::create(0.1f,Point(0,20)));
	if(toggleItem2->getSelectedIndex() == 0)
		toggleItem2->runAction(MoveBy::create(0.1f,Point(0,-20)));
	if(toggleItem1->getSelectedIndex() == 0)
		toggleItem1->runAction(MoveBy::create(0.1f,Point(0,-20)));
	toggleItem3->setSelectedIndex(0);       
	toggleItem3->setEnabled(false); 
	toggleItem1->setSelectedIndex(1);       
	toggleItem1->setEnabled(true);
	toggleItem2->setSelectedIndex(1);       
	toggleItem2->setEnabled(true);  

	blueLabel->setString(blueStr[2]);
	blackLabel->setString(blackStr[2]); 
}