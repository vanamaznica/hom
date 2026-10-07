#include <iostream>
using namespace std;

class Transport
{
public:
    virtual void show() = 0;
};

class Car : public Transport
{
public:
    void show()
    {
        cout << "Car: 2 hours, 500 грн" << endl;
    }
};

class Bicycle : public Transport
{
public:
    void show()
    {
        cout << "Bicycle: 5 hours, 100 грн" << endl;
    }
};

class Cart : public Transport
{
public:
    void show()
    {
        cout << "Cart: 8 hours, 200 грн" << endl;
    }
};

int main()
{
    Car car;
    Bicycle bicycle;
    Cart cart;

    car.show();
    bicycle.show();
    cart.show();
}