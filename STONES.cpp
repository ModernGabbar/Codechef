#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
    int t;
    char j[101], s[101];
    cin>>t;
    while(t--)
    {
        cin>>j>>s;
        int cnt=0;
        for(int i=0; s[i]!='\0'; i++)
        {
            for(int k=0; j[k]!='\0'; k++)
            {
                if(s[i] == j[k])
                {
                    cnt++;
                    break;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
