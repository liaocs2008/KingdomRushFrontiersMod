#ifndef _BASE_MAP_H_
#define _BASE_MAP_H_ 

#include "cocos2d.h"
#include "Layer/TouchLayer.h"
#include "Layer/PlayerStateMenu.h"
#include "Sprite/WaveFlag.h"
#include "Monster/GroupMonster.h"

USING_NS_CC;

class BaseMap : public Layer
{
public:
    CREATE_FUNC(BaseMap);
	//��ǰ�ؿ�
	CC_SYNTHESIZE(int, level, Level);
	//���״̬��
	PlayerStateMenu* playerState;
	void bindPlayerStateMenu(PlayerStateMenu* playerState);
	//��ͼ����
	Sprite* mapSprite;
	TouchLayer* mTouchLayer;
protected:
	void initTouchLayer();
	//�����Ѷ�
	int difficulty;
	int wave;
	int maxWave;
	int gold;
	int life;
	int startGold;
	int maxLife;
	unsigned int time;
	//wave������������
	std::vector<std::vector<Vector<GroupMonster*>>> waveVector;
	//����·���͹ؿ�����
	void loadPathFromPlist();
	void loadAndSetLevelData();
	//�洢·�������� ���ڵ���Ϊ�㣬��·��·��
	std::vector<std::vector<std::vector<Point>>> path;
	//��Ļ�ߴ�
	Size winSize;
	
	//��һ����ʾ���� 0Ϊ·��1,1Ϊ·��2
	Vector<WaveFlag*> waveFlags;
	void addWaveProgressBars(std::vector<Point> waveFlagLocations);
	void showWaveProgressBars(float dt);

	void onEnterTransitionDidFinish() override;
	//��ͬ�ؿ���ͬ���¼�����
	virtual void waveEvent();
	//���ó�ʼ��ͼλ��
	void setMapPosition();
	//���½�Ǯ������
	void updateGoldAndLife();
	void update(float dt) override;
	//ʤ������
	void victory();
	//�������
	bool isEnd;
	//��ʼ���
	bool isStart;
	//��ʼ�µ�һ������
	virtual void addWaves(float dt);
	//��ӹ���
	virtual void addMonsters(float dt);
	//��ʼ����ͼ
	void initMap();
	//��Ӳ�ͬ��ͼװ����
	virtual void addOrnament(){};
	//��ӽ�����
	virtual void addTerrains(){};
	//�˳�
	void onExitTransitionDidStart() override;
	void onExit() override {};
};

#endif