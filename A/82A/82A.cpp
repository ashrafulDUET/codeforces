#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    unsigned int n,m=0,j;
    cin>>n;
    for(j=0;;j++)
    {

        m= 5*pow(2,j);
        if(m<n)
        {
            //cout<<n<<"-"<<m<<"=pow(2,"<<j<<")=";
        n = n-m;
       //cout <<n<<endl;
        }
        else
        {
            break;
        }

    }
    m= pow(2,j);
    n=ceil((double)n/m);
    switch(n)
    {
    case 1:
        cout<<"Sheldon";
        break;
    case 2:
        cout<<"Leonard";
        break;
    case 3:
        cout<<"Penny";
        break;
    case 4:
        cout<<"Rajesh";
        break;
    case 5:
        cout<<"Howard";
        break;

    }
    return 0;
}
