#include<iostream>
#include<vector>
#include<stdio.h>
#include<cmath>
#include<algorithm>
using namespace std;
vector<int> v;

int main()
{
    long long ar[3],a,b,c,re=0;
    cin>>ar[0]>>ar[1]>>ar[2];
    sort(ar,ar+3);
    re = (long long)(ar[0]+ar[1]+ar[2])/3;
    if((ar[0]+ar[1])<re)
        re =ar[0]+ar[1];
    cout<<re;

    return 0;
}
