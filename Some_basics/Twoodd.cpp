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
        cout<<"Enter the element"<<endl;
        cin>>a[i];
    }
    int xr=0,rs1=0,rs2=0,sn;
    for(int j=0;j<n;j++)
    {
        xr=xr^a[j];
    }
    sn=xr&~(xr-1);
    for(int i=0;i<n;i++)
    {
        if((sn&a[i])!=0)
            rs1=rs1^a[i];
        else 
            rs2=rs2^a[i];    
    }
    cout<<rs1<<" "<<rs2<<" "<<endl;
}