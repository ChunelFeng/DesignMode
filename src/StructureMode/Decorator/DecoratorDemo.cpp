#include <iostream>
#include "Decorator.h"

using namespace std;

void main()
{
    /* ����һ��DarkRoast�����϶���,
       Ȼ��ͨ��Mocha��Whip����װ���� */
    cout << "Decorator Pattern Demo : " << endl;
    Beverage * beverage = new DarkRoast();
    beverage = new Mocha(beverage);    // Mocha���ص�ʵ������Beverage��ļ̳еļ̳�
    beverage = new Whip(beverage);

    // ��ӡ��������+���ϵ��շ����
    cout << beverage->getDescription()
         << " cost "
         << beverage->cost() << endl;

    system("PAUSE");
    return;
}