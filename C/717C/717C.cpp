#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stdio.h>
#define M 10007
using namespace std;
int main()
{
  //freopen("in.txt","r",stdin);
    vector<long long>task;
    vector<long long>::iterator beg,en;
    long long n,lav,time=0;
    cin>>n;
    for(int i =0;i<n; i++)
    {
        cin>>lav;
        task.push_back(lav);
    }
    sort(task.begin(),task.end());
    beg = task.begin();
    en = task.end();
    en--;
    if(n%2==1)
    {
        for(int i=0;i<(int)n/2; i++)
        {
                time += (*beg * (*en))*2;
                beg++;
                en--;
                time %=M;
        }
        time += (*beg*(*beg));
        time %=M;
        cout<<time;
    }
    else
    {
        for(int i=0;i<(int)n/2; i++)
        {
                time += (*beg*(*en))*2;
                beg++;
                en--;
                time %=M;
        }
        cout<<time;
    }


    return 0;
}
