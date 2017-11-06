#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    if(a[0]==1&&a[1]==1&&a[2]==1)
        cout<<3;
    else if(a[0]==1&&a[2]==1)
        cout<<(a[0]+a[1])+a[2];
    else if(a[1]==1)
    {
        cout<<(min(a[0],a[2])+a[1])*max(a[0],a[2]);
    }
    else if (a[0]==1)
    {
        cout<<(a[0]+a[1])*a[2];
    }
    else if(a[2]==1)
            cout<<(a[2]+a[1])*a[0];
    else
        cout<<(a[2]*a[1])*a[0];
    return 0;
}
