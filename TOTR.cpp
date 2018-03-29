#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
    int n;
    char c, s[27];
    cin>>n>>s;
    getchar();
    while(n--)
    {
        while((c = getchar()) != '\n')
        {
            if(c == '_')
                cout<<" ";
            else if(c>='A' && c<='Z')
                cout<<char(s[c-65] - 32);
            else if(c>='a' && c<='z')
                cout<<char(s[c-97]);
            else
                cout<<c;
        }
        cout<<endl;
    }
    return 0;
}
