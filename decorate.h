#include<iostream>

using namespace std;

class Person
{
public:
    Person()
    {

    }
    Person(string & name):m_name(name)
    {
    }

    virtual void show()
    {
        cout<<"装扮的"<<m_name<<endl;
    }
private:
    string m_name;
};

class ClothingDecorate:public Person
{
public:
    void decorate(Person *component)
    {
        m_component = component;
    }

    virtual void show()
    {
        m_component->show();
    }

private:
    Person * m_component;
};

class Tshirt: public ClothingDecorate
{
public:
    virtual void show()
    {
        cout<<"Tshirt";
        ClothingDecorate::show();
    }
};

class Pants: public ClothingDecorate
{
public:
    virtual void show()
    {
        cout<<"Pants";
        ClothingDecorate::show();
    }
};