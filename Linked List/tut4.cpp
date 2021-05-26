// Find the intersection of two Singly Linked List
// 1->2->3->4->5->6->NULL
//       9->10->upar wala 5
////////// prob in code
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
int length(node* head){
    int count=1;
    node* temp = head;
    if(temp == NULL)
        return 0;
    while(temp->next != NULL){
        count++;
    }
    return count;
}
void intersect(node* &head1, node* &head2, int pos){
    node* temp1 = head1;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }
    node* temp2=head2;
    while(temp2->next != NULL)
        temp2 = temp2->next;

    temp2->next = temp1;
}

int intersection(node* head1, node* head2){
    int d = length(head1) - length(head2);
    if(d > 0){
        while(d != 0){
            head1 = head1->next;
            d--;
        }
    }
    else if(d < 0){
        while(d != 0){
            head2 = head2->next;
            d++;
        }
    }

    while(head1 != NULL and head2 != NULL){
        if(head1 == head2)
            return head1->data;
        head1 = head1->next;
        head2 = head2->next;
    }
    return -1; 
}
int main(){
    node* head1 = NULL;
    node* head2 = NULL;
    for(int i=1;i<=6;i++){
        insertAtTail(head1, i);
    }
    insertAtTail(head2,9);
    insertAtTail(head2, 10);
    intersect(head1,head2,3);
    display(head1);
    display(head2);
    cout << intersection(head1, head2);

    
    return 0;
}
