/**
2016-11-10
**/

#include<cstdio>
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int readfile_main(void)
{
    ifstream in("list.txt");
    if (not in)
    {
        perror("list.txt");
    }
    else
    {
        string x;
        while (in >> x)
        {
            cout << x << endl;
        }
    }
    in.close();

    return 0;
}
