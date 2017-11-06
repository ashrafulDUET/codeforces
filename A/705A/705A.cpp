#include<iostream>
#include<string>
using namespace std;
int n;
int main()
{
    cin>>n;
    for(int i=1;i<=n; i++)
    {
        cout<<"I ";
        if(i%2==0)
        {
            cout<<"love ";
        }
        else
        {
            cout<<"hate ";
        }
        if(i==n||n==1)
            cout<<"it";
        else
            cout<<"that ";
    }
    return 0;
}
