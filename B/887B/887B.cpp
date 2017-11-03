#include<bits/stdc++.h>
using namespace std;
bool a[10];
bool b[10];
bool c[10];
int main()
{

    //fRead("in");
    //cout<<a[0]<<b[0]<<c[2]<<endl;
    int i,n,temp;
    cin>>n;
    for(i=0;i<6;i++)
        {
            cin>>temp;
            a[temp]=true;
        }

    //cout<<(int)a.find(1)<<endl;;
    if(n==1){
        for(i=1;i<=9;i++)
        {
            if(a[i]!=true){
                cout<<i-1<<endl;
                return 0;
            }
        }
        if(i==10)
            cout<<9<<endl;
    }
    for(i=0;i<6;i++)
        {
            cin>>temp;
            b[temp]=true;
        }
    if(n==2)//-------------------------------2
    {
        for(i=1;i<10;i++)
        {
            if(!(a[i] or b[i]))
            {
                cout<<i-1<<endl;
                return 0;
            }
        }
        for(i=10;i<100;i++)
        {
            if(!(((a[((i/10)%10)] and b[(i%10)])) || (a[((i)%10)] and b[((i/10)%10)])))
            {
                cout<<i-1<<endl;
                return 0;
            }
        }
        cout<<99<<endl;
    }
    for(i=0;i<6;i++)//-------------------------------3
        {
            cin>>temp;
            c[temp]=true;
        }
    for(i=1;i<10;i++)
        {
            if(!(a[i] or b[i] or c[i]))
            {
                cout<<i-1<<endl;
                return 0;
            }
        }
        for(i=10;i<100;i++)
        {
            if(!(((a[((i/10)%10)] and b[(i%10)])) || (a[((i)%10)] and b[((i/10)%10)]) || ((b[((i/10)%10)] and c[(i%10)])) || (b[((i)%10)] and c[((i/10)%10)]) || ((c[((i/10)%10)] and a[(i%10)])) || (c[((i)%10)] and a[((i/10)%10)])))
            {
                cout<<i-1<<endl;
                return 0;
            }
        }
        for(i=100;i<1000;i++)
        {
            if(!(((a[((i/10)%10)] and b[((i/10)%10)]) and c[(i%10)]) ||((a[((i/10)%10)] and c[((i/10)%10)]) and b[(i%10)]) || ((b[((i/10)%10)] and a[((i/10)%10)]) and c[(i%10)]) || ((b[((i/10)%10)] and c[((i/10)%10)]) and a[(i%10)]) ||((c[((i/10)%10)] and a[((i/10)%10)]) and b[(i%10)]) ||((c[((i/10)%10)] and b[((i/10)%10)]) and a[(i%10)])))
            {
                cout<<i-1<<endl;
                return 0;
            }
        }
        cout<<999<<endl;

    return 0;


}
