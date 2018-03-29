#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int t, i, q, g;
    long long n;
    cin>>t;
    while(t--)
    {
    cin>>g;
    while(g--)
    {
        cin>>i>>n>>q;

        int r = n/2;
        if(n%2 && q!=i)
            r++;
        cout<<r<<endl;
    }
    }
    return 0;
}
