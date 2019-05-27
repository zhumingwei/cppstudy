//define 预处理指令用于创建符号常量。该符号常量通常称为宏，指令的一般形式是：
#include <iostream>
using namespace std;
#define PI 3.14159

int main(){
    cout << "Value of PI :"<< PI << endl;

    return 0;
}