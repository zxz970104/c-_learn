#include<iostream>

using namespace std;

int main()
{
    int var = 20; 
    int *ip = NULL;  //指针变量的声明

    //输出指针中地址的值
    //cout << "Value of *ip variable: " << *ip << endl;

    //输出指针变量存储的地址
    cout << "Address stored in ip variable: ";
    cout << ip << endl;

    ip = &var;  //在指针变量中存储var的地址

    //输出指针中地址的值
    cout << "Value of *ip variable: " << *ip << endl;

    //输出指针变量存储的地址
    cout << "Address stored in ip variable: ";
    cout << ip << endl;

    return 0;
}