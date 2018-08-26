#include "Strategy.h"
#include "iostream"

using namespace std;

/* Strategy ��ʵ�� */
Strategy::Strategy()
{
    cout << "Strategy::Strategy" << endl;
}

Strategy::~Strategy()
{
    cout << "Strategy::~Strategy" << endl;
}


/* ConcreteStrategyA ��ʵ�� */
ConcreteStrategyA::ConcreteStrategyA()
{
    cout << "ConcreteStrategyA::ConcreteStrategyA" << endl;
}

ConcreteStrategyA::~ConcreteStrategyA()
{
    cout << "ConcreteStrategyA::~ConcreteStrategyA" << endl;
}

void ConcreteStrategyA::AlgrithmInterface()
{
    cout << "ConcreteStrategyA::AlgrithmInterface" << endl;
}


/* ConcreteStrategyB ��ʵ�� */
ConcreteStrategyB::ConcreteStrategyB()
{
    cout << "ConcreteStrategyB::ConcreteStrategyB" << endl;
}

ConcreteStrategyB::~ConcreteStrategyB()
{
    cout << "ConcreteStrategyB::~ConcreteStrategyB" << endl;
}

void ConcreteStrategyB::AlgrithmInterface()
{
    cout << "ConcreteStrategyB::AlgrithmInterface" << endl;
}


/* Context ��ʵ�� */
Context::Context(Strategy * strategy)
{
    this->m_strategy = strategy;
    return;
}

Context::~Context()
{
    if (this->m_strategy)
    {
        delete this->m_strategy;
        this->m_strategy = NULL;
    }

    return;
}

void Context::DoAction()
{
    // ����m_strategy���ͣ�ȷ�������ִ�к���
    this->m_strategy->AlgrithmInterface();
    return;
}