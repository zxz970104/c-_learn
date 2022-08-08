#include<iostream>
#include<cstring>

using namespace std;

int main()
{
/*     char str1[13] = "runoob";
    char str2[13] = "google";
    char str3[13];
    int len;
    //复制str1到str3
    strcpy(str3, str1);
    cout << "strcpy: " << str3 << endl;

    //连接str1与str2
    strcat(str1, str2);
    cout << "strcat: " << str1 << endl;

    //连接后str1的长度
    len = strlen(str1);
    cout << "strlen: " << len << endl; */
    string str1 = "runoob";
    string str2 = "google";
    string str3;
    int  len ;
 
    // 复制 str1 到 str3
    str3 = str1;
    cout << "str3 : " << str3 << endl;
 
    // 连接 str1 和 str2
    str3 = str1 + str2;
    cout << "str1 + str2 : " << str3 << endl;
 
    // 连接后，str3 的总长度
    len = str3.size();
    cout << "str3.size() :  " << len << endl;
 
    return 0;
}