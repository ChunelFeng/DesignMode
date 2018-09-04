/**
* �ļ����ƣ�Interpreter.h
* ժ    Ҫ��������ͷ�ļ�
*
* ��ǰ�汾��1.0.0
* ��    ��: Chunel
* ��    �ڣ�2018-09-04
* ��    ע���½�
*/

#ifndef _INTERPRETER_PATTERN_H_
#define _INTERPRETER_PATTERN_H_

#include <iostream>
#include <string>

using namespace std;

class Context
{
public:
    Context() {}
    virtual ~Context() {}
};

class AbstractExpression
{
public:
    virtual ~AbstractExpression() {}
    virtual void Interpret(const Context& c) {}

protected:
    AbstractExpression() {}
};

class TerminalExpression :public AbstractExpression
{
    /* �ն˽ڵ� */
public:
    TerminalExpression(const string& statement)
    {
        m_statement = statement;
    }
    virtual ~TerminalExpression() {}

    void Interpret(const Context& c)
    {
        cout << "TerminalExpression Interpret, " << m_statement << endl;
    }

private:
    string m_statement;
};

class NonterminalExpression :public AbstractExpression
{
    /* ���ն˽ڵ� */
public:
    NonterminalExpression(AbstractExpression* ex, int times)
    {
        m_ex = ex;
        m_times = times;
    }
    ~NonterminalExpression() {};

    void Interpret(const Context& c)
    {
        /* ����Ϊ����ӡtimes�ε�ex��Ϣ */
        for (int i = 0; i < m_times; i++)
        {
            m_ex->Interpret(c);
        }
    }

private:
    AbstractExpression * m_ex;
    int m_times;
};

#endif