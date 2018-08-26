/**
�۲���ģʽ

��ͼ��
��������һ��һ�Զ��������ϵ��
��һ�������״̬�����ı�ʱ��
���б�ע�ᵽ���еĶ��󶼻ᱻ֪ͨ�������Զ�����

��Ҫ�����
һ������״̬�ı䣬�����йض�������и��£���֤�߶ȵ�Э��
*/

#include <iostream>
#include <string>
#include "Observer.h"

using namespace std;

void main()
{
    cout << "Observer Pattern Demo : " << endl;

    /* ��������RoomMate���󣬵ȴ���֪ͨ��Ϣ */
    RoomMate * MateA = new RoomMate("A", "A current action", "A next action");
    RoomMate * MateB = new RoomMate("B", "B current action", "B next action");
    RoomMate * MateC = new RoomMate("C", "C current action", "C next action");

    /* ����QQGroup���󣬽�����RoomMateע���ȥ */
    QQGroup * group = new QQGroup();
    group->registerObserver(MateA);
    group->registerObserver(MateB);
    group->registerObserver(MateC);

    /* ��QQȺ�﷢��current����Ϣ
       Ŀ�����group��״̬�����ı�
       ���е�Observer��������Ե���Ӧ */
    string message = "current";
    group->notifyObserver(message);

    /* ��QQȺ��ɾ��MateB����Ⱥ����next����Ϣ */
    group->removeObserver(MateB);
    message = "next";
    group->notifyObserver(message);

    delete MateA;
    delete MateB;
    delete MateC;
    delete group;

    system("PAUSE");
    return;
}