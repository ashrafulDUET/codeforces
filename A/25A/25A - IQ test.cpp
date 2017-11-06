#include<iostream>
using namespace std;

int main()
{
    int t,n,a,r=0,i;
    cin>>n>>a;
    t =(a&1);
    for(i =2;i<=n;i++)
    {
        cin>>a;
        if((a&1)!=t)
        {
            if(i==2)
                {
                    cin>>a;
                    if((a&1)==t)
                        cout<<i;
                    else
                        cout<<1;
                }
            else
                cout<<i;
            break;
        }
    }

    return 0;
}
