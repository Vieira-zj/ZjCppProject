#include <iostream>
#include <list>

using namespace std;

int iterator_main(void)
//int main(void)
{
    list<int> lst;
    int len = lst.size();
    cout << "length before --> " << len << endl;

    for (int i = 0; i < 5; ++i)
    {
        lst.push_back(i);
    }

    len = lst.size();
    cout << "length after --> " << len << endl;

    list<int>::iterator current = lst.begin();
    while (current != lst.end())
    {
        cout << "list item --> " << *current << endl;
        ++current;
    }

    cout << "*****************" << endl;
    current = lst.begin();
    ++current;
    ++current;
    ++current;
    cout << "Current item --> " << *current << endl;
    lst.insert(current, 100);

    for (list<int>::iterator p = lst.begin(); p != lst.end(); ++p) {
        cout << "list item --> " << *p << endl;
    }

    return 0;
}
