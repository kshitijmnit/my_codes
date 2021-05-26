// Encapsulation
// [ownClass derivedClass outsideClass]
// public      Yes Yes Yes 
// protected   Yes Yes No
// private     Yes No No 
#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    int a;
    void funcA(){
        cout << "Public funcA";
    }
    protected:
    int b;
    void funcB(){
        cout << "Protected funcB";
    }
    private:
    int c;
    void funcC(){
        cout << "Private funcC";
    }
};
int main(){ 
    A obj;
    obj.funcA();
    //obj.funcB(); // Cant access protected
    //obj.funcC(); // Cant access private method
    return 0;
}