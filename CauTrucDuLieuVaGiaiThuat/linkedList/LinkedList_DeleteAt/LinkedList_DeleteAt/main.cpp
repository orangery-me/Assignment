#include <iostream>
using namespace std;
int n, k;
struct node{
    int data;
    node *pre;
    node *next;
};
// add a node at front
void push(node **head, int x){
    node *temp= new node;
    temp->data=x;
    if (*head == NULL ){
        temp->next=NULL;
        temp->pre=NULL;
    }
    else{
        temp->next=*head;
        temp->pre=NULL;
        (*head)->pre=temp;
    }
    *head=temp;
}

//add a node at back
void append(node **p, int x){
    
    node *temp=new node;
    temp->data=x;
    temp->next=NULL;
    temp->pre=*p;
    
    (*p)->next=temp;
    *p=temp;
}

// delete the Head node
void deleteFront(node **head){
    node *p=*head;
    p->next->pre=NULL;
    *head=p->next;
    delete(p);
}
// delete Middle Node
void deleteAt(node *head, int k){
    node *p=head;
    for (int i=0; i<k-1; ++i)
        p=p->next;
    
    node *temp=p->next;
    p->next=temp->next;
    temp->next->pre=p;
    
    delete(temp);
}
// delete Tail Node
void deleteBack(node *head){
    node *p=head;
    while (p->next!=NULL)
        p=p->next;
    p->pre->next=NULL;
    delete(p);
}


void display(node *head){
    node *p=head;
    while (p!=NULL){
        cout <<p->data<<" ";
        p=p->next;
    }
}

int main(){
    int x; cin>>n;
    cin >>x;
    node *head=NULL;
    push(&head,x);
    node *p=head;
    for (int i=2; i<=n; ++i){
        cin >>x;
        append(&p, x);
    }
    
    cin>>k;
    if (k==0)
        deleteFront(&head);
    else{
        if (k==n-1)
            deleteBack(head);
        else
            deleteAt(head, k);
    }
    
    display(head);
}
