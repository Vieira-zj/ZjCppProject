/**
Hello world demo, create at 2017/1/22
*/
#include <iostream>

using namespace std;

class zj01
{
private:
    int value;
public:
    void setValue(int);
    int getValue() const; // const function
};

void zj01::setValue(int x)
{
    this->value = x;
}
int zj01::getValue() const
{
    return value;
}

void zj_display(const zj01 &zj)
{
    //zj01.setValue(100); // Error, only call const function here
    cout << "Value: " << zj.getValue() << endl;
}

int hello_world_main3(void)
//int main(void)
{
    cout << "cpp_helloworld_main3 invoked." << endl;

    zj01 zj;
    zj.setValue(10);
    zj_display(zj);

    return 0;
}
