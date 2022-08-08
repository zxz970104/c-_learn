/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-08-08 17:16:20
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-08-08 17:18:22
 * @FilePath: /c++_learn/002.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include<limits>
using namespace std;
//float area(float a,float b);
int main()
{
  
    float length,width;
    length=10.0;
    width=5.0;
    float areas=area(length,width);
    cout << areas <<endl;
    return 0;
}
float area(float a,float b){
    return a*b;
}