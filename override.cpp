#include<iostream>
using namespace std;

class Animal{

    public:

    virtual void speak()
    {
        cout<<"speaking"<<endl;
    }
};

class Dog:public Animal
{
    public:

    void speak()
    {
        cout<<"Barking"<<endl;
    }
};

int main()
{
    // Dog D;
    // D.speak();

    // Animal* a = new Animal();
    // a->speak();

    // Dog* D = new Dog();
    // D->speak();

    // UpCasting 
    Animal* a = new Dog();
    a->speak();

    Dog* D =(Dog* ) new Animal();
    D->speak();


}