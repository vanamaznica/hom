#include <iostream>
#include <string>
using namespace std;

class Passport
{
protected:
    string name;
    string number;

public:
    Passport(string n, string num)
    {
        name = n;
        number = num;
    }

    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Passport: " << number << endl;
    }
};

class ForeignPassport : public Passport
{
    string foreignNumber;
    string visa;

public:
    ForeignPassport(string n, string num, string fnum, string v)
        : Passport(n, num)
    {
        foreignNumber = fnum;
        visa = v;
    }

    void show()
    {
        Passport::show();
        cout << "Foreign passport: " << foreignNumber << endl;
        cout << "Visa: " << visa << endl;
    }
};

int main()
{
    ForeignPassport p("Ivan", "AA123456", "FF654321", "Germany");
    p.show();
}