#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long n,k,half,result;
    //freopen ("a.txt","r",stdin);
    cin>>n>>k;
    if(n%2==0)
    {
        half=n/2;
    }
    else
    {
        half=(n/2)+1;
    }

    if(k<=half)
    {
        result=(2*k)-1;
    }
    else
    {
        result=(k-half)*2;
    }
    cout<<result;
    return 0;
}
