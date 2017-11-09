#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

    int n,m;
    cin>>n>>m;
    if(min(n,m)%2)
        cout<<"Akshat";
    else
        cout<<"Malvika";
    return 0;
}
