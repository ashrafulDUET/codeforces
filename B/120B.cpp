#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    bool flag[1005]; int n,k,inp;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>inp;
        if(inp)
            flag[i]=true;
        else
            flag[i]=false;
    }
    for(int i=k-1;i<n;i++)
    {
        if(flag[i])
        {
            cout<<i+1;
            return 0;
        }
    }
    for(int i=0;i<k;i++)
    {
        if(flag[i])
        {
            cout<<i+1;
            return 0;
        }
    }
}
