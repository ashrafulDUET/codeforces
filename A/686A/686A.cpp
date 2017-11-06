#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    char ch;
    long long temp,x;
   int n,dipress=0;
   cin>>n>>x;
   for(int i =1 ;i<=n;i++)
   {
        cin>>ch>>temp;
        if(ch=='+')
        {
            x +=temp;
        }
        else
        {
            if(temp<=x)
            {
                x -=temp;
            }
            else
            {
                dipress ++;
            }
        }
   }
   cout<<x<<" "<<dipress;
    return 0;
}
