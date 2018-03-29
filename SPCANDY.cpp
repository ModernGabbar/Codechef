#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, m;
        cin>>n>>m;
        if(m == 0)
            cout<<"0 "<<n<<endl;
        else
            cout<<n/m<<" "<<n%m<<endl;
    }
    return 0;
}
