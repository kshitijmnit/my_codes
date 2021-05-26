// Implement push, pop and min in constant time on Stack
#include <iostream>
using namespace std;
class stack{
    public:
    int arr[10000];
    int ss[10000] = {INT_MIN};
    int top1 = -1;
    int top2 = -1;
    void push(int val){
        top1++;
        arr[top1] = val;
        if(ss[0] == INT_MIN){
            top2++;
            ss[top2] = val;
        }
        else{ 
            if(val < ss[top2]){
                top2++;
                ss[top2] = val;
            }
        }
    }
    void pop(){
        if(arr[top1] == ss[top2]){
            top1--;
            top2--;
        }
        else
            top1--;
    }
    int getMin(){
        return ss[top2];
    }
    void display(){
        for(int i=0;i<=top1;i++)
            cout << arr[i] << " ";
    }
};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(5);
    s.push(8);
    s.push(12);
    s.push(3);
    s.push(16);
    s.push(2);
    s.pop();
    s.display();
    cout << s.getMin();
}