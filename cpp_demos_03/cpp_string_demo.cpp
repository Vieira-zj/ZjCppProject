#include <iostream>
#include <string.h>
#include "cpp_string_header_demo.h"

using namespace std;

My_String::My_String(const char* str)
{
    cout << "My_String::My_String(const char* str = NULL)" << endl;
    if (str == NULL)
    {
        m_data = new char[1];
        m_data[0] = '\0';
    } else {
        m_data = new char[strlen(str) + 1];
        strcpy(m_data, str);
    }
}

My_String::My_String(const My_String &another)
{
    cout << "My_String::My_String(const My_String &another)" << endl;
    if (NULL == another.m_data) {
        return;
    }

    m_data = new char[strlen(another.m_data) + 1];
    strcpy(m_data, another.m_data);
}

My_String& My_String::operator=(const My_String &rhs)
{
    cout << "My_String::My_String & operator=(const My_String &rhs)" << endl;
    if (this == &rhs) {
        return *this;
    }

    delete [] m_data;
    m_data = new char[strlen(rhs.m_data) + 1];
    strcpy(m_data, rhs.m_data);
    return *this;
}

My_String::~My_String()
{
    cout << "My_String::~My_String()" << endl;
    delete [] m_data;
}

int string_main(void)
//int main(void)
{
//    int int_arr[] = {1, 2, 3};
//    int *int_ptr = int_arr;
//    cout << "Value at 1st: " << *int_ptr << endl;
//    cout << "Value at 2nd: " << *(int_ptr + 1) << endl;


//    char tmp_chars[] = {'t', 'e', 's', 't'};

//    char *tmp_chars = new char[4];
//    tmp_chars = "test";
//    cout << tmp_chars << endl;
//    delete [] tmp_chars;

    char *tmp_chars = new char[5];  // include '\0'
    strcpy(tmp_chars, "test");
    cout << "text: " << tmp_chars << "\nlength: " << strlen(tmp_chars) << endl;


//    My_String s1("test1");
//    s1 = "test2";
//
//    My_String s2 = "test3";

    return 0;
}
