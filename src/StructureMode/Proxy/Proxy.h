/**
* �ļ����ƣ�Proxy.h
* ժ    Ҫ��ί��ģʽͷ�ļ�
*
* ��ǰ�汾��1.0.0
* ��    ��: Chunel
* ��    �ڣ�2018-08-19
* ��    ע���½�
*/

#ifndef _PROXY_PATTERN_H_
#define _PROXY_PATTERN_H_

class Subject
{
public:
    Subject();
    virtual ~Subject();
    virtual void Request() = 0;
};

class RealSubject : public Subject
{
public:
    RealSubject();
    virtual ~RealSubject();
    virtual void Request();
};

class Proxy : public Subject
{
    // Proxy��RealSubject���̳���Subject�ӿ�
public:
    Proxy();
    virtual ~Proxy();
    virtual void Request();

private:
    RealSubject * m_RealSubject;    // ������ľ���ʵ��
};

#endif