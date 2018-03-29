#include<iostream>
#include<cstdlib>
using namespace std;

int checksum(int *a, int n, int  m, int i=0, int sum=0)
{
    if(sum == m)
        return 1;

    if(i==n || sum>m)
        return 0;

    return checksum(a, n, m, i+1, sum) || checksum(a, n, m, i+1, sum+a[i]);
}

int main()
{
    int t, n, m, i, *a = (int*)malloc(sizeof(int)*21);
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        i = 0;
        while(i < n)
        {
            cin>>a[i];
            if(a[i] <= m)
                i++;
            else
                n--;
        }

        if(checksum(a, n, m))
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
