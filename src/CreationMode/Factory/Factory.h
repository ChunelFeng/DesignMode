/**
* �ļ����ƣ�Factory.h
* ժ    Ҫ������ģʽͷ�ļ�����������ģʽ��
*
* ��ǰ�汾��1.0.0
* ��    ��: Chunel
* ��    �ڣ�2018-08-21
* ��    ע���½�
*/

#ifndef _FACTORY_PATTERN_H_
#define _FACTORY_PATTERN_H_

#include <iostream>

using namespace std;

class SingleCore
{
public:
    virtual void Show() = 0;
};

//����A
class SingleCoreA: public SingleCore
{
public:
    void Show() { cout << "SingleCore A" << endl; }
};

//����B
class SingleCoreB: public SingleCore
{
public:
    void Show() { cout<<"SingleCore B"<<endl; }
};

class Factory
{
public:
    virtual SingleCore* CreateSingleCore() = 0;
};

//����A�˵Ĺ���
class FactoryA: public Factory
{
public:
    SingleCoreA * CreateSingleCore() { return new SingleCoreA; }
};  

//����B�˵Ĺ���
class FactoryB: public Factory
{
public:
    SingleCoreB* CreateSingleCore() { return new SingleCoreB; }
};

#endif
