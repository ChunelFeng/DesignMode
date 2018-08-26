#include <iostream>
#include "Singleton.h"

using namespace std;

void locked()
{
    // ģ����߳��е��߳�������������
    cout << "locked" << endl;
    return;
}

void unlocked()
{
    // ģ����߳��е��߳�����ȥ������
    cout << "unlocked" << endl;
    return;
}

// �м�ʹ��ǰ��Ҫ��ʼ���������޷�ͨ������
Singleton * Singleton::ms_instance = NULL;

Singleton::Singleton()
{
    // �����캯������Ϊ˽�з���
    cout << "Singleton Init" << endl;
    return;
}

Singleton::~Singleton()
{
    cout << "Singleton Deinit" << endl;
    return;
}

Singleton * Singleton::getInstance()
{
    // ��̬��Ա�������ⲿ����ʹ��
    if (NULL == ms_instance)
    {
        locked();
        if (NULL == ms_instance)
        {
            // ���߳�����£����û�б����������򴴽�
            // �����Ż��������ģʽ
            ms_instance = new Singleton();
        }
        unlocked();
    }

    return ms_instance;
};