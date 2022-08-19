/*
 * @Author: zxz970104 1434388779@qq.com
 * @Date: 2022-08-18 19:39:00
 * @LastEditors: zxz970104 1434388779@qq.com
 * @LastEditTime: 2022-08-19 09:39:03
 * @FilePath: /c++_learn/书店程序/Sales_item.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef SALESITEM_H  //防止防止头文件的重复包含和编译https://zhidao.baidu.com/question/22559696.html
#define SALESITEM_H 
#include <iostream>
#include <string>

class Sales_item
{
public:
	Sales_item(const std::string &book) :isbn(book), units_sold(0), revenue(0.0) {}  
    //:isbn(book),units_sold(0),revenue(0.0) 该部分被称为初始化列表，可以直接对成员对象或基类型机型初始化
	Sales_item(std::istream &is) { is >> *this; }  //对象通过流给到对象
	friend std::istream& operator>>(std::istream &, Sales_item &);  // 重载流运算符声明
	friend std::ostream& operator<<(std::ostream &, const Sales_item &);
public:
	Sales_item & operator+=(const Sales_item&);  //+= 运算符的重载函数声明
public:
	double avg_price() const;
	bool same_isbn(const Sales_item &rhs)const
	{
		return isbn == rhs.isbn;
	}
	Sales_item() :units_sold(0), revenue(0.0) {} // 构造函数的多态  
public:
	std::string isbn;
	unsigned units_sold;
	double revenue;
};

using std::istream;
using std::ostream;
Sales_item operator+(const Sales_item &, const Sales_item &);
inline bool operator==(const Sales_item &lhs, const Sales_item &rhs)  //inline是内联函数https://www.runoob.com/w3cnote/cpp-inline-usage.html
{
	return lhs.units_sold == rhs.units_sold && lhs.revenue == rhs.revenue && lhs.same_isbn(rhs);
}
inline bool operator!=(const Sales_item &lhs, const Sales_item &rhs)
{
	return !(lhs == rhs);
}

inline Sales_item & Sales_item::operator +=(const Sales_item &rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}
inline Sales_item operator+(const Sales_item &lhs, const Sales_item &rhs)
{
	Sales_item ret(lhs);
	ret += rhs;
	return ret;
}
inline istream& operator>>(istream &in, Sales_item &s)
{
	double price;
	in >> s.isbn >> s.units_sold >> price;
	if (in)
		s.revenue = s.units_sold * price;
	else
		s = Sales_item();
	return in;
}
inline ostream& operator<<(ostream &out, const Sales_item &s)
{
	out << s.isbn << "\t" << s.units_sold << "\t" << s.revenue << "\t" << s.avg_price();
	return out;
}
inline double Sales_item::avg_price() const
{
	if (units_sold)
		return revenue / units_sold;
	else
		return 0;
}
#endif
