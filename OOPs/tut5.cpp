// Multiple Inheritance
#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    void funcA(){
        cout << "HI";
    }
};

class B {
    public:
    void funcB(){
        cout << "HEY";
    }
};

class C : public A, public B{

};

int main(){
    C obj;
    obj.funcB();
    return 0;
}