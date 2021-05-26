// Create a singly linked list
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

void deleteAtHead(node* &head){
    node* toDelete = head;
    head = head->next;
    delete toDelete;
}

void deletion(node* &head, int val){
    if(head == NULL){
        return;
    }

    if(head->next==NULL){
        deleteAtHead(head);
    }

    node* temp = head; 
    node* toDelete;
    while(temp != NULL){
        if(temp->next->data == val){
            toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
            return;
        }
        temp = temp->next;
    }
}
node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}
node* reverseRecursive(node* &head){
    if(head == NULL or head->next == NULL)
        return head;

    node* newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

node* reversek(node* &head, int k){
  
  node* prevptr = NULL;
  node* currptr = head;
  node* nextptr;
  
  int count=0;
  while(currptr!=NULL and count<k){
    nextptr=currptr->next;
    currptr->next=prevptr;
    prevptr=currptr;
    currptr=nextptr;
    count++;
  }

  if(nextptr!=NULL)
    head->next = reversek(nextptr,k);
  return prevptr;
}

void makeCycle(node* head, int pos){
    node* temp = head;
    node* startNode;

    int count=1;
    while(temp->next != NULL){
        if(count == pos){
            startNode = temp;
        }
        temp = temp->next;
        count++;

    }
    temp->next = startNode;
}

// Hare and Tortoise / Floyd's Algorithm
bool detectCycle(node* &head){
    node* slow = head;
    node* fast = head;
    
    while(fast != NULL and fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow)
            return true;
    }
    return false;
}

void removeCycle(node* &head){
    node* slow = head;
    node* fast = head;
    
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast = head;
    while(slow->next != fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    slow->next = NULL;
}

void display(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp=temp->next;
    }
    cout << "NULL" << endl;
}

bool search(node* head, int key){
    node* temp = head;
    while(temp != NULL){
        if(temp->data == key)
            return true;
        temp = temp->next;
    }
    return false;
}
int main(){
    node* head = NULL;
    insertAtTail(head, 1);insertAtTail(head, 2);insertAtTail(head, 3);insertAtTail(head, 4);display(head);
    cout << search(head, 9) << endl;
    insertAtHead(head, 66);display(head);
    //deletion(head, 3);display(head);
    //deleteAtHead(head);display(head);
    // node* newhead = reverseRecursive(head); display(newhead);
    //node* newhead1 = reverse(head); display(newhead1);
    int k=2;
    node* newhead2 = reversek(head,k);
    display(newhead2);
    makeCycle(head,3); //display(head);
    cout << detectCycle(head) << endl;
    removeCycle(head);
    cout << detectCycle(head);
    return 0;
}
