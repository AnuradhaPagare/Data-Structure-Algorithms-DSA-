#include<iostream>
using namespace std;
struct node{
    node *next;
    int data;
};
node *getnode(){
    node *temp = new node;
    temp->next = nullptr;
    return temp;
}
node *create(){
    node *head = nullptr, *temp = nullptr, *newnode = nullptr;
    int val;

    while(true){
        newnode = getnode();
        
        cout<<"\n enter the data\n";
        cin>>val;

        if(val == -1)break;

        if(newnode != nullptr) {
            cout<<"\nmemory is allocated\n";
            newnode->data =val;
        }else{
            cout<<"\n memory is not allocated\n";
        }
        if(head == nullptr){
            head = newnode;
            temp = head;
            cout<<"head value "<<head->data<<" ";
        }else{
            temp->next = newnode;
            temp = newnode;
            cout<<"temp data "<<temp->data<<" ";
        }
        
    }
    return head;
}
void display(node *head){
    node *temp = head;
    
    while(temp != nullptr){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"null\n";  
}
node *middle(node *head){
    node  *temp = head, *newnode2 = nullptr;
    int val,after1;
    newnode2 = getnode();
    if(newnode2 != nullptr){
        cout<<"\n enter a value\n";
        cin>>val;
        newnode2->data = val;
    }else{
        cout<<"\nmemory is not aalocated\n";
    }
    cout<<"\nafter which node you want to insert\n";
    cin>>after1;
    while(after1 != temp->data){
        cout<<temp->data;
        temp = temp ->next;
        
    }
    if(after1 == temp->data){
        newnode2->next =  temp->next;
        temp->next = newnode2;
        
        cout<<"\n if conditon in insert middele\n";
    }
    return head;

}
int main(){
    node *head = create();

    cout<<"\ndisplay\n";
    display(head);


    cout<<"\napdeted list\n";
    node *var=middle(head);
    display(var);
    return 0;
}