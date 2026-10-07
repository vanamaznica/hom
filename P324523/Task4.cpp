#include <iostream>
#include <string>
using namespace std;

class Pet
{
protected:
    string name;

public:
    Pet(string n)
    {
        name = n;
    }

    virtual void show()
    {
        cout << "Name: " << name << endl;
    }
};

class Dog : public Pet
{
public:
    Dog(string n) : Pet(n) {}

    void show()
    {
        cout << "Dog: " << name << endl;
    }
};

class Cat : public Pet
{
public:
    Cat(string n) : Pet(n) {}

    void show()
    {
        cout << "Cat: " << name << endl;
    }
};

class Parrot : public Pet
{
public:
    Parrot(string n) : Pet(n) {}

    void show()
    {
        cout << "Parrot: " << name << endl;
    }
};

int main()
{
    Dog dog("Bobik");
    Cat cat("Murzik");
    Parrot parrot("Kesha");

    dog.show();
    cat.show();
    parrot.show();
}