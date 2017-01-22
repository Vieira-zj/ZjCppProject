#ifndef CPP_EXTERNAL_HEADER_DEMO_H_INCLUDED
#define CPP_EXTERNAL_HEADER_DEMO_H_INCLUDED

static int my_internal_static_int = 2;
const int my_internal_const_int = 3;

class my_external_class
{
private:
    int value;
public:
    my_external_class(int num = 0) : value(num) { std::cout << "my_external_class constructor. " << std::endl; }
    void my_external_display();
};

#endif // CPP_EXTERNAL_HEADER_DEMO_H_INCLUDED
