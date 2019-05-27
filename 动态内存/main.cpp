#include <iostream>
using namespace std;

int main(){
    double* p ;
    p = new double;
    *p = 1231.13;
    cout << "value p:" << *p << endl;
    delete p;
    return 1;
}