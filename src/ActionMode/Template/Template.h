/**
* 文件名称：Template.h
* 摘    要：模板模式头文件
*
* 当前版本：1.0.0
* 作    者: Chunel
* 日    期：2018-08-25
* 备    注：新建
*/

#ifndef _TEMPLATE_PATTERN_H_
#define _TEMPLATE_PATTERN_H_

#include <iostream>

using namespace std;

class Company
{
public:
    Company() { cout << "Company::Company()" << endl; };
    virtual ~Company() { cout << "Company::~Company()" << endl; };

    /* 公司基类，基类中完成特定流程（Recruit）过程
       该过程的流程步骤是特定的
       只是有些流程对于所有公司都一样
       有些流程每个公司均有不同 */
    void Recruit();
    void ReceiveResume();
    virtual void Interview() = 0;
    virtual void SendOffer() = 0;
};

class Hikvision : public Company
{
public:
    Hikvision() { cout << "Hikvision::Hikvision()" << endl; };
    virtual ~Hikvision() { cout << "Hikvision::~Hikvision()" << endl; };

    virtual void Interview();
    virtual void SendOffer();
};

class IFlyTek : public Company
{
public:
    IFlyTek() { cout << "IFlyTek::IFlyTek()" << endl; };
    virtual ~IFlyTek() { cout << "IFlyTek::~IFlyTek()" << endl; };

    virtual void Interview();
    virtual void SendOffer();
};

#endif