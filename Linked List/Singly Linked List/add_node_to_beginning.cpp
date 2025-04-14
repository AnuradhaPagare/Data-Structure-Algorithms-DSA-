#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

node *getNode(){
    node *temp = new node;
    temp->next=NULL;
    return temp;
};

// create a function to create many nodes
node *create(){
    node *temp = NULL, *head=NULL,*newNode;
    int val;
    
    while(true){
        cout<<"enter data";
        cin>>val;

        if(val == -1) break;

        newNode = getNode();
        
        if(newNode == NULL){
            cout<<"no memory is allocated";
        }else{
            newNode->data = val;
            
        }

        if(head == nullptr){
            head = newNode;
            temp = head;
        }else{
            temp -> next = newNode;
            temp = newNode;
        }
        
    }
    return head;
}

node *at_begin(node *head = nullptr){
    node  *temp = nullptr;
    int val;
    cout<<"\n enter data  ";
    cin>>val;

    node *new_Node = getNode();
    new_Node -> data = val;

    if(head == nullptr){
        head = new_Node;
        temp = head;
    }else{
        new_Node->next = head;
        head = new_Node;
    }
    return head;
}

void display(node *head=nullptr){
    node *temp=nullptr;
    temp = head;
    while (temp != nullptr)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
    
}
int main(){
    node *head = create();
    cout<<"Sinlgy linked list \n:"<<endl;
    display(head);

    head = at_begin(head);
    cout<<"head updated : \n";
    display(head);
    return 0;
}