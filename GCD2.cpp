#include<iostream>
#include<cstring>
#include<malloc.h>
using namespace std;

long int gcd(long int n, long int m)
{
    if(m == 0)
        return n;
    return gcd(m, n%m);
}

int main()
{
    int t, top;
    long int n, m;
    cin>>t;
    while(t--)
    {
        char s[300];
        cin>>n>>s;
        m = top = 0;
        if(n == 0)
        {
            int k=0;
            for(int i=0;i<strlen(s) && k==0;i++)
                k += s[i]-'0';
            if(k == 0)
                cout<<0<<endl;
            else
                cout<<s<<endl;
            continue;
        }
        while(top < strlen(s))
        {
            while(m < n && top<strlen(s))
            {
                m = m*10 + s[top++]-'0';
            }
            if(m != 0)
                m %= n;
        }
        cout<<gcd(n, m)<<endl;
    }
    return 0;
}
