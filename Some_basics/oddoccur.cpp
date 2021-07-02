#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the number"<<endl;
        cin>>a[i];
    }
    int res=0;
    for(int i=0;i<n;i++)
    {  
        res=res^a[i];

    }
    cout<<"The odd occurene is :"<<res<<endl;

}