/*
��������ģʽ���򵥹���ģʽ��������Ҫ���ڣ�
����ģʽ������ͨ�����ֹ�������������
���򵥹���ģʽ��ͬһ�������д�����ͬ����

��Ҫ�����ڣ�
��ȷ�˲�ͬ�����£�������ͬʵ�������
*/

#include <iostream>
#include "Factory.h"

using namespace std;

void main()
{
    cout << "Factory Pattern Demo : " << endl;

    /* ��������A����ֱ����������ƷA
       �ŵ��ǣ�һ��������Ӧһ����Ʒ
       ȱ���ǣ�������Ӳ�Ʒ������Ҫ���ӹ��� */
    Factory * factory = new FactoryA();
    factory->CreateSingleCore()->Show();
    delete factory;

    system("PAUSE");
    return;
}