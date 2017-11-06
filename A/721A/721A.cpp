#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{

    int n,re=0,count=0;string s;
    vector<int>v;
    cin>>n>>s;
    for(int  i=0; i<s.size(); i++)
    {
        if(s[i]=='B')
        {
            count++;
        }
        else
        {

            if(count>0)
            {
                v.push_back(count);
                re++;
            }
            count =0;
        }
    }
    if(s[s.size()-1]=='B')
    {
         v.push_back(count);
                re++;
    }
    cout<<re<<endl;
    for(int i=0;i<re;i++)
    {
            cout<<v[i]<<" ";
    }
    return 0;
}
