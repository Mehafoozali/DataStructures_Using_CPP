#include<iostream>
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
    for(i=0;i<n;i++)
    {
        lar=0;
        if(arr[i]>arr[lar]){
            lar=i;
        }
    }
    cout<<"The largest element in the array"<<arr[lar]<<endl;
}