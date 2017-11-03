#define _USE_MATH_DEFINES

#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <list>
#include <iomanip>
#include <stack>
#include <map>
#include <set>
#include <queue>
#include <string>
#include <algorithm>
#include <cstring>
#include <cstdlib>
#include <cassert>
#include <cstring>
#include <ctime>

#define all(a) a.begin(),a.end()
#define pb push_back
#define mp make_pair
#define forn(i,n) for(int i = 0; i < int(n); ++i)
#define sz(a) int(a.size())

using namespace std;

typedef long long li;
typedef long double ld;

typedef pair<int,int> pt;
#define ft first
#define sc second

string ans[4] = {
	"fantasy",
	"forward",
	"backward",
	"both"
};
bool fs,ss;

bool solve(string a,string b,string c) {
    fs=false,ss = false;
    int fPos = a.find(b);
    if(fPos!=-1 and (fPos + (int)b.size()) <(int)a.size()){
        fPos = a.find(c,(fPos + (int)b.size()));
        if(fPos !=-1)
        {
            return true;
        }
    }
    return false;
}

int main() {
//    string str1,str2;
//    cin>>str1>>str2;
//    cout<<(long long)str1.find(str2)<<endl;
	//freopen("in", "r", stdin);
	//freopen("output.txt", "w", stdout);

    string a,b,c;
	while (cin>>a>>b>>c)
    {
		int F = solve(a,b,c);
		reverse(a.begin(),a.end());
		int B = solve(a,b,c);
        if(F and B)
            cout<<"both"<<endl;
        else if(F)
            cout<<"forward"<<endl;
        else if(B)
            cout<<"backward"<<endl;
        else
            cout<<"fantasy"<<endl;
    }

	return 0;
}
