#include<iostream>  
 
using namespace std;

int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout << "arr: " << arr << endl;  //数组的地址，
    cout << "arr + 1: " << arr + 1 << endl;  //第二行的地址
    cout << "arr[1]: " << arr[1] << endl; //第二行的地址
    cout << "arr[2]: " << arr[2] << endl; //第三行的地址
    cout << "arr[1] + 1: " << arr[1] + 1 << endl; //第二行第二列的地址
    cout << "arr[1][1]: " << arr[1][1] << endl; //第二行第二列的地址
    int ** p = (int **)arr; /*不能将a赋给p（int **p=a）：p是二级指针，应存放地址的地址，但a是地址（行地址），所以需要强制转换：int **p=(int * *)a。 */
    cout << "*arr: " << p << endl;
	cout << "p:" << p << ", arr:" << arr << ", &a[0][0]:" << &arr[0][0] << endl;//相等 
	//cout << "**p:" << **p << endl; //错误：访问了1的空间（即：*(1)）


    //二级指针输出二维数组
	int a[2][3] = { 1,2,3,4,5,6 };
	int ** m, *q; //单个指针过渡（也可用指针数组）
	for (int i = 0;i < 2;i++)
	{
		q = *(a + i);
        m = &q;
		for (int j = 0;j < 3;j++)
			cout << *(*m + j) << " ";
		cout << endl;
	}

    return 0;
}
