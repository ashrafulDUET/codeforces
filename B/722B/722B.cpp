#include<iostream>
#include<string>
#include<vector>
#include<stdio.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    int i,n,in,count=0;
    vector<int>v;
    string str;
    cin>>n;
    for(i =0;i<n;i++)
    {
        cin>>in;
        v.push_back(in);
    }
    getline(cin,str);
    for(i=0;i<n;i++)
    {
        getline(cin,str);
        //cout<<str<<endl;
        for(int j=0;j<str.size();j++)
        {
            if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u'||str[j]=='y')
                count++;
        }
        if(count==v[i])
        {
                count=0;
        }
        else
        {
            cout<<"NO";

            break;
        }
    }
    if(i==n)
        cout<<"YES";

    return 0;
}
