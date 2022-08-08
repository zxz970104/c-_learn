#include<iostream>

using namespace std;

int get(int *p)
{
    *p = 5;
    return *p;
}

int main()
{
    int a = 1;
    cout<<a<<endl;
    get(&a);  //a的值被修改了
    cout<<a<<endl;
    return 0;
}