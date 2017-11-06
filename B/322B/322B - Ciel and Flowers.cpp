#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long r,g,b,rm,bm,gm,res=0,m;
    cin>>r>>g>>b;
    rm = r%3;
    gm= g%3;
    bm = b%3;
    res= ((r-rm)/3) + ((g-gm)/3) + ((b-bm)/3);
    if(rm!=0 && gm!=0 && bm!=0)
    {
        if(rm==2 && gm==2 && bm==2)
            res +=2;
        else
            res++;

    }
    else if( r!=0&&g!=0&&b!=0)
    {
        if((rm==2 && gm==2)||(rm==2 && bm==2)|| (gm==2 && bm==2))
        {
            res++;
        }
    }
    cout<<res;

    return 0;
}
