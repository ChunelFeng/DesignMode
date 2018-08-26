/**
* �ļ����ƣ�Adapter.h
* ժ    Ҫ��������ģʽͷ�ļ�
*
* ��ǰ�汾��1.0.0
* ��    ��: Chunel
* ��    �ڣ�2018-08-23
* ��    ע���½�
*/

#ifndef _ADAPTER_PATTERN_H_
#define _ADAPTER_PATTERN_H_

#include <iostream>
#include <string>

using namespace std;

class CCnOutlet
{
public:
    CCnOutlet()
    {
        cout << "CCnOutlet::CCnOutlet" << endl;
    }

    virtual ~CCnOutlet()
    {
        cout << "CCnOutlet::~CCnOutlet" << endl;
    }

    virtual void CnPlug(string cn)
    {
        cout << "��ʽ������" << endl;
        cout << "cn plug : " << cn << endl;
    }
};

class CEnOutlet
{
public:
    CEnOutlet()
    {
        cout << "CEnOutlet::CEnOutlet" << endl;
    }

    ~CEnOutlet()
    {
        cout << "CEnOutlet::~CEnOutlet" << endl;
    }

    void EnPlug(string en, int year)
    {
        // ע�⣬EnPlug�Ľӿں�CnPlug�Ľӿ����ͣ��ǲ�ͬ��
        cout << "use en plug" << endl;
        cout << "en info : " << en << ", year : " << year << endl;
        return;
    }
};

class CCnOutletAdapter : public CCnOutlet
{
    /* ʹ��Adapter�࣬��Cn��ͷ�ĺ����ӿڣ�ת��En��ʵ��
       ���а�����һ��En����� */
public:
    CCnOutletAdapter(CEnOutlet * pEnOutlet, int year)
    {
        cout << "CCnOutletAdapter::CCnOutletAdapter" << endl;
        m_pEnOutlet = pEnOutlet;
        m_year = year;    // ��һ�㣬�����Cn��En�ӿڲ�ͬ������
    }

    virtual ~CCnOutletAdapter()
    {
        cout << "CCnOutletAdapter::~CCnOutletAdapter" << endl;
    }

    virtual void CnPlug(string cn)
    {
        cout << "adapter transfer" << endl;
        m_pEnOutlet->EnPlug(cn, m_year);
    }

private:
    CEnOutlet * m_pEnOutlet;
    int m_year;
};

#endif