#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the "<<i<<"th element into the array"<<endl;
        cin>>arr[i];

    }
    stack<int> s;
    s.push(0);
    cout<<"1"<<"  ";
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && arr[s.top()]<=arr[i])
        {
            s.pop();
        }
        int span=s.empty() ? i+1 : i-s.top();
        cout<<span<<" ";
        s.push(i);
    }
}