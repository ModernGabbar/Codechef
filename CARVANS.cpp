#include<iostream>

using namespace std;

int main()
{
    int t, n, i, minS, cnt;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        minS = a[0]; cnt = 1;
        for(i=1;i<n;i++)
        {
            if(a[i] < minS)
            {
                cnt++; minS = a[i];
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
