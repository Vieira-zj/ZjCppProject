/**
2016-11-10
**/

#include<cstdio>
#include<iomanip>
#include<ios>
#include<iostream>
#include<fstream>
#include<string>
#include<map>

using namespace std;

int io_main(void)
{
    map<string, int> counts;
    string word;

    fstream in("data.txt");
    if (not in)
    {
        perror("data.txt");
    }

    ofstream out("out.txt");
    if (not out)
    {
        perror("out.txt");
    }

    cout << "Read words from data.txt." << endl;
    while (in >> word)
    {
        ++counts[word];
        out << word << endl;
    }
    in.close();

    cout << "\nThe words and count are:" << endl;
    out << "\nThe words and count are:" << endl;

    for(map<string, int>::iterator iter(counts.begin()); iter != counts.end(); ++iter)
    {
        cout << iter->first << '\t' << iter->second << '\n';
        out << iter->first << '\t' << iter->second << '\n';
    }
    out.close();

    return 0;
}
