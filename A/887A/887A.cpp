#include<bits/stdc++.h>
using namespace std;
int main()
{

    //fRead("in");

    int cnt=0,len;
    string str;
    cin>>str;
    len = str.size();
    for(int i=0;i<len;i++)
    {
        if(str[i]=='1')
        {   cnt=0;
            for(int j=i+1;j<len;j++)
            {
                if(str[j]=='0')
                {
                    cnt++;
                    if(cnt==6)
                    {
                        cout<<"yes"<<endl;
                        return 0;
                    }
                }
            }

            break;
        }
    }
    cout<<"no"<<endl;


    return 0;


}
