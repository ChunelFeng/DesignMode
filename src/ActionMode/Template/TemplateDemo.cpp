/**
ģ��ģʽ

��Ҫ�����
һЩ����ͨ�ã��������̵ľ���ʵ�ֲ�ͬ

ʹ�ó�����
1���ж�����๲�õķ��������߼���ͬ
2����Ҫ�ġ����ӵķ��������Կ�����Ϊģ�巽��

����
����ģʽ�����Ķ���Ĵ�������
��ģ��ģʽ��ϵ���Ǳ������Ķ�����ͨ�õ�����
*/

#include <iostream>
#include "Template.h"

using namespace std;

void main()
{
    cout << "Template Pattern Demo : " << endl;

    /* ����һ��IFlyTek��Ķ���ע�⣬��ʹ��Company���͵�ָ�룩
       Ȼ��ʵ����Recruit������ */
    Company * iflytek = new IFlyTek();
    iflytek->Recruit();

    /* ���е�Company�������Recruit()���� */
    Company * hikvision = new Hikvision();
    hikvision->Recruit();

    delete iflytek;
    delete hikvision;

    system("PAUSE");
    return;
}