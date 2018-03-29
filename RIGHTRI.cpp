#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int i, cnt=0;
    long int n;
    cin>>n;
    while(n--)
    {
        int x[3], y[3], a[3];
        for(i=0;i<3;i++) cin>>x[i]>>y[i];
        a[0] = (x[0]-x[1])*(x[0]-x[1]) + (y[0]-y[1])*(y[0]-y[1]);
        a[1] = (x[1]-x[2])*(x[1]-x[2]) + (y[1]-y[2])*(y[1]-y[2]);
        a[2] = (x[0]-x[2])*(x[0]-x[2]) + (y[0]-y[2])*(y[0]-y[2]);
        if(a[0]==a[1]+a[2] || a[1]==a[0]+a[2] || a[2]==a[0]+a[1])
            cnt++;
    }
    cout<<cnt;
    return 0;
}
