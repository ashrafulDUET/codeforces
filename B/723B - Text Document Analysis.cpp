#include<iostream>
#include<string>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
    string s;
    char ch='0',ci='0';
    int cw=0,max =0,count=0,l,w=0,wc=0,lastc;
    cin>>l>>s;
    l++;
    s +='_';
    for(int i =0;i<l;i++)
    {
        if(s[i]=='('||s[i]==')')
            {
                ch=s[i];

            }
            if(s[i]=='(')
                ci = s[i];

        if(s[i]!='_'&&ch=='0')
        {
            count++;
        }
        else
        {
            if(s[i]==')')
                {
                    ch='0';
                    ci='0';
                    lastc=i;

                }
            if(max<count)
                max = count;
            count =0;
        }
        if(s[i]!='_'&&s[i]!='('&&ci=='(')
        {
            w++;
        }
        else
        {
            if(w>0)
                wc++;
            w =0;
        }
    }
    //cout<<max<<" "<<wc<<endl;

    cout<<max<<" "<<wc;
    return 0;
}
