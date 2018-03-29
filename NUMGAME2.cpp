#include<iostream>
using namespace std;

int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        if(n%4 == 1)
            cout<<"ALICE\n";
        else
            cout<<"BOB\n";
    }
    return 0;
}
