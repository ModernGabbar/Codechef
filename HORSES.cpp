#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t, i, j, n, minV;
    cin>>t;
    while(t--)
    {
        minV = 0x3f3f3f3f;
        cin>>n;
        long long int s[n];
        for(i=0; i<n; i++)
            cin>>s[i];
        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(abs(s[i]-s[j]) < minV)
                    minV = abs(s[i] - s[j]);
            }
        }
        cout<<minV<<endl;
    }
    return 0;
}
