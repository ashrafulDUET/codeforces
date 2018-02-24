#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,a[105],re=100;
    cin>>n>>d;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        int c = 0;
        for(int j=i;j<n;j++)
        {
            if(a[j]-a[i] > d) break;
            c++;
        }
        re = min(re, n-c);
    }
    cout<<re<<endl;
    return 0;
}
