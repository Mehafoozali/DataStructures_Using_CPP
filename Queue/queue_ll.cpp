#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
struct queue
{
    Node *front;
    Node *rear;
    int size;
    queue()
    {
        front=NULL;
        rear=NULL;
        size=0;

    }
    void enqueue(int x)
    {
        Node *temp=new Node(x);
        if(front==NULL)
        {
            front=rear=temp;
            size++;
        }
        else{
            rear->next=temp;
            rear=temp;
            size=size+1;
        }
    }
    void dequeue()
    {
        if(front==NULL)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        else{
            Node *temp1=front;
            front=front->next;
            delete(temp1);
            size--;
            if(front==NULL)
            {
                rear=NULL;
            }
        }
    }
    int getSize()
    {
        return size;
    }
};
int main()
{
    queue  x;
    x.enqueue(10);
    x.enqueue(20);
    x.enqueue(30);
    x.dequeue();
    cout<<x.getSize()<<endl;
}
