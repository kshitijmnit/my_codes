#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int age;
    student(string name, int age){
        name = name;
        age = age; 
    } 
    student(){
    }
    student(student &t){
        cout << "HI";
        name = t.name;
        age = t.age;
    }
    ~student(){
        cout << "Destructor called";
    }
};
int main(){
    student s;
    s.name = "Preeti";
    s.age = 22;
    cout << s.name << s.age;

    student t("Pooja", 22);
    cout << t.name << t.age;

    student c = t; // This copy done by above copy constructor
    cout << c.name << c.age;
    return 0;
}