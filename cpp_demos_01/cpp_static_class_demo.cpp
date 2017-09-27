#include <iostream>

using namespace std;

const double pi = 3.14159;

template<typename T>
class Circle
{
    T radius;
    static int total;
public:
    Circle(T r = 0)
    {
        cout << "Circle(T r = 0) constructor is called." << endl;
        radius = r;
        ++total;
    }
    void Set_Radius(T r) { radius = r; }
    double Get_Radius() { return radius; }
    double Get_Girth() { return 2 * pi * radius; }
    double Get_Area() { return pi * radius * radius; }
    static int ShowTotal();
};

// static field
template<typename T>
int Circle<T>::total = 0;

// static method
template<typename T>
int Circle<T>::ShowTotal()
{
    return total;
}

int static_class_main(void)
//int main(void)
{
    Circle<int> A, B;
    A.Set_Radius(16);
    cout << "A.Radius = " << A.Get_Radius() << endl;
    cout << "A.Girth = " << A.Get_Girth() << endl;
    cout << "A.Area = " << A.Get_Area() << endl;
    B.Set_Radius(105);
    cout << "B.radius = " << B.Get_Radius() << endl;
    cout << "B.Girth = " << B.Get_Girth() << endl;
    cout << "B.Area = " << B.Get_Area() << endl;
    cout << "Total1=" << Circle<int>::ShowTotal() << endl; // 2
    cout << endl;

    Circle<double> X(6.23), Y(10.5), Z(25.6);
    cout << "X.Radius = " << X.Get_Radius() << endl;
    cout << "X.Girth = " << X.Get_Girth() << endl;
    cout << "X.Area = " << X.Get_Area() << endl;
    cout << "Y.radius = " << Y.Get_Radius() << endl;
    cout << "Y.Girth=" << Y.Get_Girth() << endl;
    cout << "Y.Area = " << Y.Get_Area() << endl;
    cout << "Z.Girth=" << Z.Get_Girth() << endl;
    cout << "Z.Area = " << Z.Get_Area() << endl;
    cout << "Total2=" << Circle<double>::ShowTotal() << endl; // 3

    return 0;
}
