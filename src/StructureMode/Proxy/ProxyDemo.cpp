/*
ͨ�������࣬ȥ������ʵ���еĺ���
Subject�����࣬�����˴��������ʵ����Ĺ�ͬ��
RealSubject��������Ҫ�����õ���
Proxy���������

Tips:
1��װ����ģʽ��Ϊ�������һ�����߶�����ܣ����������ǿ��ƶԶ���ķ���

����ģʽ��Ҫ�����ڣ�
1����ĳЩ����£�һ�������ʺϻ��߲���ֱ��������һ�����󣬶������������ڿͻ��˺�Ŀ�����֮�����н������

*/

#include <iostream>
#include "Proxy.h"

using namespace std;

void main()
{
    cout << "Proxy Pattern Demo : " << endl;
    Subject * proxy = new Proxy();

    // ����ʵ���ϵ��õ���RealSubject���Request����
    // ��proxy�ĺ����У���new RealSubject�Ĵ���
    proxy->Request();

    delete proxy;
    proxy = NULL;

    system("PAUSE");
    return;
}