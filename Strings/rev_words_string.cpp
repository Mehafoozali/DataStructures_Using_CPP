#include<iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;
void reverse(string s,int low, int high){
    while(low<=high){
        swap(s[low],s[high]);
        low++;
        high--;
    }
}
int main()
{
    string s;
    cout<<"Enter the string";
    getline(cin,s);
    int start=0;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]==' ')
        {
            reverse(s,start,i-1);
            start=i+1;

        }
        
    }
    reverse(s,start,n-1);
    reverse(s,0,n-1);
    cout<<"The resultant string"<<s;

}