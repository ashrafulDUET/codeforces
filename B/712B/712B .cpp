#include<iostream>
#include<string>
#include<cmath>
#include<stdio.h>
using namespace std;
string  str;
int main()
{
    //freopen("in.txt","r",stdin);
    int l=0,r=0,u=0,d=0;
    cin>>str;
    if(str.length()&1)
    {
        cout<<-1;
    }
    else
    {
        for(int i=0;i<str.length();i++)
        {
            switch(str[i])
            {
            case 'R' :
                r++;
                break;
                case 'L' :
                l++;
                break;
                case 'D' :
                d++;
                break;
                case 'U' :
                u++;
                break;
            }
        }
        l = fabs(l-r);
        d = fabs(d-u);
        if(l == d)
        {
            cout<<l;
        }
        else if(l<d)
        {
            cout<<((d-l)/2)+l;
        }
        else
        {
            cout<<((l-d)/2)+d;
        }
    }
    return 0;
}
