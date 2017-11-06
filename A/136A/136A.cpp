#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{

    vector<int>v(101,0);
    int n,in;
    cin>>n;
    for(int i =0; i<n;i++)
    {
            cin>>in;
            v[in]=(i+1);
    }
    for(int i =1; i<=100;i++)
    {
            if(v[i])
            cout<<v[i]<<" ";
    }
    return 0;
}
