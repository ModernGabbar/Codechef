#include<iostream>
using namespace std;

int main()
{
    int t, a, b, flag;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        a += b;
        b = a; flag = 1;
        while(flag)
        {
            flag = 0; b++;
            for(int i=2;i*i<=b;i++)
            {
                if(b%i == 0)
                {
                    flag = 1;
                    break;
                }
            }
        }
        cout<<b-a<<endl;
    }
    return 0;
}
