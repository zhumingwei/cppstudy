#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

template <class T> class Stack {
    private :
        vector<T> elems;
    
    public :
        void push(T const&);
        void pop();
        T top() const;
        bool empty() const{
            return elems.empty();
        };
};

template <class T> void Stack<T>::push(T const& elem){
    elems.push_back(elem);
}

template <class T> void Stack<T>::pop(){
    if (elems.empty())
    {
        throw out_of_range("stack<>::pop() : empty stack");
    }
    elems.pop_back(); //删除最后一个元素
}

template <class T> T Stack<T>::top() const{
    if (elems.empty())
    {
        throw out_of_range("stack<>::pop() : empty stack");
    }
    return elems.back();
}

int main(){
    try
    {
        Stack<int> intStack;
        Stack<string> stringStack;
        intStack.push(7);
        cout << intStack.top() << endl;

        stringStack.push("hello");
        cout << stringStack.top() << std::endl;
        stringStack.pop();
        stringStack.pop();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
