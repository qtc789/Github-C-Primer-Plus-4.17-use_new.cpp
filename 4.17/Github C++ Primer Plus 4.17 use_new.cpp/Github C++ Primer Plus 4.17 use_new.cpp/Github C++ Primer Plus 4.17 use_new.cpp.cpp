// Github C++ Primer Plus 4.17 use_new.cpp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    using namespace std;
    int nights = 1001;
    int* pt = new int;
    *pt = 1001;

    cout << "nights value=    " << endl;
    cout << nights << ":location     " << &nights << endl;
    cout << "int   ";
    cout << "value=   " << *pt << ": location=    " << pt << endl;
    double* pd = new double;
    *pd = 10000001.0;
    cout << "double  ";
    cout << "value=   " << *pd << ":location=   " << pd << endl;
    cout << "location of pointer pd    " << &pd << endl;
    cout << "size of pt   " << sizeof(pt) << endl;
    cout << "size of *pt   " << sizeof(*pt) << endl;
    cout << "size of pd   " << sizeof(pd) << endl;
    cout << "size of *pd   " << sizeof(*pd) << endl;


}

