#include<bits/stdc++.h>
using namespace std;
void filllps(string s,int *p)
{
    int n=s.size();
    int len=0;
    int i=1;
    p[len]=0;
    while(i<n)
    { 
        if(s[len]==s[i])
        {
            len++;
            p[i]=len;
            i++;
        }
        else
        {
            if(len==0)
            {
                s[i]=0;
                i++;
            }
            else{
                len=p[len-1];
            }
        }

    }
}
void KMP(string txt,string pat)
{
    int n=txt.size();
    int m=pat.size();
    int i=0,j=0;
    int lps[m];
    filllps(pat,lps);
    while(i<n)
    {
        if(pat[j]==txt[i])
        {
            i++;
            j++;
        }
        if(j==m)
        {
            cout<<"pattern found at :"<<i-j<<endl;
            j=lps[j-1];
        }
        else if(i<n && txt[i]!=pat[j])
        {
            if(j==0)
            {
                i++;
            }
            else
            {
                j=lps[j-1];
            }
        }
    }
}
int main()
{
    string txt;
    cout<<"Enter the text"<<endl;
    cin>>txt;
    string pat;
    cout<<"Enter the pattern"<<endl;
    cin>>pat;
    KMP(txt,pat);
    return 0;
    

}