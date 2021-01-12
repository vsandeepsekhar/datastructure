/*
My understanding of the concept:
Dynamic Binding is runtime polymorphism of C++ classes.
Which means that we can call the member functions of the 
concerned classes at runtime using the class reference of the base class pointing to its respective derived classes objects.
*/

#include <iostream>

using namespace std;

class Base
{
public:
    virtual void show() {cout<<"Base Class \n";}
};

class Derived: public Base
{
public:
    void show() {cout<<"Derived Class \n";}
};




int main()
{
    Base *bp = new Derived();
    bp->show();
    bp = new Base();
    bp->show();
    return 0;
}
