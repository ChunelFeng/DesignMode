/**
������ģʽ

��ͼ��
������������������������һ���ö�������п��ܽ������󣬽���Щ�������ӳ�һ����������������������������ֱ���ж�������Ϊֹ��

��Ҫ�����
�ͻ�ֻҪ�����󣬷���������������㼴�ɣ�����Ҫ���ľ���Ĺ���

���ó�����
1��дlog��ʱ������debug��error�ȼ���

ȱ�㣺
�ܴ�̶��ϣ�����ͨ��switch����
*/

#include "ResponsibilityChain.h"

void main()
{
    cout << "ResponsibilityChain Pattern Demo : " << endl;

    /* Ĭ�ϣ�һ����������ߣ��ʲ��趨�ϼ� */
    Manager * first = new FirstManager(nullptr, "First");

    /* �������������࣬�������ϼ�����Ϊfirst */
    Manager * second = new SecondManager(first, "Second");
    Manager * third = new ThirdManager(second, "Third");

    /* ��ʼ�����н����ÿ������ľ����в�ͬȨ�޵ļ�н��ֵ
       ����������ľ����޷�����salary���֣��򽫸������͵����߼���ľ��� */
    third->DealWithRequest("add_500", 500);
    third->DealWithRequest("add_1500", 1500);
    third->DealWithRequest("add_3500", 3500);
    third->DealWithRequest("add_5500", 5500);

    delete third;
    delete second;
    delete first;

    system("PAUSE");
    return;
}