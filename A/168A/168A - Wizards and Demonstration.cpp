#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,y;
    cin>>a>>b>>y;
    if(((int)ceil((a*y)/100)-b)<0)
        cout<<0;
    else
        cout<<(int)ceil((a*y)/100)-b;
    return 0;
}
