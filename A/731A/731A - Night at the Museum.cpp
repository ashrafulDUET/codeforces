#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<stdio.h>
#include<string>
#include<cmath>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> pii;
int main()
{
    //freopen("in.txt","r", stdin);
    string str;
    int res =0,sm;
    char ch ='a';
    cin>>str;
    for(int i =0;i<str.length();i++)
    {
        if(fabs(str[i]-ch)>13)
        {
            res +=(26 - fabs((str[i]-ch)));
            ch = str[i];
        }
        else
        {
            res +=fabs((str[i]-ch));
            ch = str[i];
        }

    }
    cout<<res;

    return 0;
}
