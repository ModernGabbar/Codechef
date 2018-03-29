#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int t, n, k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(k > n-k)
            k = n-k;

        int i; long int minw=0, sum=0, a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            sum += a[i];
        }
        while(k--)
        {
            for(i=0; i<n; i++)
            {
                if(a[minw] > a[i])
                    minw = i;
            }
            sum -= 2*a[minw];
            a[minw] = sum;
        }
        cout<<sum<<endl;
    }
    return 0;
}
