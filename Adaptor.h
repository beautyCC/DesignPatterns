/*
    @动机  旧的对象放到新的环境中使用， 如何满足迁移的变化，既能利用旧代码， 又能满足新需求
    @定义  将一个类的接口转换成客户希望的接口，使得原本由于兼容性不能一起工作的模块可以一起工作 --GOF
    @总结  1 主要应用于 ‘希望复用现有的代码类， 但是接口又与复用环境不一致的情况’
          2 有对象适配器和类适配器两种，不推荐使用类适配器（1 继承了具体的类， 紧耦合  2 有的语言不支持多继承）

*/
#include <iostream>

using namespace std;

class ITarget
{
public:
    virtual void process() = 0;
};

class IAdaptee
{
public:
    virtual void walk() = 0;
    virtual void talk() = 0;
};

//对象适配器
class Adaptor:public ITarget
{
public:
    IAdaptee * m_adaptee;
    virtual void process()
    {
        m_adaptee->walk();
        m_adaptee->talk();
    }
};

// 类适配器， 不推荐使用， 因为IAdaptee是为了继承实现， 所以应该是一个具体的类，那这样就成了紧耦合， 并且有的语言并不支持多继承
class Adaptor2 :public ITarget, protected IAdaptee
{
public:
    virtual void process()
    {
        walk();
        talk();
    }
};