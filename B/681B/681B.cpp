#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long num,a=1234567,b=123456,c=1234;
    int i,j,k,q=1,t=800;
    //freopen("in.txt","r",stdin);
    cin>>num;
        for(i =0;(i<t)&&(q!=0);i++)
        {
            for(j =0;j<t;j++)
                {
                    if((num-(i*a+j*b))>=0)
                    {

                            if((num-(i*a+j*b))%c==0)
                            {
                                cout<<"YES";
                                q=0;
                                break;
                            }
                    }
                    else
                    {

                        break;
                    }

                }
        }
        if(q)
            cout<<"NO";
    return 0;
}
