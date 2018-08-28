/*
�Ž�ģʽ���ڰѳ�����ʵ�ֻ����ʹ�ö��߿��Զ����仯

��Ҫ�����
�ж��ֿ��ܻ�仯������£��ü̳л�����౬ը�����⣬��չ�����

���ӣ�
�����У���ͬ���ֻ����ͣ��������β�ͬ�Ĳ���ϵͳ����
ͨ���Ž�ģʽ�����OS��Phone��ƥ�䣬����Ҫ���δ����µ���
���ʹ�õ�ʱ�򣬻���ʹ��Phone���еĺ���
����ʵ���ϣ��ǵ�����OS�е�����
*/

#include "Bridge_OS.h"
#include "Bridge_Phone.h"

void main()
{
    cout << "Bridge Pattern Demo : " << endl;

    /* ͨ���Ž�ģʽ��ʹ�ò�ͬ��OS��Ͳ�ͬ��Phone������޷����� */
    OS* pIOS1 = new IOSSubSystem1();    //����һ������ϵͳ
    Phone* iPhone4 = new iPhone(pIOS1);    //Ӧ�õ����ֻ���
    iPhone4->SetOS();    // Phone���SetOS()������OS����GetOS()���Ӷ���ȡ��Ϣ

    OS* pIOS2 = new IOSSubSystem2();    //����һ������ϵͳ
    Phone* iPhone6 = new iPhone(pIOS2);    //Ӧ�õ����ֻ���
    iPhone6->SetOS();

    OS* pSaiBian1 = new SaiBianSubSystem1();    //����һ������ϵͳ
    Phone* Nokia1 = new Nokia(pSaiBian1);    //Ӧ�õ����ֻ���
    Nokia1->SetOS();

    OS* pSaiBian2 = new SaiBianSubSystem2();    //����һ������ϵͳ
    Phone* Nokia2 = new Nokia(pSaiBian2);    //Ӧ�õ����ֻ���
    Nokia2->SetOS();

    /* ɾ���ڴ���Ϣ */
    DELETE_OBJECT(iPhone4);
    DELETE_OBJECT(iPhone6);
    DELETE_OBJECT(Nokia1);
    DELETE_OBJECT(Nokia2);

    system("PAUSE");
    return;
}