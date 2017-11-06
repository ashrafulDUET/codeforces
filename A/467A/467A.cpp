
#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    int n,p,q,count=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>p>>q;
        if(q-p>1)
            count++;
    }
    cout<<count;
    return 0;
}
