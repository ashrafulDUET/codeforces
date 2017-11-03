#include<bits/stdc++.h>
using namespace std;
int fr,fc,sr,sc;
vector<string>re;
bool tCol()
{
    if(fc == sc)
    {
        if(fr<sr)
            for(int i=0;i<(sr-fr);i++)re.push_back("U");
        else
            for(int i=0;i<(fr-sr);i++)re.push_back("D");
        return 1;
    }
    return 0;
}
bool tRow()
{
    if(fr == sr)
    {
        if(fc<sc)
         for(int i=0;i<(sc-fc);i++)re.push_back("R");
        else
            for(int i=0;i<(fc-sc);i++)re.push_back("L");
        return 1;
    }
    return 0;
}
bool ispDia(){
    if((fr-fc) == (sr-sc))
    {
        for(int i=0;i<abs(fr-sr);i++)
            if(fr>sr)
                re.push_back("LD");
            else
                re.push_back("RU");
        return 1;
    }
    return 0;
}
bool issDia(){
    if((fr+fc) == (sr+sc))
    {
        for(int i=0;i<abs(fr-sr);i++)
            if(fr>sr)re.push_back("RD");
            else re.push_back("LU");
        return 1;
    }
    return 0;
}
int main()
{
    string fstr,sstr;
    cin>>fstr>>sstr;
    fc = fstr[0]-96;
    fr = fstr[1]-48;
    sc = sstr[0]-96;
    sr = sstr[1]-48;
    //cout<<fc<<" "<<fr<<" "<<sc<<" "<<sr<<endl;
    int k=0;
    while(1)
    {
        k++;
        if(tCol() or tRow() or ispDia() or issDia()){
            cout<<re.size()<<endl;
            for(int i=0;i<re.size();i++)
            {
                cout<<re[i]<<endl;
            }
            return 0;
        }
        else if(fc<sc){
            if(fr<sr)
            {
                re.push_back("RU");
                fr++;fc++;
            }else{
                re.push_back("RD");
                fr--;fc++;
            }
        }else if(fr<sr){
            re.push_back("LU");
            fr++;fc--;
        }
        else{
            re.push_back("LD");
            fr--;fc--;
        }
        if(k>8){
            cout<<re.size()<<endl;
            for(int i=0;i<re.size();i++)
                cout<<re[i]<<endl;
            return 0;
        }

    }

    return 0;
}
