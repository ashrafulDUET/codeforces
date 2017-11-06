#include<iostream>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    if(k<999999)
    {
        for(long i =1;;i++)
        {
            if((n+i)%k==0)
            {
                cout<<n+i;
                break;
            }

        }
    }
    else
    {
        if(k==1)

    {
        cout<<n+1;
        goto l;
    }
    for(long i =1;i<1000000/2;i++)
    {
        if(k>n)
        {
            cout<<k;
            break;
        }
        else if(k*i>n)
        {
            cout<<k*i;
            break;
        }

    }
    }
    l:
    return 0;
}
