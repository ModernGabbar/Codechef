#include<iostream>
using namespace std;

int main()
{
    int t, n, x, i, sum, val, minV;
    cin>>t;
    while(t--)
    {
        sum = 0; minV = 101;
        cin>>n>>x;
        while(n--)
        {
            cin>>val;
            if(minV > val)
                minV = val;
            sum += val;
        }
        if(sum % x >= minV)
            cout<<-1<<endl;
        else
            cout<<sum/x<<endl;
    }
    return 0;
}
