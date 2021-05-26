// Merge two sorted Singly linked list
// 1->4->5->7 and 2->3->6 equals to 1->2->3->4->5->6->7
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val) : data(val), next(nullptr) {};
};
void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next=head;
    head=n;
}
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
node* mergeList(node* head1, node *head2){
    node* ptr = new node(INT_MAX);
    node* ptr1 = ptr;
    while (head1 != NULL and head2 != NULL)
    {
        if(head1->data < head2->data){
            ptr->next = head1;
            head1 = head1->next;
            ptr = ptr->next;
        }
        else{
            ptr->next = head2;
            head2 = head2->next;
            ptr = ptr->next;
        }
    }
    if(head1 == NULL)
        ptr->next = head2;
    else if(head2 == NULL)
        ptr->next = head1;
    return ptr1->next;
}

node* mergeListRecursive(node* head1, node* head2){
    node* result;
    if(head1 == NULL)
        return head2;
    if(head2 == NULL)
        return head1;

    if(head1->data < head2->data){
        result = head1;
        result->next = mergeListRecursive(head1->next, head2);
    }
    else{
        result = head2;
        result->next = mergeListRecursive(head1, head2->next);
    }
    return result;
}
int main(){
    node* head1 = NULL;
    node* head2 = NULL;
    insertAtTail(head1, 1);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    insertAtTail(head1, 7);
    insertAtTail(head2, 2);
    insertAtTail(head2, 3);
    insertAtTail(head2, 6);
    display(head1);
    display(head2);
    node* dummyNode = mergeListRecursive(head1, head2);
    display(dummyNode);
    return 0;
}

