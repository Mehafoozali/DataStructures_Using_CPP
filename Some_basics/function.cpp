#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
int main()
{
    cout<<"Enter the numbers :"<<endl;
    int a,b;
    cin>>a>>b;
    int s;
    s=sum(a,b);
    cout<<"The sum of numbers :"<<s<<endl;

}