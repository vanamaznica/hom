#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    string name;
    int age;

public:
    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Aspirant : public Student
{
    string work;

public:
    Aspirant(string n, int a, string w)
        : Student(n, a)
    {
        work = w;
    }

    void show()
    {
        Student::show();
        cout << "Work: " << work << endl;
    }
};

int main()
{
    Aspirant a("Ivan", 20, "Software Development");
    a.show();
}