#include<iostream>
using namespace std;
struct queue
{
    int size=0;
    int cap;
    int *arr;
    queue(int c)
    {
        cap=c;
        arr=new int(cap);
    }
    bool isFull()
    {
        return(size==cap);
    }
    bool isEmpty()
    {
        return (size==0);

    }
    void enqueue(int x)
    {
        if(isFull())
        {
            return;
        }
        else
        {
            arr[size]=x;
            size++;

        }
    }
    int dequeue()
    {
        if(isEmpty())
        {
            return -1;
        }
        else
        {
           int temp=arr[0];
           for(int i=0;i<size-1;i++)
           {
               arr[i]=arr[i+1];
           }
           size--;
           return temp;
        }
    }
    int getFront()
    {
        if(isEmpty())
        {
            return -1;

        }
        else{
            return 0;
        }
    }
    int getRear()
    {
        if(isEmpty())
        {
            return -1;
        }
        else{
            return size-1;
        }
    }

};
int main()
{
    int n;
    cout<<"Enter the size of the Queue"<<endl;
    cin>>n;
    queue q(n);
    for(int i=0;i<n;i++)
    {
        int k;
        cout<<"Enter the value into the queue"<<endl;
        cin>>k;
        q.enqueue(k);
    }
    for(int i=0;i<n;i++)
    {
        cout<<q.dequeue()<<endl;
    }
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;

    
    
}