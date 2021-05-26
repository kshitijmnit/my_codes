// RunTime Polymorphism
#include <bits/stdc++.h>
using namespace std;
class base{
    public:
    virtual void print(){
        cout << "base class print";
    }
    void display(){
        cout << "base class display";
    }
};
class derived : public base{
    public:
    void print(){
        cout << "derived class print";
    }
    void display(){
        cout << "derived class display";
    }
};
int main(){
    base *baseptr;
    derived d;
    baseptr = &d;
    // If no virtual keyword is used
    baseptr -> print();   // base class print
    baseptr -> display(); // base class display

    // If virtual is used then
    baseptr -> print();   // base class print
    baseptr -> display(); // base class display
    return 0;
}