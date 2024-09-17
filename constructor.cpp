#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person(string getName, int getAge)
    {
        name = getName;
        age = getAge;
    }
    void dispalyDetails()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    Person p1("Ali", 22);
    p1.dispalyDetails();
    return 0;
}