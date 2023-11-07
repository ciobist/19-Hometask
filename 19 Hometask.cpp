#include <iostream>
using namespace std;

class Animals 
{
public:
    virtual void Voice()
    {
        cout << "Animal sounds" << endl;
    }
};

class Dog : public Animals 
{
public:
    void Voice() override 
    {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animals 
{
public:
    void Voice() override
    {
        cout << "Meow!" << endl;
    }
};

class Cow : public Animals 
{
public:
    void Voice() override 
    {
        cout << "Moo!" << endl;
    }
};

int main() 
{
    Animals* animals[3];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();

    for (int i = 0; i < 3; i++) 
    {
        animals[i]->Voice();
    }
}
