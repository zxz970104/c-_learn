/*
 * @Author: zxz970104 1434388779@qq.com
 * @Date: 2022-08-19 09:09:49
 * @LastEditors: zxz970104 1434388779@qq.com
 * @LastEditTime: 2022-08-19 10:15:25
 * @FilePath: /c++_learn/书店程序/book_shop.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
#include "Sales_item.h"

using namespace std;

void test(Sales_item * p, Sales_item s) 
{
    cout << p->units_sold << endl;  
    cout << "传递指针的大小\t" << sizeof(p) << endl;//传递后使用成本大大降低
    cout << "传递值的大小\t" << sizeof(s) << endl;
    cout << "传递指针指向的内存地址\t" << p+1 << endl;
    cout << "传递值的内存地址\t" << &s << endl;
}

int main()
{
    Sales_item book1; 
    Sales_item * p;
    cout << sizeof(*p) << endl;
    p = &book1;
    cout << sizeof(p) << endl;
    cout << "指针指向的内存地址\t" << p << endl;
    cout << "值的内存地址\t" << &book1 << endl; 
    test(p, book1);
    
    if (cin >> *p) {  // 读取第一条数据用于处理
        Sales_item book2;
        while (cin >> book2) {  // 持续读取数据
            if (p->isbn == book2.isbn) {  //相同更新
                *p += book2;
                cout << "update" << endl;
            } 
            else {
                cout << *p << endl;
                p = &book2;  // 指向下一本书
            }
        }
        cout << *p << endl;
    }
    else {
        cerr << "NO DATA" << endl;
        return -1;
    }
    return 0;
}