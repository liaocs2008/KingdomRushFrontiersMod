#include "cocos2d.h"

USING_NS_CC;

class EncyclopaediaTips : public Layer
{
public:
    static Scene* createScene();
	bool init() override;
	void menuCallback(Ref *pSender); //�л�����

   void starMenuCallback1(Ref* pSender); //��ť�������ֵ��л�

   void starMenuCallback2(Ref* pSender);//��ť�������ֵ��л�
   void leftChange(Ref *pSender);
  
private :
	 int i;
	 Label* ch;//��������
     Label* lb;//��������

	 MenuItemSprite *sprite29;
	 MenuItemSprite *sprite30;

	
	 std::string string[30];

    CREATE_FUNC(EncyclopaediaTips);

	
};