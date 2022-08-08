# include<iostream>
using namespace std;
#include<iomanip>
using std::setw;

int main()
{
    int n[10]; //n是一个包含10个整数的数组

    //初始化元素
    for (int i = 0; i < 10; i++)
    {
        n[i] = 100 + i;
    }
    cout << "Element" << setw(13) << "Value" << endl;
    

    //输出数组中每个元素的值
    for (int j = 0; j < 10; j++)
    {
        cout << setw(5) << j << setw(13) << n[j] << endl;
    }
    return 0;
    
}