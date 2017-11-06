#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[102];
    int i;
    cin>>str;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='H'||str[i]=='Q'||str[i]=='9')
        {
            cout<<"YES";
            break;
        }
    }
    if(i==strlen(str))
        cout<<"NO";

    return 0;
}
