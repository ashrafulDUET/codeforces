#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+5;
const ll mod=1e9+7;
char str[N];
int main()
{
    scanf("%s",str);
    for(int i=1;str[i]!='\0';i++)
    {
        if(str[i]==str[i-1])
        {
            for(int j=0;j<26;j++)
            {
                if(str[i+1]!=j+'a'&&str[i-1]!=j+'a')
                {

                    str[i]=j+'a';
                }
            }
        }
    }
printf("%s",str);
    return 0;
}
