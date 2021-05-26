// Polymorphism- Compile Time Run Time
// Function Overloading Operator Overloading
// RunTime- Virtual Function
// Function overloading
#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    void print(int x){
        cout <<"Hey int x here";
    }
    void print(double x){
        cout <<"double x here";
    }
};
int main(){
    A obj;
    obj.print(31.5);
    return 0;
}