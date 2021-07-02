#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,lar;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter the elements in the array"<<endl;
        cin>>arr[i];

    }
    sort(arr,arr+n);
     for(i=0;i<n;i++)
    {
        
        cout<<arr[i]<<" ";
        cout<<endl;

    }
    cout<<arr[n-2];
}