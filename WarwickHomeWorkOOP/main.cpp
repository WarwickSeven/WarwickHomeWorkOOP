//урок 1 задание 1

#include <iostream>
#include <cmath>

using namespace std;

class Power
{
    double base;
    double exp;
public:
    void setValues (double base, double exp)
    {
        this->base = base;
        this->exp = exp;
    }
    double calculate()
    {
        return pow(base, exp);
    }
};

int main()
{
    double b, e;
    cout << "Base: ";
    cin >> b;
    cout << "Exponent: ";
    cin >> e;
    
    Power p1;
    p1.setValues(b,e);
    
    cout << "The result is: " << p1.calculate() << endl;
    
    return 0;
}
