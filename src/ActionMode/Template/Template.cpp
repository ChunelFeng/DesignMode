#include <iostream>
#include "Template.h"

using namespace std;

void Company::Recruit()
{
    /* ��������Ƹ���̣���Ҫ�����¼�����
       1�����ܼ���
       2������
       3����Offer
       ���ܼ����Ĺ�������ͬ�ģ��ʲ�Ϊ�麯���������ڻ���������ʵ��
       �������������ǲ�ͬ�ģ��趨Ϊ�麯�� */
    ReceiveResume();

    Interview();
    SendOffer();
}

void Company::ReceiveResume()
{
    cout << "Company::ReceiveResume()" << endl;
    return;
}

void Hikvision::Interview()
{
    cout << "Hikvision Interview" << endl;
    return;
}

void Hikvision::SendOffer()
{
    cout << "Hikvision SendOffer" << endl;
    return;
}

void IFlyTek::Interview()
{
    cout << "IFlyTek Interview" << endl;
    return;
}

void IFlyTek::SendOffer()
{
    cout << "IFlyTek SendOffer" << endl;
    return;
}
