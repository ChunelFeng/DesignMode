/**
* 文件名称：Observer.h
* 摘    要：观察者模式头文件
*
* 当前版本：1.0.0
* 作    者: Chunel
* 日    期：2018-08-25
* 备    注：新建
*/

#ifndef _OBSERVER_PATTERN_H_
#define _OBSERVER_PATTERN_H_

#include <iostream>
#include <list>
#include <string>

using namespace std;

class Observer
{
    /* 观察者类，被通知信息的类 */
public:
    Observer() { cout << "Observer::Observer()" << endl; }
    virtual ~Observer() { cout << "Observer::~Observer()" << endl; }

    virtual void Update(const string & message) = 0;
    virtual string getName() = 0;
};

class Subject
{
    /* 提供注册和删除观察者接口的基类
       可以派生出QQ群，或者微信群等类，用于提供具体观察者的注册和通知平台 */
public:
    Subject() { cout << "Subject::Subject()" << endl; };
    virtual ~Subject() { cout << "Subject::~Subject()" << endl; };

    /* 提供注册/删除/通知功能 */
    virtual void registerObserver(Observer * observer) = 0;
    virtual void removeObserver(Observer * observer) = 0;
    virtual void notifyObserver(string & message) = 0;
};

class QQGroup : public Subject
{
    /* 在具体的类中，实现消息的统一通知 */
public:
    QQGroup();
    virtual ~QQGroup();

    void registerObserver(Observer * observer);
    void removeObserver(Observer * observer);
    void notifyObserver(string & message);

private:
    /* 被注册的观察者的集合 */
    list<Observer *> * m_observers;
};

class RoomMate : public Observer
{
    /* Observer具体的实现类 */
public:
    /* 被告知的具体对象，需要注册到QQGroup中 */
    RoomMate(string name, string current_action, string next_action);
    virtual ~RoomMate();

    /* 在QQGroup的notifyObserver时，被循环调用 */
    void Update(const string & message);
    string getName();

private:
    string m_name;    // 被注册者的名字
    string m_current_action;    // 被注册者目前的行动
    string m_next_action;    // 被注册者下一步的行动
};


#endif