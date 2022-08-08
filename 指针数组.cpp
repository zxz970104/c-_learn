#include <iostream>
using namespace std;

/*  char *names[MAX] 是指针数组, 它的本质是存储指针的数组, 
既存储 char 类型的指针的数组, 
数组内的每个元素都是一个指针指向一个存储 char 类型的地址:*/

const int MAX = 4;

int main(int argc, const char * argv[]) {

    const char *names[MAX] = {
        "Zara Ali",
        "Hina Ali",
        "Nuha Ali",
        "Sara Ali",
    };

    for (int i = 0; i < MAX; i++) {
        //指针数组中每个指针存储的地址中的值
        cout << " names[i]              = " << names[i] << endl;
        
        cout << " *names[i]             = " << *names[i] << endl;
        cout << " (*names[i] + 1)       = " << (*names[i] + 1) << endl;
        cout << " (char)(*names[i] + 1) = " << (char)(*names[i] + 1) << endl;
        cout << endl;
    }
    return 0;
}