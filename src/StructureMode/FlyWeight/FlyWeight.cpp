#include "FlyWeight.h"

using namespace std;

ConcreteFlyWeight::ConcreteFlyWeight()
{
    /* ʵ�ֵľ�����Ԫ�� */
    cout << "ConcreteFlyWeight::ConcreteFlyWeight()" << endl;
    return;
}

ConcreteFlyWeight::~ConcreteFlyWeight()
{
    cout << "ConcreteFlyWeight::~ConcreteFlyWeight()" << endl;
    return;
}

void ConcreteFlyWeight::operation(FlyWeightType type)
{
    /* ������Ԫ��Ĺ��ܺ���������type�����־��幦�� */
    switch (type)
    {
    case FIRST_TYPE: { cout << "ConcreteFlyWeight First Type." << endl; break; }
    case SECOND_TYPE: { cout << "ConcreteFlyWeight Second Type." << endl; break; }
    default: break;
    }

    return;
}

FlyWeightFactory::FlyWeightFactory(int total_num)
{
    cout << "FlyWeightFactory::FlyWeightFactory()" << endl;
    for (int i = 0; i < total_num; i++)
    {
        /* ����num����Ԫ����ʵ���ϴ�������FirstFlyWeight������ */
        FlyWeight * temp = new ConcreteFlyWeight();
        m_flyweights.push_back(temp);
    }
    m_num = total_num;
    return;
}

FlyWeightFactory::~FlyWeightFactory()
{
    cout << "FlyWeightFactory::~FlyWeightFactory()" << endl;
    for (int i = 0; i < m_num; i++)
    {
        FlyWeight * temp = m_flyweights.at(i);
        delete temp;
        temp = NULL;
    }

    return;
}

FlyWeight * FlyWeightFactory::GetFlyWeight(int key_num)
{
    // ���ض�Ӧ�ĵ�key��Ԫ��
    // ��ʵ�������п�����һЩ������hashƥ��֮��Ļ�ȡ��ʽ��������vector��һ����򵥵�ʾ��
    return m_flyweights.at(key_num);
}