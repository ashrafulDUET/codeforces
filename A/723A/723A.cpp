#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>v;
    int n;
    cin>>n;
    v.push_back(n);
    cin>>n;
    v.push_back(n);
    cin>>n;
    v.push_back(n);
    sort(v.begin(),v.end());
    cout<<(v[2]-v[1]+v[1]-v[0]);
    return 0;
}
