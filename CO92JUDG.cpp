#include<iostream>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long int maxt=0, time, ttime=0;
        for(int i=1; i<=2*n; i++)
        {
            cin>>time;
            if(maxt < time) // Find max value of time taken by player.
                maxt = time;

            if(i <= n)
                ttime += time;
            else
                ttime -= time;

            if(i == n)
            {
                ttime -= maxt;
                maxt = 0;
            }
        }
        ttime += maxt;
        if(ttime < 0)
            cout<<"Alice\n";
        else if(ttime > 0)
            cout<<"Bob\n";
        else
            cout<<"Draw\n";
    }
    return 0;
}
