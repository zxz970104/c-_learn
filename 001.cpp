/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-07-05 09:20:02
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-08-08 16:52:52
 * @FilePath: /c++_learn/001.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
using namespace std;
 
// 当局部变量被定义时，系统不会对其初始化。
// 定义全局变量时，系统会自动初始化
// 全局变量声明
int g = 20;
 
int main ()
{
  // 局部变量声明
  int g;
  cin >> g;   //从控制台获取输入
  
  cout << g << endl;

  std::string s = "zxz";
  cout << s << endl;
 
  return 0;
}