#include<iostream>
#include<cmath>
using namespace std;

long long int ax(long long x)
{
    return x*(x+1)/2;
}

int main()
{
    int t;
    long long int an, s1, s2;
    cin>>t;
    while(t--)
    {
        cin>>an;
        s2 = (1 + sqrt(1 + 8*an))/2;
        s1 = s2 - 1;
        if(ax(s1) == an)
            cout<<s1<<endl;
        else
            cout<<min(s1+an-ax(s1), s2+ax(s2)-an)<<endl;
    }
    return 0;
}
