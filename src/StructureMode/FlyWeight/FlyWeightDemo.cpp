/*
��Ԫģʽ

��Ҫ�����
�д�������ʱ�����ܻ�����ڴ����
�����еĹ�ͬ���ֳ���������������ͬ��ҵ������
��ֱ�ӷ����ڴ������еĶ��󣬱������´���

���˼·��
��Ψһ��ʶ�루key_num���жϣ����ر�ʶ������Ӧ�ľ������
*/

#include <iostream>
#include "FlyWeight.h"

using namespace std;

#define TOTAL_NUM (2)            // �ܹ��������ٸ�����
#define KEY_NUM (1)              // ʹ�õڼ�������

void main()
{
    cout << "FlyWeight Pattern Demo : " << endl;

    /* ��Factory�У�����TOTAL_NUM��������Ԫ�� */
    FlyWeightFactory * factory = new FlyWeightFactory(TOTAL_NUM);
    /* ��ȡ���еĵ�key_num��Ԫ�أ�Ȼ������书�ܺ��� */
    FlyWeight * flyweight = factory->GetFlyWeight(KEY_NUM);
    flyweight->operation(SECOND_TYPE);

    /* ɾ��֮ǰ�����������еľ�����Ԫ�� */
    delete factory;

    system("PAUSE");
    return;
}