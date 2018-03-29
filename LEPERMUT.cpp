#include<iostream>

using namespace std;

int main()
{
    int t, n, i, j, linv, inv;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++) cin>>a[i];

        linv = inv = 0;
        for(i=0;i<n-1;i++)
        {
            if(a[i] > a[i+1]) linv++;
            for(j=i+1;j<n;j++)
                if(a[i] > a[j]) inv++;
        }
        if(linv == inv)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
