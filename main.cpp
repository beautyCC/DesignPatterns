#include "simpleFactory.h"
#include "strategy.h"

int main()
{
    // 简单工厂测试
    Factory fac;
    Algrithm * alg1 = fac.createAlgrithm(1);
    std::cout<<"算法1: "<< alg1->getResult()<<std::endl;

    Algrithm * alg2 = fac.createAlgrithm(1);
    std::cout<<"算法2: "<< alg2->getResult()<<std::endl;

    // 策略模式测试
    Context context;
    Strategy * straA = new StrategyA;

    context.InterFace(straA);
    context.work();

    Strategy * straB = new StrategyB;
    context.InterFace(straB);
    context.work();
    delete straB;
    delete straA;
    delete alg1;
    delete alg2;
    return 0;
}