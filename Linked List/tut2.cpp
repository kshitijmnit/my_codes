// Create a doubly linked list
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;
    node(int val) : data(val), prev(nullptr), next(nullptr) {};
};

void insertAtHead(node* &head, int val){
    node* newNode = new node(val);
    newNode->next = head;
    if(head != NULL)
        head->prev = newNode;
    head = newNode;
}


void insertAtTail(node* &head, int val){

    if(head == NULL){
        head = new node(val);
        return;
    }

    node* temp = head;
    while(temp->next){
        temp = temp->next;
    }
    node* newNode = new node(val);
    temp->next = newNode;
    newNode->prev = temp;
}

void deleteAtHead(node* &head){
    node* toDelete = head;
    head = head->next;
    head->prev = NULL;
    delete toDelete;
}

void deletion(node* &head, int val){

    if(head->next == NULL or head->data == val){
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    while(temp->data != val){
        temp = temp->next;
    }
    node* toDelete = temp;
    temp->prev->next = temp->next;
    if(temp->next != NULL)
        temp->next->prev = temp->prev;

    delete toDelete;
}
void display(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main(){
    node* head = NULL;
    for(int i=1;i<=5;i++)
        insertAtTail(head, i);
    insertAtHead(head, 96);
    display(head);
    deletion(head, 4);
    display(head);
    deleteAtHead(head);
    display(head);
    return 0;
}