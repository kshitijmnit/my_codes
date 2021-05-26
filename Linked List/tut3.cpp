// Append K last nodes of SLL at starting 1->2->3->4->5->6->7->8->9->10
// 4->5->6->1->2->3
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val) : data(val), next(nullptr) {};
};
void insertAtTail(node* &head, int val){
    if(head == NULL){
        head = new node(val);
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next = new node(val);
}
void display(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp=temp->next;
    }
    cout << "NULL" << endl;
}
// Below is code by me
node* appendStart(node* &head, int k){
    node* temp = head;
    node* tail = head;
    node* newHead = head;
    int no_of_nodes = 0;

    while(tail != NULL){
        no_of_nodes++;
        tail = tail->next;
    }
    cout << "Number of nodes " << no_of_nodes << endl;

    int c = no_of_nodes - k;
    int c2 = c;
    while(c != 0){
        newHead = newHead->next;
        c--;
    }
    cout << "New head location " << newHead->data << endl;

    tail = head;
    while(tail->next != NULL) 
        tail = tail->next;
    cout << "Last location " << tail->data << endl;

    temp = head;
    
    while(c2 != 0){
        tail->next = temp;
        //cout << tail->data;
        temp = temp->next;
        tail = tail->next;
        c2--;
    }
    tail->next = NULL;
    return newHead;
}

int length(node* head){
    int l=0;
    node* temp = head;
    while(temp != NULL){
        l++;
        temp = temp->next;
    }
    return l;
}

node* kappend(node* &head, int k){
    node* newHead;
    node* newTail;
    node* tail = head;

    int l = length(head);
    k=k%l;
    int count = 1;
    while(tail->next != NULL){
        if(count == l-k){
            newTail = tail;
        }
        if(count == l-k+1){
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }
    newTail->next=NULL;
    tail->next=head;
    return newHead;
}
int main(){
    node* head = NULL;
    for(int i=1;i<=10;i++)
        insertAtTail(head, i);
    //node* newHead = appendStart(head, 3);
    node* newHead = kappend(head,3);
    display(newHead);

    return 0;
}