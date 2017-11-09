#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,c,mini;
    cin>>n>>a>>b>>c;
    if(n%4)
    {
        n =n%4;
        if(n==1)
        {
            mini = min(a+b,c);
            cout<<min(3*a,mini);
        }
        else if(n==2)
        {
            mini = min(2*c,b);
            cout<<min((a+a),mini);
        }
        else
        {
            mini = min(a,c+b);
            cout<<min(3*c,mini);
        }
    }
    else
        cout<<0;
    return 0;
}
