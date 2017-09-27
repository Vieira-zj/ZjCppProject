/**
2016-11-10
**/

#include<iostream>

int char_main(void)
//int main(void)
{
    using namespace std;

    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the char code." << endl;
    ch = ch + 1; // 'N'
    cout << "The ASCII code for " << ch << " is " << int(ch) << endl;

    return 0;
}
