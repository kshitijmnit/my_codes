// Create a circular singly linked list
// 1->2->3->4->NULL    1->2->3->4->1
// insertions are correct
// Some problem in deletion methods
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;

    node(int val): data(val), next(nullptr) {};
};

void insertAtHead(node* &head, int val){
    node* temp = head;
    node* newNode = new node(val);
    if(head == NULL){
        newNode->next = newNode;
        head = newNode;
        return;
    }
    while(temp->next != head)
        temp = temp->next;
    temp->next = newNode;
    newNode->next = head;
    head = newNode;
}

void insertAtTail(node* &head, int val){
    node* temp = head;
    node* newNode = new node(val);
    if(head == NULL){
        insertAtHead(head, val);
        return;
    }

    while(temp->next != head)
        temp = temp->next;
    
    temp->next = newNode;
    newNode->next = head;
}

void deleteAtHead(node* &head){
    node* temp = head;
    while(temp->next != head)
        temp = temp->next;  
    
    node* toDelete = head;
    temp->next = head->next;
    head = head->next;
    delete toDelete;
}

void deletion(node* &head, int val){

    node* temp = head;
    while(temp->next->data != val)
        temp = temp->next;
    node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

void display(node* &head){
    node* temp = head;
    // cout << temp->data << "->";
    // temp = temp->next;
    // while(temp != head){
    //     cout << temp->data << "->";
    //     temp = temp->next;
    // }
    // OR
    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp!=head);
    cout << endl;
}

int main(){
    node* head = NULL;
    for(int i=1;i<=5;i++)
        insertAtTail(head, i);
    display(head);
    deletion(head,5);
    display(head);
    deleteAtHead(head);
    display(head);
    return 0;
}