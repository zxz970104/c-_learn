#include <iostream>
#include <vector>
 
#include <string>
 
using namespace std;
int main(){
    vector<string> msg {"Hello", "C++", "Hello", "VS Code"};
    for (const string& item : msg){
        cout << item << "  ";
    }
    cout << endl;
    return 0;
}
