/*
������ģʽ��Ҫ�����
��������ŵ��»����У����»����ӿ��޷���������������
�������еĶ���ʵ����Ҫ��Ŀ��ӿ�
*/

#include <iostream>
#include "Adapter.h"

using namespace std;

void main()
{
    cout << "Adapter Pattern Demo : " << endl;

    /* En��ʾ�½ӿڣ�Cn��ʾ�Ͻӿ�
       �½ӿ�En�У���Ҫ����string��int
       �Ͻӿ�Cn�У�������string */
    CEnOutlet * pEnOutlet = new CEnOutlet;

    /* ��һ����ʽ��ͷ��CnPlug�����������Ӣʽ��ͷ����ʽ */
    int year = 2018;
    CCnOutlet * pCnOutlet = new CCnOutletAdapter(pEnOutlet, year);

    /* CnPlug�ӿ�ֻ�ܴ���string����EnPlug�ӿڿ��Դ���string��int
       ��Adapter��Ĺ��캯���У����int��Ϣ���Ա��ڵ���CnPlug������£�Ҳ�ܴ���int��Ϣ
       ��һ���������Ͻӿڣ�Cn�����½ӿڣ�En���޷����ݵ�����£���Ҫ�Ĵ���ʽ */
    pCnOutlet->CnPlug("hello,world");

    delete pEnOutlet;
    delete pCnOutlet;
    system("PAUSE");
    return;
}