/**
2016-11-10
**/

#include<iostream>

using namespace std;

void simon(int);  // declare function

int function_main(void)
{
    simon(3);
    return 0;
}

void simon(int n)  // define function
{
    cout << "Simon says touch you toes " << n << " times." << endl;
}
