#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    for(int i=1;i<=r; i++)
    {
        for(int j =1;j<=c; j++)
        {
            if(i&1)
                cout<<"#";
            else
            {
                if(i%4==0&&j==1)
                    cout<<"#";
                else if(i%4!=0&&j==c)
                    cout<<"#";
                else
                    cout<<".";
            }

        }
        cout<<endl;
    }
    return 0;
}
