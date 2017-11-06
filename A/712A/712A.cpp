#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{

    int n;
    long long num1,num2;
    //freopen("in.txt","r",stdin);
    cin>>n>>num1;
    for(int i = 1;i<n ;i++)
    {
        cin>>num2;
        cout<<num1+num2<<" ";
        num1 = num2;
    }
    cout<<num2;
    return 0;
}
