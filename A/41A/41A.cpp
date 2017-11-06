#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,t;
    int i,ls,lt;

    cin>>s>>t;
    ls =s.size();
    lt=t.size();
    if(ls==lt)
    {
        for(i=0;i<ls;i++)
        {
            if(s[i]!=t[lt-i-1])
            {
                cout<<"NO";
                break;
            }
        }
        if(i==ls)
            cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}
