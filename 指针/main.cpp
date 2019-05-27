#include <iostream>

using namespace std;
const int MAX = 3;

int main()
{
    int var[MAX] = {10, 100, 200};
    cout << "最后一个数字指针" << var[2];
    int *ptr;

 
    // 指针中最后一个元素的地址
    ptr = &var[MAX - 1];
    for (int i = MAX; i > 0; i--)
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;

        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;

        // 移动到下一个位置
        ptr--;
    }
    return 0;
}