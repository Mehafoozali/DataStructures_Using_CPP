#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter an number"<<endl;
    int n;
    cin>>n;
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;

    }
    cout<<"Number of digits in "<<count<<endl;
}