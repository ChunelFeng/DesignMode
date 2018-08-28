/**
* �ļ����ƣ�Bridge_OS.h
* ժ    Ҫ���Ž�ģʽͷ�ļ�
*
* ��ǰ�汾��1.0.0
* ��    ��: Chunel
* ��    �ڣ�2018-08-28
* ��    ע���½�
*/

#ifndef _BRIDGE_OS_PATTERN_H_
#define _BRIDGE_OS_PATTERN_H_

#include <iostream>
#include <string>

using namespace std;

//����Ĳ���ϵͳ��
class OS
{
public:
    virtual std::string GetOS() = 0;
};

//IOS���ʵ��
class IOS : public OS
{
public:
    virtual std::string GetOS()
    {
        return "IOS Operator System";
    }
};

//�������ʵ��
class SaiBian : public OS
{
public:
    virtual std::string GetOS()
    {
        return "SaiBian Operator System";
    }
};

//IOSĳ���汾��ʵ��
class IOSSubSystem1 : public IOS
{
public:
    virtual std::string GetOS()
    {
        return "IOS 5.1.1 Operator System";
    }
};

//IOSĳ���汾��ʵ��
class IOSSubSystem2 : public IOS
{
public:
    virtual std::string GetOS()
    {
        return "IOS 10.1.1 Operator System";
    }
};

//����ϵͳĳ�����ʵ��
class SaiBianSubSystem1 : public SaiBian
{
public:
    virtual std::string GetOS()
    {
        return "SaiBian 1.1.0 Operator System";
    }
};

//����ϵͳĳ�����ʵ��
class SaiBianSubSystem2 : public SaiBian
{
public:
    virtual std::string GetOS()
    {
        return "SaiBian 1.1.1 Operator System";
    }
};

#endif