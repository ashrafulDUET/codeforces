#include<iostream>
using namespace std;
int b[5][5];
int main()
{
    int n;
     for(int i =1;i<4;i++)
    {
        for(int j =1;j<4;j++)
        {
            cin>>n;
            if(n%2!=0)
            {
                    b[i][j] = !b[i][j];
                    b[i-1][j] = !b[i-1][j];
                    b[i+1][j] = !b[i+1][j];
                    b[i][j-1] = !b[i][j-1];
                    b[i][j+1] = !b[i][j+1];
            }

        }
    }

    for(int i =1;i<4;i++)
    {
        for(int j =1;j<4;j++)
        {
            cout<<!b[i][j];
        }
        cout<<endl;
    }
    return 0;
}
