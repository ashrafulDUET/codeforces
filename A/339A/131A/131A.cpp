#include<iostream>
#include<string.h>
#include<ctype.h>
 using namespace std;
 char display(char ch[],int len)
 {
     int i;
     for(i =1;i<len;i++)
            {
                ch[i]=tolower(ch[i]);
            }
 }
 int main()
 {
     int i,len,set= 1;
     char c,ch[101],ch1[101];
     cin>>ch;
     len = strlen(ch);
     if(len==1&&isupper(ch[0]))
        {
            cout<<(char)tolower(ch[0]);

            return 0;
        }
    else if(len==1)
        {
            cout<<(char)toupper(ch[0]);
            return 0;
        }
        for(int i= 1; i<len-1;i++)
        {
            if(islower(ch[i])&&isupper(ch[i+1])||islower(ch[i+1])&&isupper(ch[i]))
            {
                cout<<ch;
                return 0;
            }

        }
       if(islower(ch[0])&&isupper(ch[1]))
       {
            display(ch,len);
            ch[0]=toupper(ch[0]);
            cout<<ch;

       }
       else if(isupper(ch[0])&&isupper(ch[1]))
       {
           display(ch,len);
           ch[0]=tolower(ch[0]);
        cout<<ch;
       }
        else
            cout<<ch;


    return 0;
 }
