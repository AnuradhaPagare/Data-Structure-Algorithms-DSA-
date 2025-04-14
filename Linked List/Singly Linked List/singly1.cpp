#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};
// create function to create a single  node
node *getNode(){
    node *temp;
    temp = new node;
    temp -> next =  NULL;
    return temp;    
};
// creating a function which can be able to create multiple new node
node *create(){
    int val;
    char ans;
    node *newNode, *head=NULL, *temp=NULL;
    
while(true){
    cout<<"enter the value ";
    cin>>val;

    if(val == -1) break;
    newNode = getNode();


    if(newNode == NULL){
        cout<<"memmory is not allocated";
    }else{
        newNode->data = val;
    }
    if(head == NULL){
        head = newNode;
        temp = head;
    }else{
        temp->next = newNode;
        temp = newNode; 
    }
}    
    return head;

}
void display(node *head =NULL){
    node  *temp=head;
    
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        } cout<<"NULL";   
    
}
int main(){
    node *head = create();
    display(head);
    return 0;
}
