#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n<=1)
        return n;
    return fibo(n-2)+fibo(n-1) ;   
}
int main()
{
    int n,i=0;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    while(i<n)
    {
        cout<<fibo(i)<<" ";
        i++;
    }
}