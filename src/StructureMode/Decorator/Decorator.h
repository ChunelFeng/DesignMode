/**
* �ļ����ƣ�Decorator.h
* ժ    Ҫ��װ����ģʽͷ�ļ�
*
* ��ǰ�汾��1.0.0
* ��    ��: Chunel
* ��    �ڣ�2018-08-10
* ��    ע���½�
*/

#ifndef _DECORATOR_PATTERN_H_
#define _DECORATOR_PATTERN_H_

#include <iostream>
#include <string>

using namespace std;

/* ���岻ͬ���Ⱥ����ϵļ۸� */
const unsigned int ESPRESSO_PRICE = 25;
const unsigned int DRAKROAST_PRICE = 20;
const unsigned int MOCHA_PRICE = 10;
const unsigned int WHIP_PRICE = 8;

class Beverage
{
    //����
protected:
    string description;

public:
    virtual string getDescription()
    {
        return description;
    }

    virtual int cost() = 0;
};

class CondimentDecorator : public Beverage
{
    // ����
protected:
    // ���ָ�룬���ڻ���֮ǰ�Ѿ����ڵ�����
    Beverage * beverage;
};

class Espresso : public Beverage
{
    // ���󿧷�
public:
    Espresso()
    {
        description = "Espresso"; 
    }

    int cost()
    {
        return ESPRESSO_PRICE;
    }
};

class DarkRoast : public Beverage
{
    // ��Ⱥ決����
public:
    DarkRoast()
    {
        description = "DardRoast"; 
    }

    int cost()
    {
        cout << "DarkRoast cost." << endl;
        return DRAKROAST_PRICE; 
    }
};

class Mocha : public CondimentDecorator
{
    // Ħ�������ϣ�
public:
    Mocha(Beverage * beverage)
    {
        this->beverage = beverage; 
    }

    string getDescription()
    {
        /* Ħ������Ա�beverageװ��һ�λ��߶��
           ÿ��װ��֮��description��cost��������Ӧ�ı仯 */
        return beverage->getDescription() + ",Mocha"; 
    }

    int cost()
    {
        cout << "Mocha cost." << endl;
        return MOCHA_PRICE + beverage->cost(); 
    }
};

class Whip : public CondimentDecorator
{
    // ���ݣ����ϣ�
public:
    Whip(Beverage * beverage)
    {
        this->beverage = beverage; 
    }

    string getDescription()
    {
        return beverage->getDescription() + ",Whip"; 
    }

    int cost()
    {
        cout << "Whip cost." << endl;
        return WHIP_PRICE + beverage->cost(); 
    }
};

#endif