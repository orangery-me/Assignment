#include <iostream>

using namespace std;
struct node{
    int data;
    node *next;
    node *pre;
};
struct node *head, *tail=NULL;

node *CreateNode(int x){
    node *temp=new node;
    temp->data=x;
    temp->next=NULL;
    temp->pre=NULL;
    
    return temp;
    
}

node *AddTail(node *tail, int x){
    node *temp=new node;
    temp->data=x;
    temp->next=NULL;
    temp->pre=tail;
    
    tail->next=temp;
    return temp;
}

node *deleteHead(){
    node *p=head->next;
    node *temp=head;
    p->pre=NULL;
    
    delete(temp);
    return p;
}
node *deleteNodeAt(node *head,int k){
    node *p=head;
    for (int i=0; i<k-1; ++i){
        p=p->next;
    }
    p->pre->next=p->next;
    p->next->pre=p->pre;
    
    return head;
    
}

void display(node *head){
    node *p=head;
    while (p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    
}

int main(){
    int n; cin>>n;
    int number; cin >>number;
    node *head=CreateNode(number);
    node *tail=head;
    
    
    for (int i=1; i<n; ++i){
        cin >>number;
        tail=AddTail(tail, number);
    }
    
    int k;cin>>k;
    if (k==0) head= deleteHead();
    else
        head= deleteNodeAt(head, k);
    
    display(head);
    
}
