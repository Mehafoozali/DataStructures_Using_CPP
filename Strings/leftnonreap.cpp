#include<iostream>
#include<string>
using namespace std;
int main()
{
    const int CHAR=256;
    int count[CHAR]={0};
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        count[s[i]]++;

    }
    for(int i=0;i<s.length();i++)
    {
        if(count[s[i]]==1)
        {
            cout<<" "<<s[i]<<endl;
            return 0;
        }
    }
    cout<<"No leftmost non repeating character";
}