#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main()
{
    //freopen("in.txt","r",stdin);
    int k,r;
    cin>>k>>r;
    for(int i=1; ;i++)
    {
        if((k*i)%10==r||(k*i)%10==0)
        {
            cout<<i;
            break;
        }
    }

    return 0;
}
