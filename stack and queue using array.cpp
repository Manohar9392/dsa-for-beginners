// implementation stack with array

stack:
#include<bits/stdc++.h>
using namespace std;
class stackimplement{
public:
    int top=-1;
    int arr[10];
    void push(int n){
        if(top>=10)
        {
            cout<<"stack overflow";
        }
        else{
            top++;
            arr[top]=n;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"stack is overflow"; 
        }
        else{
            top--;
        }
    }
    int top1(){
        if(top==-1)
        {
            return -1;
        }
        else{
            return arr[top];
        }
    }
    int size()
    {
        return top+1;
    }
};
int main(){
    stackimplement s;
    s.push(10);
    s.push(10);
    s.pop();
    cout<<s.top1()<<endl;
    cout<<s.size();
    
}





QUEUE IMPLMENTATION:-

code:-
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class implementqueue{
    public:
    int front=-1;
    int rear=-1;
    int arr[10];
    
    void enqueue(int n){
        if(rear==9)
        {
            cout<<"queue is overflow"<<endl;;
        }
        else if(rear==-1){
            rear++;
            front++;
            arr[rear]=n;
            }
        else{
            rear++;
            arr[rear]=n;
        }
    }
    void dequeue(){
        if(front==-1)
        {
            cout<<"queue is empty"<<endl;
        }
        else if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else{
            front++;
        }
    }
    void nxtelement()
    {
        if(front==-1)
        {
            cout<<"queue is empty"<<endl;
        }
        else{
            cout<<arr[front];
        }
    }
    void display()
    {
        if(front==-1)
        {
            cout<<"no element is there"<<endl;
        }
        else{
            for(int i=front;i<=rear;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    
};

int main() {
    implementqueue q;
    
    q.enqueue(10);
    q.enqueue(100);
    q.enqueue(756);
    q.dequeue();
    q.display();
    

    return 0;
}


// stack using linked list

// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
     
    Node(int n)
    {
        val=n;
        next=NULL;
    }
};
class stackimple{
    public :
    Node* top=NULL;
    int size1=0;
    void push(int n)
    {
        Node* temp=new Node(n);
        temp->next=top;
        top=temp;
        size1++;
    }
    void pop()
    {
        top=top->next;
        size1--;
    }
    void ele(){
        if (top==NULL){
            cout<<"no element";
        }
        else{
            cout<<top->val;
        }
        
    }
    void size()
    {
        cout<<size1;
    }
    
};
int main()
{
    stackimple s;
    s.push(10);
    s.ele();
    
    s.size();
    
    return 0;
    
}