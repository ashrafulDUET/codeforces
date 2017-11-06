#include<iostream>
#include<stdio.h>
using namespace std;
struct stu
{
    int num1,num2;
};
int main()
{
    char ch[10];
    int i;
    struct stu obj[100];
    int test;
    //freopen("in.txt","r",stdin);
    cin>>test;

    for ( i = 0;i<test;i++)
    {
        cin>> ch>>obj[i].num1>>obj[i].num2;
        if(obj[i].num1>=2400&&(obj[i].num1<obj[i].num2))
        {
            cout<<"YES";
            break;
        }
    }
    if(i==test)
        cout<<"NO";



    return 0;
}
