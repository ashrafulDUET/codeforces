#include<iostream>
#include<cmath>
using namespace std;
int main()
{
     long long n;
    cin>>n;
    if(n&1)
        cout<<-(long long)ceil((double)n/2);
    else
        cout<<n/2;
    return 0;
}
