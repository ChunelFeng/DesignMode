#include "ResponsibilityChain.h"

Manager::Manager(Manager * manager, string name)
    :m_manager(manager)    // �ϼ��ļ���
    ,m_name(name)    // �ϼ�������
{
    cout << "Manager::Manager()" << endl;
    return;
}

Manager::~Manager()
{
    cout << "Manager::~Manager()" << endl;
    return;
}

void Manager::DealWithRequest(string name, int salary)
{
    cout << "Manager::DealWithRequest()" << endl;
    return;
}

/* ��������������͵ľ��� */
ThirdManager::ThirdManager(Manager * manager, string name)
    : Manager(manager, name)
{
    cout << "ThirdManager::ThirdManager()" << endl;
    return;
}

ThirdManager::~ThirdManager()
{
    cout << "ThirdManager::~ThirdManager()" << endl;
    return;
}

void ThirdManager::DealWithRequest(string name, int salary)
{
    cout << "ThirdManager::DealWithRequest()" << endl;
    string info;
    if (salary < THIRD_LEVEL_SALARY)
    {
        info = "Third level manager : [" + m_name    \
               + "] agree [" + name    \
               + "] add salary [" + to_string(salary) + "] yuan";
        cout << info << endl;
    }
    else
    {
        info = "Add range beyond thrid manager control, send request to second manager.";
        cout << info << endl;
        m_manager->DealWithRequest(name, salary);
    }

    return;
}

/* ���������в㾭�� */
SecondManager::SecondManager(Manager * manager, string name)
    : Manager(manager, name)
{
    cout << "SecondManager::SecondManager()" << endl;
    return;
}

SecondManager::~SecondManager()
{
    cout << "SecondManager::~SecondManager()" << endl;
    return;
}

void SecondManager::DealWithRequest(string name, int salary)
{
    cout << "SecondManager::DealWithRequest()" << endl;
    string info;
    if (salary < SECOND_LEVEL_SALARY)
    {
        info = "Second level manager : [" + m_name    \
               + "] agree [" + name    \
               + "] add salary [" + to_string(salary) + "] yuan";
        cout << info << endl;
    }
    else
    {
        info = "Add range beyond second manager control, send request to first manager.";
        cout << info << endl;
        m_manager->DealWithRequest(name, salary);
    }

    return;
}

/* һ�������߼����� */
FirstManager::FirstManager(Manager * manager, string name)
    : Manager(manager, name)
{
    cout << "FirstManager::FirstManager()" << endl;
    return;
}

FirstManager::~FirstManager()
{
    cout << "FirstManager::~FirstManager()" << endl;
    return;
}

void FirstManager::DealWithRequest(string name, int salary)
{
    cout << "FirstManager::DealWithRequest()" << endl;
    string info;
    if (salary < FIRST_LEVEL_SALARY)
    {
        info = "Second level manager : [" + m_name    \
               + "] agree [" + name    \
               + "] add salary [" + to_string(salary) + "] yuan";
        cout << info << endl;
    }
    else
    {
        info = "Add range beyond first manager control, request failed.";
        cout << info << endl;
    }

    return;
}