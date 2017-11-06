#include<iostream>
using namespace std;
int main()
{
    int num, result,a[4];
    cin>>num;
    for(int j =++num;         ;j++)
    {
        num =j;
        for(int i=0; num; i++)
        {
            a[i] = num%10;
            num /=10;
        }
    if(a[0]!=a[1]&&a[0]!=a[2]&&a[0]!=a[3]&&a[1]!=a[2]&&a[1]!=a[3]&&a[2]!=a[3])
        {
            cout<<j;
            break;
        }
    }

    return 0;
}
