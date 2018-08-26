/**
* �ļ����ƣ�FlyWeight.h
* ժ    Ҫ����Ԫģʽͷ�ļ�
*
* ��ǰ�汾��1.0.0
* ��    ��: Chunel
* ��    �ڣ�2018-08-24
* ��    ע���½�
*/

#ifndef _FLYWEIGHT_PATTERN_H_
#define _FLYWEIGHT_PATTERN_H_

#include <iostream>
#include <vector>

using namespace std;

typedef enum
{
    /* ������Ԫ����������� */
    FIRST_TYPE = 1,
    SECOND_TYPE = 2
}FlyWeightType;

class FlyWeight
{
    /* ��Ԫ�ĳ�����࣬��ʵ�ʹ��� */
public:
    FlyWeight()
    {
        cout << "FlyWeight::FlyWeight()" << endl;
    }
    virtual ~FlyWeight()
    {
        cout << "FlyWeight::~FlyWeight()" << endl;
    }

    virtual void operation(FlyWeightType type) = 0;
};

class ConcreteFlyWeight : public FlyWeight
{
    /* ����ʵ��FlyWeight���ܵ���-1 */
public:
    ConcreteFlyWeight();
    ~ConcreteFlyWeight();

    /* ������Ԫ��Ĺ��ܺ��� */
    void operation(FlyWeightType type);
};

class FlyWeightFactory
{
public:
    /* num һ���������ٸ�����
       type �����������͵Ķ��� */
    FlyWeightFactory(int total_num);
    ~FlyWeightFactory();

    FlyWeight * GetFlyWeight(int key_num);

private:
    vector<FlyWeight *> m_flyweights;    // �����ҵĵط�
    int m_num;    // ��Ԫ����
};

#endif