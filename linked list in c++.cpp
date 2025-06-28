#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        data=0;
        next=NULL;
    }
    Node(int data1)
    {
        data=data1;
        next=NULL;
    }
    
};
Node* convert(vector<int> &arr)
{
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for (int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
    
}
Node* deletion(Node* head,int el){
    if(head==NULL)
    {
        return NULL;
    }
    if(head->data==el)
    {
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    Node* temp=head;
    Node* prev=head;
    while(temp)
    {
        if(temp->data==el){
            prev->next=temp->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
Node* insertion(Node*  head,int el,int val){
    if(head==NULL){
        return NULL;
    }
    if(head->data==el)
    {
        Node* temp=new Node(val);
        temp->next=head;
        return temp;
    }
    Node* temp=head;
    
    while(temp->next!=NULL)#we have to traverse before last element because after last no element is present is to compare
    {
        if(temp->next->data==el)
        {
            Node* ne=new Node(val);
            ne->next=temp->next;
            temp->next=ne;
            break;
        }
        temp=temp->next;
        
    }
    return head;
    
}

int main(){
    vector<int> arr={1,2,3,4,5};
    Node* head=convert(arr);
    // cout<<deletion(head,3)->next->next->data;
    cout<<insertion(head,1,145)->next->data;
    
    return 0;
    
}