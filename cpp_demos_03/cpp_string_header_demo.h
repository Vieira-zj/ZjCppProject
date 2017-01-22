#ifndef CPP_STRING_HEADER_DEMO_H_INCLUDED
#define CPP_STRING_HEADER_DEMO_H_INCLUDED

class My_String
{
public:
    My_String(const char *str = NULL);
    My_String(const My_String &another);
    ~My_String();
    My_String& operator=(const My_String &rhs);
private:
    char* m_data;
};

#endif // CPP_STRING_HEADER_DEMO_H_INCLUDED
