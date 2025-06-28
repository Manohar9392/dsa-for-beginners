// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int x)
    {
        data=x;
        next=nullptr;
    }
};

Node* convert(vector<int> &arr )
{
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for (int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void traversal(Node* head)
{
    Node* temp=head;
    while(temp)
    {
       cout<< temp->data<<" ";
        temp=temp->next;
    }
}
Node* deletion(Node* head,int k){
    Node* temp=head;
    // if(temp==NULL){
    //     return NULL;
    // }
    // head=head->next;
    // free(temp);
    // return head;
    // if(temp==NULL || temp->next==NULL)
    // {
    //     return NULL;
    // }
    // while(temp->next->next!=NULL){
    //     temp=temp->next;
    // }
    // temp->next=nullptr;
    // return head;
    if (head==NULL)
    {
        return NULL;
    }
    if(k==1)
    {
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int cnt=0;
    Node* temp1=head;
    Node* prev=head;
    while(temp1)
    {
        cnt++;
        if(cnt==k)
        {
            prev->next=prev->next->next;
            break;
        }
        prev=temp1;
        temp1=temp1->next;
        
    }
    return head;
    
}

int main() {
    vector<int> arr={1,2,3,4,5};
    Node* head=convert(arr);
    // cout<<head->next->data;
    
    Node* head1=deletion(head,2);
    traversal(head1);
    
    
    

    return 0;
}