#include <iostream>
#include <list>
#include "Observer.h"

using namespace std;

/* ����Ŀ�꣬���ڴ洢�����RoomMate���� */
QQGroup::QQGroup()
{
    cout << "QQGroup::QQGroup()" << endl;
    m_observers = new list<Observer *>();

    return;
}

QQGroup::~QQGroup()
{
    cout << "QQGroup::~QQGroup()" << endl;
    delete m_observers;
    return;
}

void QQGroup::registerObserver(Observer * observer)
{
    cout << "QQGroup::registerObserver()" << endl;
    m_observers->push_back(observer);
    return;
}

void QQGroup::removeObserver(Observer * observer)
{
    cout << "QQGroup::removeObserver()" << endl;
    if (m_observers->size() > 0)
    {
        m_observers->remove(observer);
    }
    return;
}

void QQGroup::notifyObserver(string & message)
{
    /* ����֪ͨע�ᵽQQGroup�е�Observer��Ա */
    cout << "QQGroup::notifyObserver()" << endl;
    for (list<Observer *>::iterator iter = m_observers->begin();
         iter != m_observers->end();
         iter++)
    {
        // *iter���Ǳ�ע��Ĺ۲���
        (*iter)->Update(message);
    }

    return;
}

/* ��֪ͨ��ʵ���࣬�̳���Observer�� */
RoomMate::RoomMate(string name, string current_action, string next_action)
{
    cout << "RoomMate::RoomMate(), name = " << name << endl;
    m_name = name;
    m_current_action = current_action;
    m_next_action = next_action;
}

RoomMate::~RoomMate()
{
    cout << "RoomMate::~RoomMate" << endl;
    return;
}

void RoomMate::Update(const string & message)
{
    /* ��ע��Ķ������֪ͨ��Ϣ�ĺ�������QQGroup�������ε��� */
    cout << "This is " << getName() << endl;
    if (message == "next")
    {
        cout << "Next action : " << m_next_action << endl;
    }
    else
    {
        cout << "Current action : " << m_current_action << endl;
    }

    return;
}

string RoomMate::getName()
{
    return m_name;
}