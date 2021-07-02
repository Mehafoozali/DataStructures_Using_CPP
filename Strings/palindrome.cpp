#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the String :";
    cin>>s;
    int start=0;
    int flag=0;
    int end=s.length()-1;
    while(start<end)
    {
        if(s[start]!=s[end])
        {
            cout<<"Not a palindrome";
            flag=1;
            break;
        }
        start++;
        end--;
    }
    if(flag==0)
    {
        cout<<"Palindrome";
    }

}