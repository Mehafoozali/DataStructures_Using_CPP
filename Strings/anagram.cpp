#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the String";
    cin>>s;
    string t;
    cout<<"Enter the string";
    cin>>t;
    const int CHAR=256;
    int count[CHAR]={0};
    if(s.length()!=t.length()){
        cout<<"Not a Anagram";
        return 0;
    }
    for(int i=0;i<s.length();i++)
    {
        count[s[i]]++;
        count[t[i]]--;
    }
    for(int i=0;i<CHAR;i++)
    {
        if(count[i]!=0)
        {
            cout<<"Not a Anagram";
            return 0;
        }
    }
    cout<<"Anagram";
    return 0;

}