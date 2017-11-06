#include<bits/stdc++.h>
using namespace std;
int arr[5];
int main()
{
    //freopen("in.txt","r",stdin);

    int tc,i,group,taxi,num,pone;
     arr[1]=arr[2]=arr[3]=arr[4]=taxi=0;
        cin>>group;
        for(i =0; i<group; i++)
        {
            cin>>num;
            arr[num]++;
        }
        taxi +=arr[4];              // We have to need arr[4] taxis
        if(arr[3]>=arr[1])
        {
            taxi += arr[1];
            taxi +=(arr[3]-arr[1]);
            arr[1]=0;               // All one are used.
        }
        else{
            taxi += arr[3];
            arr[1] -= arr[3];       // Total used one's are arr[3]
        }
        pone =arr[1]/2;
        taxi += (arr[2]+pone)/2;
        if(arr[1]&1 || (arr[2]+pone)&1)
            taxi++;
        cout<<taxi<<endl;
    

    return 0;

}
