#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,r="";
    int j=0;
    cin>>str;
    str +="WUB";
    for(int i =0; i<str.length(); i++)
    {
        if(str[i]=='W'&&str[i+1]=='U'&&str[i+2]=='B')
        {
            if(r[r.length()-1]!=' '&&r.length()!=0)
                r +=' ';
            i+=2;

        }
        else
        {
            r +=str[i];

        }

    }
    r.erase(r.length()-1);
    cout<<r;
    return 0;
}
