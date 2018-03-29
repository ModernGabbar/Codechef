#include<iostream>
using namespace std;

int main()
{
    long long int n, i, m;
    cin>>n;
    long long int t=n-1, c[n];
    for(i=0; i<n; i++)
        cin>>c[i];

    i=0; m=n;
    while(t && i<m)
    {
        while(n<c[i] && t)
        {
            n += t; t--;
        }
        n -= c[i++];
    }
    if(n<0 || i==m)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}
