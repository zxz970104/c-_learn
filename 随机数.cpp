#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
    int i, j;
    //设置随机数种子
    srand( (unsigned)time(NULL) );

    //生成随机数
    for ( i = 0; i < 5; i++)
    {
        j = rand();
        cout << "随机数： " << j << endl;
    }
    return 0;
}