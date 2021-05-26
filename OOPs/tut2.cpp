#include <bits/stdc++.h>
using namespace std;
class student{
    private:
    string name;
    int age;
    public:
    void setter(string name, int age){
        name = name;
        age = age;
    }
    void println(){
        cout << name << age;
    }
};

int main(){
    student a;
    a.setter("Kshitij", 22);
    a.println();
    return 0;
}