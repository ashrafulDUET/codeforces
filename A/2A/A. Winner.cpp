#include <bits/stdc++.h>
typedef long long int LL;
using namespace std;
LL score[1002],maxi=-1001;
int main() {
    //freopen("in","r",stdin);
  int n,num;
  //cout<<maxi<<endl;
  scanf("%d", &n);
  map<string,int> mp,mpre; string name[1002];
  for (int i = 0; i < n; i++) {
    string w;
    cin >> w>>num;
    score[i]=num;
    name[i] =w;
    if (mp.find(w) != mp.end()){
            mp[w]+=num;
    }else{
        mp[w]=num;
    }
  }
  for(map<string,int>::iterator it=mp.begin(); it!=mp.end(); ++it)
    {
        if(it->second > maxi){
            maxi= it->second;
        }
    }
  for (int i = 0; i < n; i++) {
        if (mpre.find(name[i]) != mpre.end()){
                mpre[name[i]] += score[i];
        }else{
            mpre[name[i]] = score[i];
        }
    if(mpre[name[i]]>= maxi and mp[name[i]]==maxi){
        cout<<name[i]<<endl;
        return 0;
    }
  }
  return 0;
}
/*
Input
15
aawtvezfntstrcpgbzjbf 681
zhahpvqiptvksnbjkdvmknb -74
aawtvezfntstrcpgbzjbf 661
jpdwmyke 474
aawtvezfntstrcpgbzjbf -547
aawtvezfntstrcpgbzjbf 600
zhahpvqiptvksnbjkdvmknb -11
jpdwmyke 711
bjmj 652
aawtvezfntstrcpgbzjbf -1000
aawtvezfntstrcpgbzjbf -171
bjmj -302
aawtvezfntstrcpgbzjbf 961
zhahpvqiptvksnbjkdvmknb 848
bjmj -735
Output:
aawtvezfntstrcpgbzjbf
*/
