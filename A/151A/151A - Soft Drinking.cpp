#include<bits/stdc++.h>
int main()
{

    int n, k, l, c, d, p, nl, np;
    scanf("%d%d%d%d%d%d%d%d",&n, &k, &l, &c, &d, &p, &nl, &np);
        if(     (n<=1000&&n>=1)&&
                (k<=1000&&k>=1)&&
                (l<=1000&&l>=1)&&
                (c<=1000&&c>=1)&&
                (c<=1000&&c>=1)&&
                (p<=1000&&p>=1)&&
                (nl<=1000&&nl>=1)&&
                (np<=1000&&np>=1)
           )
    {
        k = ((k*l)/n)/nl;
        l = ((c*d)/n)/1;
        c = (p/n)/np;

    }
    if(k<l)
    {
        if(k<c)
            printf("%d",k);
        else
            printf("%d",c);

    }
    else if(l<c)
                printf("%d",l);
    else
        printf("%d",c);
    return 0;
}
