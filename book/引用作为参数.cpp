/*
 * @Author: zxz970104 1434388779@qq.com
 * @Date: 2022-08-18 20:07:37
 * @LastEditors: zxz970104 1434388779@qq.com
 * @LastEditTime: 2022-08-19 09:04:24
 * @FilePath: /c++_learn/书店程序/引用作为参数.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
using namespace std;
 
// 函数声明
void swap(int& x, int& y);
 
int main ()
{
   // 局部变量声明
   int a = 100;
   int b = 200;
 
   cout << "交换前，a 的值：" << a << endl;
   cout << "交换前，b 的值：" << b << endl;
   cout << &a << endl;
   /* 调用函数来交换值 */
   swap(a, b);
   cout << &a << endl;
   cout << "交换后，a 的值：" << a << endl;
   cout << "交换后，b 的值：" << b << endl;
 
   return 0;
}
 
// 函数定义
void swap(int& x, int& y)
{
   int temp;
   cout << &x << endl;
   temp = x; /* 保存地址 x 的值 */
   x = y;    /* 把 y 赋值给 x */
   y = temp; /* 把 x 赋值给 y  */
  
   return;
}