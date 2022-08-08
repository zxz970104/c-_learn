/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-07-05 11:43:42
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-08-08 16:09:35
 * @FilePath: /c++_learn/指针返函.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <ctime>
#include <cstdlib>
 
using namespace std;
 
// 要生成和返回随机数的函数
int * getRandom( )
{
    static int  r[10];

    // 设置种子
    srand( (unsigned)time( NULL ) );
    for (int i = 0; i < 10; ++i)
    {
        r[i] = rand();
        cout << r[i] << endl;
    }
    cout << typeid(r).name() << endl;  //获取变量类型
    return r;
}
 
// 要调用上面定义函数的主函数
int main ()
{
// 一个指向整数的指针
    int *p;

    p = getRandom();
    cout << typeid(p).name() << endl;  //获取变量类型
    for ( int i = 0; i < 10; i++ )
    {
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }
    cout << p << endl;  
    cout << p[0] << endl;
    cout << *p << endl;
    cout << *(p) << endl;

    return 0;
}