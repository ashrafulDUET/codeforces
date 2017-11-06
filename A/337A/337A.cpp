#include<iostream>
#include<algorithm>
#include<vector>
#include<stdio.h>
 using namespace std;
 int main()
 {
    int n,m,num;
    //freopen ("in.txt","r",stdin);
    vector<int> vec;
    cin>>n>>m;
    for(int i =0;i<m; i++)
    {
        cin>>num;
        vec.push_back(num);
    }
    sort(vec.begin(),vec.end());
    int least = vec[n-1]-vec[0];
    //for(int i =0;i<m;i++)
    //{
    //    cout<<vec[i]<< " ";
    //}
    for(int i =1; i<=m-n;i++)
    {
        if((vec[n+i-1]-vec[i]<least))
        {
            least = vec[n+i-1]-vec[i];
        }
    }
    cout<<least;
     return 0;
 }
