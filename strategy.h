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