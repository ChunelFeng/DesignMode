/**
* 文件名称：Strategy.h
* 摘    要：策略模式头文件
*
* 当前版本：1.0.0
* 作    者: Chunel
* 日    期：2018-08-22
* 备    注：新建
*/

#ifndef _STRATEGY_PATTERN_H_
#define _STRATEGY_PATTERN_H_

class Strategy
{
public:
    ~Strategy();
    virtual void AlgrithmInterface() = 0;
protected:
    Strategy();
};

class ConcreteStrategyA : public Strategy
{
public:
    ConcreteStrategyA();
    virtual ~ConcreteStrategyA();
    virtual void AlgrithmInterface();
};

class ConcreteStrategyB : public Strategy
{
public:
    ConcreteStrategyB();
    virtual ~ConcreteStrategyB();
    virtual void AlgrithmInterface();
};

/**
  这个类是Strategy模式的关键，
  也是Strategy模式和Template模式的根本区别所在。
  Strategy通过“组合”（委托）方式实现算法（实现）的异构，
  而Template模式则采取的是继承的方式
  这两个模式的区别也是继承和组合两种实现接口重用的方式的区别
*/
class Context
{
public:
    Context(Strategy * strategy);
    virtual ~Context();
    // DoAction函数中，执行每个类的AlgrithmInterface()方法
    // 都是调用Context类的这个接口，执行了不同的Stratgy类的方法
    void DoAction();

private:
    // 实现类的组合，将Strategy类和Context类进行绑定
    Strategy * m_strategy;
};

#endif
