#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    int fact=1;
    for( int i=2;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"The factorial of the given number :"<<fact<<endl;
}