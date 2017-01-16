#include <iostream>

using namespace std;

float temp;

float fn1(float r);
float &fn2(float r);
float *fn3(float);

float fn1(float r)
{
    temp = (float) (r * r * 3.14);
    return temp;
}

float &fn2(float r)
//���庯��fn2���������÷�ʽ���غ���ֵ
{
    temp = (float) (r * r * 3.14);
    return temp;
}

float *fn3(float r)
{
    temp = (float) (r * r * 3.14);
    return &temp;
}

//float &fn4(float r)
//{
//    float tmp = (float)(r * r * 3.14);
//    return tmp;
//}
//
//float *fn5(float r)
//{
//    float tmp = (float) (r * r * 3.14);
//    return &tmp;
//}

int reference_main2(void)
//int main(void)
{
    // ��1�������ϵͳ����Ҫ����ֵ�ĸ���������ʱ������
    float a = fn1(10.0);
    //float &b = fn1(10.0); //��2����������ܻ������ͬC++ϵͳ�в�ͬ�涨��
    const float &b = fn1(10.0);

    //���Դӱ��������з���һ��ȫ�ֱ���������
    float c = fn2(10.0);  //��3�������ϵͳ�����ɷ���ֵ�ĸ���
    float &d = fn2(10.0); //��4�������ϵͳ�����ɷ���ֵ�ĸ���

    cout << "a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << endl;
    //a=314, b=314, c=314, d=314

    float *e = fn3(10.0);
    cout << "e=" << *e << endl;
    //e=314

    //���ܴӱ��������з���һ����ʱ������ֲ�����������
    //float &f = fn4(10.0);
    //cout << "f=" << f << endl;

    //float *g = fn5(10.0);
    //cout << "g=" << *g << endl;

    return 0;
}
