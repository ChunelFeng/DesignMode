/*
������ģʽ

��������ҵĲ�̫�ã�Ҳû�ҵ����������ӣ�
��ģʽ��Ҫ��Ϊ�˽��һЩ�ض���Ϣ�Ľ�������"3+5-2+6"����Ϣ��Ȼ����м���

Ӧ�ó�����
�����A/B/C/D�ȶ�������е����⼸��������д "A | B | D"��Ȼ��������ַ���
*/

#include "Interpreter.h"

void main()
{
    cout << "Interpreter Pattern Demo : " << endl;

    Context* c = new Context();
    AbstractExpression* abs = new TerminalExpression("Hello");
    AbstractExpression* nabs = new NonterminalExpression(abs, 2);
    nabs->Interpret(*c);

    delete nabs;
    delete abs;
    delete c;

    system("PAUSE");
    return;
}