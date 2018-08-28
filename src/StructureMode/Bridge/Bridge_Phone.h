#ifndef _BRIDGE_PHOTO_PATTERN_H_
#define _BRIDGE_PHOTO_PATTERN_H_

#include "Bridge_Phone.h"

#ifndef DELETE_OBJECT
/* ɾ���ڴ�ĺ꺯�� */
    #define DELETE_OBJECT(p) { if(NULL != (p)) {delete (p); (p) = NULL;}}
#endif

//������ֻ���
class Phone
{
public:
    virtual void SetOS() = 0;
};

//ƻ���ֻ��࣬��������Ĳ���ϵͳ
class iPhone : public Phone
{
    /* Phone���а�������ϵͳ�ĳ�Ա����
       �ǽ�Phone���OS��������� */
public:
    iPhone(OS * os)
    {
        m_pOS = os;
    }
    ~iPhone()
    {
        DELETE_OBJECT(m_pOS);
    }
    virtual void SetOS()
    {
        cout << "Set The OS: " << m_pOS->GetOS().c_str() << endl;
    }

private:
    OS * m_pOS;
};

//ŵ�����ֻ��࣬��������Ĳ���ϵͳ
class Nokia : public Phone
{
public:
    Nokia(OS* os)
    {
        m_pOS = os;
    }
    ~Nokia()
    {
        DELETE_OBJECT(m_pOS);
    }

    virtual void SetOS()
    {
        cout << "Set The OS: " << m_pOS->GetOS().c_str() << endl;
    }

private:
    OS * m_pOS;
};

#endif