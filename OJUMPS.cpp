#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    char n[19];
    int i=0, sum=0;
    cin>>n;
    while(n[i] != '\0')
        sum += n[i++]-'0';

    if(sum == 0)
        cout<<"yes\n";
    else if(sum%3==0 || ((sum-1)%3==0 && (n[strlen(n)-1]-'1')%2==0))
        cout<<"yes\n";
    else
        cout<<"no\n";
    return 0;
}
