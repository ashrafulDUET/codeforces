#include<bits/stdc++.h>
    using namespace std;
    int main()
    {

        int k2,k3,k5,k6,mini;
        long long sum=0;

        cin>>k2>>k3>>k5>>k6;
        mini = min(min(k2,k5),k6);
        k2 -=mini;
        k5 -=mini;
        k6 -=mini;
        sum = (long long)(256*mini);
        mini = min(k2,k3);
        sum += (32*mini);
        cout<<sum;
        return 0;
    }
