#include<iostream>
using namespace std;
int main()
{
    int n,i,arr[14]={4,7,44,47,74,77,744,747,774,777,477,474,447,444};
    cin>>n;
    for(i=0; i<14; i++)
    {
        if(n%arr[i]==0)
        {
            cout<<"YES";
            break;
        }
    }
    if(i==14)
        cout<<"NO";
    return 0;
}
