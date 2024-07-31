#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=1;
    for(int j=1;j<s.size()-1;j++)
    {
        if(s[j]>='A' && s[j]<='Z')count++;
    }
    cout<<count;
}