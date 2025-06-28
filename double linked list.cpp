#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  Node* back;
  
  Node(int data1){
      data=data1;
      next=nullptr;
      back=nullptr;
  }
  Node(int data1,Node* next1,Node* back1){
      data=data1;
      next=next1;
      back=back1;
  }
};
Node* convert(vector<int> &arr)
{
    Node* head=new Node(arr[0]);
    Node* temp=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* el=new Node(arr[i],nullptr,temp);
        temp->next=el;
        temp=temp->next;
    }
    return head;
}
Node* deletion(Node* head,int k){
    if(head==nullptr){
        return NULL;
    }
    Node* temp=head;
    int cnt=0;
    while(temp)
    {
        cnt++;
        if(cnt==k)
        {
            break;
        }
        temp=temp->next;
    }
    Node* front=temp->next;
    Node* prev=temp->back;
    if(prev==NULL)
    {
        front->back=nullptr;
        return front;
    }
    else if(front==NULL)
    {
        prev->next=NULL;
        return head;
    }
    front->back=prev;
    prev->next=front;
    delete temp;
    return head;
    
}
Node* insertion(Node* head,int val,int num){
    // Node* temp=new Node(val,head,nullptr);
    // head->back=temp;
    // return temp;
    // Node* temp=head;
    // while(temp->next!=NULL)
    // {
    //     temp=temp->next;
    // }
    // Node* newtemp=new Node(val,nullptr,temp);
    // temp->next=newtemp;
    // return head;
    if(head==NULL){
        return NULL;
    }
    if(head->data==num)
    {
        Node* newtemp=new Node(val,head,nullptr);
        head->back=newtemp;
        return newtemp;
    }
    Node* temp=head;
    while(temp->next!=NULL)
    {
        if(temp->next->data==num){
            break;
        }
        temp=temp->next;
    }
    
   
    
    Node* front=temp->next;
    Node* newtemp=new Node(val,front,temp);
    temp->next=newtemp;
    front->back=newtemp;
    return head;
}
void traverse(Node* head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}


void traversefromlast(Node* head)
{
    while(head->next!=NULL)
    {
        head=head->next;
    }
    while(head)
    {
        cout<<head->data<<" ";
        head=head->back;
        
    }
    
}
int main(){
    vector<int> arr={1,2,3,4,5};
    Node* head=convert(arr);
    // head=deletion(head,5
    head=insertion(head,100,2);
    
    traversefromlast(head);
}