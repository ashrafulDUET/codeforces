#include<iostream>
using namespace std;
char q[10]={'q','w','e','r','t','y','u','i','o','p'};
char a[10]={'a','s','d','f','g','h','j','k','l',';'};
char z[10]={'z','x','c','v','b','n','m',',','.','/'};
char R(char ch)
{
    for(int i =0;i<10;i++)
    {
        if(ch==q[i])
        {
            return q[i-1];
        }
    }
    for(int i =0;i<10;i++)
    {
        if(ch==a[i])
        {
            return a[i-1];
        }
    }
    for(int i =0;i<10;i++)
    {
        if(ch==z[i])
        {
            return z[i-1];
        }
    }
}
char L(char ch)
{
    for(int i =0;i<10;i++)
    {
        if(ch==q[i])
        {
            return q[i+1];
        }
    }
    for(int i =0;i<10;i++)
    {
        if(ch==a[i])
        {
            return a[i+1];
        }
    }
    for(int i =0;i<10;i++)
    {
        if(ch==z[i])
        {
            return z[i+1];
        }
    }
}
int main()
{

    char str[101],ch;
    cin>>ch;
    cin>>str;
    if(ch=='R')
    {
        for(int i = 0;str[i]!='\0';i++)
        {
            cout<<R(str[i]);
        }
    }
    else
    {
        for(int i = 0;str[i]!='\0';i++)
        {
            cout<<L(str[i]);
        }
    }


    return 0;
}
