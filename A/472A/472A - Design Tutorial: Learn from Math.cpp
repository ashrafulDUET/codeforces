#include<iostream>
using namespace std;
bool check(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    for(int i =4;i<n;i++)
        {
            if(!check(i))
            for(int j =4;j<n;j++)
            {
                if(!check(j))
                {
                    if((i+j)==n)
                    {
                        cout<<i<<" "<<j;
                        return 0;
                    }
                }
            }
        }
    return 0;
}
