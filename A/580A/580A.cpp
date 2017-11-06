#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int count=0,n,max =0;
    vector<int>v;
    unsigned int a,temp=0;
    cin>>n;
    for(int i =0;i<n; i++)
    {
        cin>>a;
        if(a>=temp)
        {
            count++;
            temp= a;
        }
        else
        {
            if(max<count)
                max=count;
            count=1;
             temp= a;
        }
    }
    if(count>max)
    {
        cout<<count;
    }
    else
        cout<<max;
    return 0;
}
