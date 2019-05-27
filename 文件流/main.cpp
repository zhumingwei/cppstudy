#include <fstream>
#include <iostream>
using namespace std;

int main(){
    char data[100];
    ofstream outfile;
    outfile.open("afile.dat");
    cout << "writing file " << endl;
    cout << "input you name:";
    cin.getline(data,100);

    outfile << data << endl;

    cout << "enter you age:";
    cin >> data;
    cin.ignore();

    //cout << data << endl;
    outfile << data << endl;

    outfile.close();
    ifstream infile;
    infile.open("afile.dat");
    cout << "read from file :"<< endl;
    infile >> data;
    cout << data << endl;
    infile >> data;
    cout << data << endl;

    infile.close();
    return 0;
}