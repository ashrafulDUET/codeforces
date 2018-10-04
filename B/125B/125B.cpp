#include<bits/stdc++.h>
using namespace std;
stack<char>st;
int main()
{
    string inp; int len;
    cin>>inp;
    len = inp.length();
    for(int i=0;i<len;i+=3)
    {
        if(inp[i+1]!='/')
        {
            for(int j=0;j<2*(int)st.size() ; j++)
                cout<<" ";
            cout<<inp[i]<<inp[i+1]<<inp[i+2]<<endl;
            st.push(inp[i+1]);
        }
        else
        {
            st.pop();
            for(int j=0;j<2*(int)st.size() ; j++)
                cout<<" ";
            cout<<inp[i]<<inp[i+1]<<inp[i+2]<<inp[i+3]<<endl;
            i++;
        }
    }

    return 0;
}
