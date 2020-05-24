/*
    定义： 定义一系列算法， 使得在它们在客户端的使用中可以相互替换，使得算法它们的变化对于客户端透明

    总结：
        1 strategy 使得各个算法在运行时根据需要进行变化
        2 消除if判断语句， 解藕
        
*/

#include<iostream>

class Strategy
{
public:
    virtual void Algritm();
};

class StrategyA: public Strategy
{
public:
    virtual void Algritm()
    {
        std::cout<<"A"<<std::endl;
    }
};

class StrategyB:public Strategy
{
public:
    virtual void Algritm()
    {
        std::cout<<"B"<<std::endl;
    }
};


class Context
{
public:
    void InterFace(Strategy * strategy)
    {
        m_strategy = strategy;
    }

    void work()
    {
        m_strategy->Algritm();
    }
private:
    Strategy * m_strategy;
};