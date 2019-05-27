#include <iostream>
 
using namespace std;
const int MAX = 4;
 
int main ()
{
//  const char *names[MAX] = {
//                    "Zara Ali",
//                    "Hina Ali",
//                    "Nuha Ali",
//                    "Sara Ali",
//    };

//    for (int i = 0; i < MAX; i++)
//    {
//       cout << "Value of names[" << i << "] = ";
//       cout << names[i] << endl;
   // }


   
   char a[] = "nihao";
   char *b = a;
   cout << a << endl;
   cout << &a << endl;
   b++;
   cout << b << endl;//ihao
   cout << *(b+1) << endl;//i

   // int d = 123;
   // int *c = &d;
   // cout << c <<endl;//地址
   // cout << *c << endl;//123
   // cout << b << endl;//


   // int z[] = {1,2,3};
   // cout << z << endl;//地址值
   return 0;
}