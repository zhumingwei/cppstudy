#include <iostream>
using namespace std;

class Box {
    public :
        Box(){
            // cout << "调用构造函数" << endl;
        }
        ~Box(){
            // cout << "调用析构函数" << endl;
        }
};

int main(){
    Box* boxs = new Box[10];
    delete[] boxs;

    int a = 10;
    int &b = a;

    std::cout << sizeof(b) << endl;//4

    char *c = new char[100];
    std::cout << sizeof(c) << endl;//8
    return 1;
}