// Inheritance
// [Single, Multiple, Multi-level]
// [Hybrid, Hierarchical]
#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    void func(){
        cout << "HI";
    }
};

class B : public A {

};

int main(){
    B obj;
    obj.func();
    return 0;
}