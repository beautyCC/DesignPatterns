#include<iostream>
class Algrithm
{
public:
    virtual double getResult();
};

class AlgrithmA: public Algrithm
{
public:
    virtual double getResult()
    {
        return 3+4;
    }
};

class AlgrithmB: public Algrithm
{
public:
    virtual double getResult()
    {
        return 5+9;
    }
};


class Factory
{
private:
    /* data */
public:
    Factory(){}
    ~Factory(){}
    Algrithm * createAlgrithm(int type){
        switch (type)
        {
        case 1:
            return new AlgrithmA;
          //  break;
        case 2:
            return new AlgrithmB;
         //   break;
        default:
            return nullptr;
            break;
        }
    }
};

