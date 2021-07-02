#include<iostream>
#include <bits/stdc++.h>
using namespace std;
struct my_stack
{
    int *arr;
    int cap;
    int top;
    my_stack(int x)
    {
        cap=x;
        arr=new int[cap];
        top=-1;
    }
    void push(int x)
    {
        if(top==cap-1)
        {
            cout<<"Stack overflow"<<endl;
            return;
           
        }
        top++;
        arr[top]=x;
        


    }
    int pop()
    {
        if(top==-1)
        {
            cout<<"underflow"<<endl;
            return -1;
        }
        
        int res=arr[top];
        top--;
        return res;
    }
    int peek()
    {
        if(top==-1)
        {
            cout<<"underflow"<<endl;
            return -1;
        }
        return arr[top];
    }
    int size()
    {
        return top+1;
    }
    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
int main()
{
    my_stack s(5);
    
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    
}