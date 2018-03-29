#include<iostream>
using namespace std;

int main()
{
    int t, i, k, n, cnt;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int s[n];
        for(i=0;i<n;i++)
            cin>>s[i];
        cin>>k;

        cnt = 0;
        for(i=0;i<n;i++)
        {
            if(s[i] < s[k - 1])
                cnt++;
        }
        cout<<cnt+1<<endl;
    }
    return 0;
}
