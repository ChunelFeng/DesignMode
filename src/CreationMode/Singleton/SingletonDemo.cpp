/*
����ģʽ��Ҫ�����ڣ�
1��һ��ȫ��ʹ�õ��౻Ƶ���ĵ��ú����ٵ�ʱ��
2������߳�ʹ��һ����ͬʹ��һ���ļ���ʱ��

����ģʽ��Ϊ����ģʽ������ģʽ
����ģʽ�����ʼ����ʱ�򣬾Ϳ�ʼ������Դ
����ģʽ���౻��һ���õ���ʱ�򣬲ſ�ʼ������Դ
*/
#include <iostream>
#include "Singleton.h"

using namespace std;

void main()
{
    cout << "Singleton Pattern Demo : " << endl;
    Singleton * a = Singleton::getInstance();
    Singleton * b = Singleton::getInstance();

    // ��ʱ�����Կ���a��b��Ӧ����ͬһ���ڴ�
    cout << a << endl;
    cout << b << endl;

    system("PAUSE");
    return;
}