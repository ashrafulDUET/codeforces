
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int num,i=0,a=0,d=0;
    cin>>num>>str;
    for(;i<str.size();i++)
    {
        if(str[i]=='A')
            a++;
        else
            d++;
    }
    if(a<d)
        cout<<"Danik";
    else if(a>d)
        cout<<"Anton";
    else
        cout<<"Friendship";

    return 0;
}
