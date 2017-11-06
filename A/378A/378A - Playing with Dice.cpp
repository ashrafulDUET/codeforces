#include<bits/stdc++.h>
int main()
{

    int i,a,b,p1=0,p2=0,draw=0;
    scanf("%d%d",&a,&b);
        for(i = 1;i<7;i++)
        {
            if(abs(a-i)>abs(b-i))
                p2++;
            else if(abs(a-i)< abs(b-i))
                p1++;
            else
                draw++;
        }
        printf("%d %d %d",p1,draw,p2);
    
return 0;
}
