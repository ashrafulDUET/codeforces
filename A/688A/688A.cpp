#include<iostream>
#include<stdio.h>
using namespace std;
char str[101];
int main()
{
    //freopen("in.txt","r",stdin);
    int n,d,count=0,j,maxi=0;
    cin>>n>>d;
    for(int i=0;i<d;i++)
    {
        cin>>str;
        for(j =0;j<n;j++)
        {
            if(str[j]!='1')
               {
                   count++;
                   break;
               }
        }
        if(count>maxi)
            maxi=count;
        if(j==n)
            count=0;

    }
    cout<<maxi;

    return 0;
}
