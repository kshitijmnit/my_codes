#include <bits/stdc++.h>
using namespace std;
class Ground{
    int Rooms;
    protected:
    void put();
    public:
    void get();
};

class Middle : private Ground{
    int Labs;
    public:
    void take();
    void give();
};

class Top : public Middle{
    int Roof;
    public:
    void in();
    void out();
};

// 1.   What type of inheritance?
// Ans. Multi-level inheritance

// 2.  give() of class middle can access.
// Ans. give() take() Labs put() get()

// 3. out() of class Top can access
// Ans. out() in() Roof take() give()

// 4. object T of class Top declared 
// in main() function can access
// Ans. take() give() in() out()