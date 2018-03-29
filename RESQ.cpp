#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long int i = long(sqrt(n));
        while(i>0)
        {
            if(n%i == 0)
                break;
            i--;
        }
        cout<<n/i-i<<endl;
    }
    return 0;
}
