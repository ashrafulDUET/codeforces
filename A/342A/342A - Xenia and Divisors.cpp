#include<iostream>
#include<vector>
#include<deque>
using namespace std;
deque<int>v1,v2,v3,v4,v6,v;
int main()
{
    int t,n,flag=1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {

        cin>>n;
        if(n==5||n==7)
        {
            cout<<-1;
            flag=0;
            break;
        }
        else
        {
            switch(n)
            {
            case 1:
                v1.push_back(n);
                break;
            case 2:
                v2.push_back(n);
                break;
            case 3:
                v3.push_back(n);
                break;
            case 4:
                v4.push_back(n);
                break;
            case 6:
                v6.push_back(n);
                break;
            }
        }


    }
    while((!v1.empty()||!v2.empty()||!v3.empty()||!v4.empty()||!v6.empty())&&flag)
    {
        if(!v1.empty())
            {
                v.push_back(v1[0]);
                v1.pop_front();
                if(!v2.empty())
                {
                    v.push_back(v2[0]);
                    v2.pop_front();
                    if(!v4.empty())
                    {
                        v.push_back(v4[0]);
                        v4.pop_front();
                    }
                    else if(!v6.empty())
                    {
                        v.push_back(v6[0]);
                        v6.pop_front();
                    }
                    else
                    {
                        cout<<-1;
                        flag=0;
                        break;
                    }
                }
                else if(!v3.empty())
                {
                    v.push_back(v3[0]);
                    v3.pop_front();
                    if(!v6.empty())
                    {
                        v.push_back(v6[0]);
                        v6.pop_front();
                    }
                    else
                    {
                        cout<<-1;
                        flag=0;
                        break;
                    }
                }
                else
                {
                    cout<<-1;
                    flag=0;
                    break;
                }
            }
            else if(!v2.empty())
                {
                    v.push_back(v2[0]);
                    v2.pop_front();
                    if(!v4.empty())
                    {
                        v.push_back(v4[0]);
                        v4.pop_front();
                    }
                    else if(!v6.empty())
                    {
                        v.push_back(v6[0]);
                        v6.pop_front();
                    }
                    else
                    {
                        cout<<-1;
                        flag=0;
                        break;
                    }
                }
            else
            {
                cout<<-1;
                flag=0;
                break;
            }
    }
    if(flag)
        for(int i=0;i<v.size();i +=3)
        {
            cout<<v[i]<< " "<<v[i+1]<<" "<<v[i+2]<<endl;
        }

    return 0;
}
